#include <stdio.h>

int multif(int value); // multf 함수 선언

int main()
{
	printf("1부터 2까지의 곱은 %d\n", multif(2)); // 출력
	printf("1부터 3까지의 곱은 %d\n", multif(3));
	printf("1부터 5까지의 곱은 %d\n", multif(5));

}

int multif(int value) {
	int i = 1; // i 변수지정
	long multi = 1; // long 변수지정

	while( i <= value) {
		multi= multi * i; // ex) multi = 1 * 1 , multi = 1 * 2
		i++; // i에 1더함
	}
	return multi;
	return 0;
}
