#include <stdio.h>

int multif(int value); // multf �Լ� ����

int main()
{
	printf("1���� 2������ ���� %d\n", multif(2)); // ���
	printf("1���� 3������ ���� %d\n", multif(3));
	printf("1���� 5������ ���� %d\n", multif(5));

}

int multif(int value) {
	int i = 1; // i ��������
	long multi = 1; // long ��������

	while( i <= value) {
		multi= multi * i; // ex) multi = 1 * 1 , multi = 1 * 2
		i++; // i�� 1����
	}
	return multi;
	return 0;
}
