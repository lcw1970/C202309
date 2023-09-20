#include <stdio.h>

int main() {
	int num = 0; // 정수형 변수 num 생성
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num); // scanf로 num에 숫자 받음
	if (num == 0) { // num이 0일때
		printf("zero");
	}
	else if (num == 1) { // num이 1일때
		printf("one");
	}
	else if (num == 2) { // num이 2일때
		printf("two");
	}
	else { // num이 0~2가 아닐때
		printf("not 0 ~ 2");
	}
}