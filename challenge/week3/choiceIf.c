#include <stdio.h>

int main() {
	int choice; // ������ ���� choice ����
	printf("1. ���� ����\n"); // ���� �Է�
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice); // scanf�� ���ڸ� choice�� �Է¹޴´�.

	if (choice == 1) { // choice�� 1�϶� 
		printf("������ �����մϴ�.");
	}
	else if (choice == 2) { // choice�� 2�϶�
		printf("���� ���� �ݽ��ϴ�.");
	}
	else if (choice == 3) { // choice�� 3�ϋ�
		printf("�����մϴ�.");
	}
	else { // 1, 2, 3�ܿ� �ٸ��� �Է�������
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
}