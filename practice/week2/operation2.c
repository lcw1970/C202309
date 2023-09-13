#include < stdio.h>

int main()
{
	int x = 4; // x 변수 4 선언
	int y = 2; // y 변수 2 선언
	int z; // 정수형 변수 z 선언

	z = (x + y) * (x - y); // z = (4 + 2) x (4 - 2)
	printf("z = ( x + y ) * (x - y ) = %d\n", z);

	z = (x * y) + (x / y); // z = (4 * 2) + (4 / 2)
	printf("z = (x * y) + ( x / y ) = %d\n" , z);

	z = x + y + 2004; // 4 + 2 + 20004 = z
	printf("z = x + y + 2004 = %d\n", z);

}