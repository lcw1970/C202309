#include <stdio.h>
#include <stdlib.h>

struct Student { // 학생들 구조체 정의
    char name[100];
    int score;
};


void classifyStudents(struct Student* students, int students_num, char targetGrade);
int sumScores(struct Student* students, int students_num);
double average(struct Student* students, int students_num);
void printRanks(struct Student* students, int students_num);

int main() {
    int students_num; 
    printf("총 학생 수를 입력하세요: ");
    scanf_s("%d", &students_num); // 학생들의 수 정의후 scanf로 입력받음
    // 구조체로 배열
    struct Student* students = (struct Student*)malloc(students_num * sizeof(struct Student));

    for (int i = 0; i < students_num; i++) { // for문을 이용해 학생들의 이름과 점수를 scanf로 입력받음
        printf("%d번 학생 이름을 입력하세요: ", i + 1);
        scanf_s(" %s", students[i].name, sizeof(students[i].name));
        printf("%d번 학생 점수를 입력하세요: ", i + 1);
        scanf_s("%d", &students[i].score);
    }

    char target; // 특정 점수를 target변수로 scanf문을 이용하여 입력받음
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target);
    classifyStudents(students, students_num, target);

    int sum = sumScores(students, students_num);
    double avg = average(students, students_num);
    printf("학생들 점수의 총 합은 %d이고, 평균 값은 %.2lf입니다.\n", sum, avg);

    printRanks(students, students_num);

    
    free(students);

    return 0;
}

void classifyStudents(struct Student* students, int students_num, char targetGrade) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < students_num; i++) {
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        if (targetGrade == grade) {
            printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
        }
    }
}


int sumScores(struct Student* students, int students_num) { // 성적들의 합 함수
    int sum = 0;
    for (int i = 0; i < students_num; i++) {
        sum += students[i].score;
    }
    return sum;
}


double average(struct Student* students, int students_num) { // 성적 평균 함수
    int sum = sumScores(students, students_num);
    return (double)sum / students_num;
}


void printRanks(struct Student* students, int students_num) { // 학생들 성적 순위 함수
    int* ranks = (int*)malloc(students_num * sizeof(int));

    for (int i = 0; i < students_num; i++) {
        ranks[i] = 1;
        for (int j = 0; j < students_num; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++;
            }
        }

        printf("%s 학생의 순위는 %d입니다\n", students[i].name, ranks[i]);
    }

    free(ranks);
}