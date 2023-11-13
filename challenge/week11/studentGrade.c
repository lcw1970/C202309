#include <stdio.h>
#define STUDENTS 5

void classifStudents(int* scores, char targetGrade) { // �Լ�����
    printf("�л� ���� �з�: \n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) { // 90 �� �̻��̸� A
            grade = 'A';
        }
        else if (*(scores + i) >= 80) { // 80 �� �̻��̸� B
            grade = 'B';
        }
        else if (*(scores + i) >= 70) { // 70 �� �̻��̸� C
            grade = 'C';
        }
        else { // 60 �� ���ϸ� F
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
        }
    }
}

int sumScores(int* scores) {
    int sum = 0; // ��ü�� ����
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i); // scores ���� sum �� ����
    }
    return sum; // sum ���� ��ȯ
}

double averageScores(int* scores) { // ����� ���ϴ� �Լ� ���Ƕ� ����
    int sum = sumScores(scores); // sumScores �Լ� ȣ��
    double ave = (double)sum / STUDENTS; // ��հ� ���
    return ave; // ave ���� ��ȯ
}

void printRanks(int* scores) {
    int ranks[STUDENTS]; // ������ ������ �迭
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1; // �ʱ� ������ 1�� ����
    }
    // �� �л��� ������ �л����� ���Ͽ� ���� �ޱ�
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores + j) > *(scores + i)) {
                ranks[i]++;
            }
        }
    }
    // ���� ���
    for (int i = 0; i < STUDENTS; i++) {
        printf(" %d �л��� ����: %d �Դϴ�.\n", i + 1, ranks[i]);
    }
}

int main() {
    // �л����� ������ ������ �迭 ����
    int scores[STUDENTS];
    // �л����� ���� �Է� �ޱ�
    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", scores + i);
    }

    char ch = getchar();
    
    char target;
    printf("Ư�� ���� (A,B,C,D,F)�� �Է��ϼ���\n");
    scanf_s(" %c", &target, 1);
    // �л����� ���� �з� �� ���
    classifStudents(scores, target); // �Լ� ȣ��
    int sum = sumScores(scores);
    double ave = averageScores(scores);

    printf("\n�л��� ������ �� ���� %d �̰�, ��� ���� %.5lf�Դϴ�.\n", sum, ave);
    printRanks(scores);

    return 0;
}
