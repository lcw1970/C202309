#include <stdio.h>
#define STUDENTS 5

void classifStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학새은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int main() {
	// 학생들의 성적을 저장할 배열 선언
	int scores[STUDENTS];

	// 학생들의 성적 입력 받기
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입려하시오");
	scanf_s("%c", &target, 1);

	// 학생들의 성적 분류 및 출력
	classifStudents(scores, target);

	return 0;
}