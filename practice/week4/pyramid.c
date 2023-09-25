#include <stdio.h>

int main() {
	int floor; // floor라는 정수형 변수 
	printf("몇 층을 쌓겠습니까? (5~100)"); // 층수를 물어본다.
	scanf_s("%d", &floor); // floor의 변수에 숫자 입력

	for (int i = 0; i < floor; i++) { // floor줄을 출력
		for (int j = 0; j < floor - 1 - i; j++) { // floor줄 -1-i
			printf(" "); // 공백이 더 이뻐서 S대신 공백으로 바꿨습니다.

		}
		for (int k = 0; k < i * 2 + 1; k++) { // *을 i*2+1만큼 출력
			printf("*");
		}
		printf("\n"); // 줄바꿈
	}
}