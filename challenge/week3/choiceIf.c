#include <stdio.h>

int main() {
	int choice; // 정수형 변수 choice 생성
	printf("1. 파일 저장\n"); // 조건 입력
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice); // scanf로 숫자를 choice에 입력받는다.

	if (choice == 1) { // choice가 1일때 
		printf("파일을 저장합니다.");
	}
	else if (choice == 2) { // choice가 2일때
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3) { // choice가 3일떄
		printf("종료합니다.");
	}
	else { // 1, 2, 3외에 다른걸 입력했을때
		printf("잘못 입력하셨습니다.");
	}
}