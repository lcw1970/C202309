#include <stdio.h>
#define STUDENTS 5

void classifStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int main() {
	// �л����� ������ ������ �迭 ����
	int scores[STUDENTS];

	// �л����� ���� �Է� �ޱ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	// �л����� ���� �з� �� ���
	classifStudents(scores, target);

	return 0;
}