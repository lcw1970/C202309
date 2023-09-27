#include <stdio.h>

int main() {
	int floor;

	printf("몇 층을 쌓겠습니다? (5~100)"); // 얼마나 쌓을지 물어보는것
	scanf_s("%d", &floor); // floor 변수를 scanf로 입력받음

	for (int i = 0; i < floor; i++) { // i는 0부터시작해서 floor밑으로 줄
		for (int j = 0; j < i; j++) {
			printf(" "); // 공백처리 
		}
		for (int j = 2*floor-1; j >2*i; j--) { // ex)6개면 첫줄이 11개 그래서 시작이 floor x 2 -1  j는 최소 i*2보다 크고 j는 감소시켜서 *의 개수 줄이기
			printf("*"); // 별 쌓기
			
		}
		printf("\n"); // 줄바꿈
	}
}