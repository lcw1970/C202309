#include <stdio.h>

int main()
{
	int x = 4; // x 변수 4선언
	int y = 2; // y 변수 2선언
	int z; // 정수형 변수 z선언

	z = x + y; // 4 + 2 = z
	printf("z = x + y = %d\n", z); // + 연산자 결과 출력
	z = x - y; // 4 - 2 = z
	printf("z = x - y = %d\n", z); // - 연산자 결과 출력
	z = x * y; // 4 * 2 = z
	printf("z = x * y = %d\n", z); // * 연산자 결과 출력
	z = x / y; // 4 / 2 = z
	printf("z = x / y =  %d\n", z); // / 연산자 결과 출력

}