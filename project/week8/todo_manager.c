#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����


void addTask(char task[]) { // �� ���� �߰��ϱ� ���� �Լ�
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", task, (int)sizeof(task));
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);
}

void delTask(int delIndex, int taskCount) { // �� ���� �����ϱ� ���� �Լ�

	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

	// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) { // �� ���� ����� �����ִ� �Լ�
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() {
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0;
		int delIndex = -1; // �� �� ������ ���� �ε���

		int modifyIndex = -1; // �� �� ������ ���� �ε���
		char ch;

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1: // case 1�� �� ���� �߰��ϱ� ���� ����
			addTask(tasks[taskCount]); // �Լ� ȣ��
			taskCount++;
			break;
		case 2: // case 2�� �� ���� �����ϱ� ���� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) { // ������ index�� taskCount���� ũ�� ������ ���
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				delTask(delIndex, taskCount); // �Լ� ȣ��
				taskCount -= 1;
			}
			break;
		case 3: // case 3�� �� �� ��Ϻ�����
			printf("�� �� ���\n");
			printTask(taskCount); // �Լ� ȣ��
			break;
		case 4: // case 4�� ���α׷� ����
			terminate = 1; // �Ʒ� if������ terminate�� 1�̸� ���α׷��� �����ϴ� if�� ����
			break;
		case 5: // case 5�� �� �� �����ϴ� case printf�� ���� �� ��ȣ�� �Է¹޾Ƽ� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
			scanf_s("%d", &modifyIndex);
			ch = getchar(); // ���� �ʱ�ȭ
			printf("���ο� �� ���� �Է����ּ���");
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));
			printf("���ο� �� ���� �߰��Ǿ����ϴ�: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) { // case 4���� �̾�����.
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
		if (taskCount == 10) {
			printf("�� ���� %d���� �� á���ϴ�.", taskCount);
			break;
		}
	}
	return 0;
}