#include <stdio.h>

int main() {
	int floor; // floor��� ������ ���� 
	printf("�� ���� �װڽ��ϱ�? (5~100)"); // ������ �����.
	scanf_s("%d", &floor); // floor�� ������ ���� �Է�

	for (int i = 0; i < floor; i++) { // floor���� ���
		for (int j = 0; j < floor - 1 - i; j++) { // floor�� -1-i
			printf(" "); // ������ �� �̻��� S��� �������� �ٲ���ϴ�.

		}
		for (int k = 0; k < i * 2 + 1; k++) { // *�� i*2+1��ŭ ���
			printf("*");
		}
		printf("\n"); // �ٹٲ�
	}
}