#include <stdio.h>

int main() {
	int num = 0; // ������ ���� num ����
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num); // scanf�� num�� ���� ����
	if (num == 0) { // num�� 0�϶�
		printf("zero");
	}
	else if (num == 1) { // num�� 1�϶�
		printf("one");
	}
	else if (num == 2) { // num�� 2�϶�
		printf("two");
	}
	else { // num�� 0~2�� �ƴҶ�
		printf("not 0 ~ 2");
	}
}