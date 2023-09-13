#include < stdio.h>

int main()
{
	int x = +4; // + 4 識情
	int y = -2; // - 2 識情 

	printf("x + (-y) = %d\n", x + (-y)); // 4 -(-2) = 6
	printf("-x + (+y) = %d\n", -x + (+y)); // -4 - 2 = -6
}