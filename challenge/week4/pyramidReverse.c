#include <stdio.h>

int main() {
	int floor;

	printf("�� ���� �װڽ��ϴ�? (5~100)"); // �󸶳� ������ ����°�
	scanf_s("%d", &floor); // floor ������ scanf�� �Է¹���

	for (int i = 0; i < floor; i++) { // i�� 0���ͽ����ؼ� floor������ ��
		for (int j = 0; j < i; j++) {
			printf(" "); // ����ó�� 
		}
		for (int j = 2*floor-1; j >2*i; j--) { // ex)6���� ù���� 11�� �׷��� ������ floor x 2 -1  j�� �ּ� i*2���� ũ�� j�� ���ҽ��Ѽ� *�� ���� ���̱�
			printf("*"); // �� �ױ�
			
		}
		printf("\n"); // �ٹٲ�
	}
}