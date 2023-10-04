#include <stdio.h>

int hapf(int value); // hapf 함수선언

void main()
{
	printf("1부터 10까지의 합은 %d\n", hapf(10)); // 출력물들
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}
int hapf(int value)
{

	int hap = 0; // hap 변수 선언
	int i = 1; // i = 1

	while (i <= value) { // i는 value값까지
		
		hap = hap + i;
		i++; // i에 1씩 더함
		
	}
	return hap;
}