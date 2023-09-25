#include <stdio.h>

int main() {
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < floor - 1 - i; j++) {
			printf(" "); // 공백이 더 이뻐서 S대신 공백으로 바꿨습니다.

		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}