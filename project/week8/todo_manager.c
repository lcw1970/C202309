#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 저장하기 위한 변수


void addTask(char task[]) { // 할 일을 추가하기 위한 함수
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", task, (int)sizeof(task));
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("할 일 ""%s""가 저장되었습니다\n\n", task);
}

void delTask(int delIndex, int taskCount) { // 할 일을 삭제하기 위한 함수

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) { // 할 일의 목록을 보여주는 함수
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() {
	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0;
		int delIndex = -1; // 할 일 삭제를 위한 인덱스

		int modifyIndex = -1; // 할 일 수정을 위한 인덱스
		char ch;

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1: // case 1은 할 일을 추가하기 위한 실행
			addTask(tasks[taskCount]); // 함수 호출
			taskCount++;
			break;
		case 2: // case 2는 할 일을 삭제하기 위한 실행
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) { // 삭제할 index가 taskCount보다 크면 범위를 벗어남
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount); // 함수 호출
				taskCount -= 1;
			}
			break;
		case 3: // case 3는 할 일 목록보여줌
			printf("할 일 목록\n");
			printTask(taskCount); // 함수 호출
			break;
		case 4: // case 4는 프로그램 종료
			terminate = 1; // 아래 if문에서 terminate가 1이면 프로그램을 종료하는 if문 생성
			break;
		case 5: // case 5는 할 일 수정하는 case printf로 수정 할 번호를 입력받아서 수정
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작): ");
			scanf_s("%d", &modifyIndex);
			ch = getchar(); // 범위 초기화
			printf("새로운 할 일을 입력해주세요");
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));
			printf("새로운 할 일이 추가되었습니다: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) { // case 4에서 이어진다.
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
		if (taskCount == 10) {
			printf("할 일이 %d개로 다 찼습니다.", taskCount);
			break;
		}
	}
	return 0;
}