#include < stdio.h>

int main()
{
	int x = +4; // + 4 ����
	int y = -2; // - 2 ���� 

	printf("x + (-y) = %d\n", x + (-y)); // 4 -(-2) = 6
	printf("-x + (+y) = %d\n", -x + (+y)); // -4 - 2 = -6
}