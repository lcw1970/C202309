#include <stdio.h>

int hapf(int value); // hapf �Լ�����

void main()
{
	printf("1���� 10������ ���� %d\n", hapf(10)); // ��¹���
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
}
int hapf(int value)
{

	int hap = 0; // hap ���� ����
	int i = 1; // i = 1

	while (i <= value) { // i�� value������
		
		hap = hap + i;
		i++; // i�� 1�� ����
		
	}
	return hap;
}