#include <stdio.h>

#define  X  1 //  x = 1이라고 선언
#define  PI 3.141592 // PI = 3.141592 파이선언

int main()
{
	double z; // 실수형 변수 z 선언

	z = X + PI; // 1 + 3.141592

	printf("%f", z); // z출력
}