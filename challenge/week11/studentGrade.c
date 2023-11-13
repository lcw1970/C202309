#include <stdio.h>
#define STUDENTS 5

void classifStudents(int* scores, char targetGrade) { // 함수선언
    printf("학생 성적 분류: \n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) { // 90 점 이상이면 A
            grade = 'A';
        }
        else if (*(scores + i) >= 80) { // 80 점 이상이면 B
            grade = 'B';
        }
        else if (*(scores + i) >= 70) { // 70 점 이상이면 C
            grade = 'C';
        }
        else { // 60 점 이하면 F
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
        }
    }
}

int sumScores(int* scores) {
    int sum = 0; // 전체합 변수
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i); // scores 값을 sum 에 더함
    }
    return sum; // sum 변수 반환
}

double averageScores(int* scores) { // 평균을 구하는 함수 정의랑 선언
    int sum = sumScores(scores); // sumScores 함수 호출
    double ave = (double)sum / STUDENTS; // 평균값 계산
    return ave; // ave 변수 반환
}

void printRanks(int* scores) {
    int ranks[STUDENTS]; // 순위를 저장할 배열
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1; // 초기 순위를 1로 설정
    }
    // 각 학생과 나머지 학생들을 비교하여 순위 메김
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores + j) > *(scores + i)) {
                ranks[i]++;
            }
        }
    }
    // 순위 출력
    for (int i = 0; i < STUDENTS; i++) {
        printf(" %d 학생의 순위: %d 입니다.\n", i + 1, ranks[i]);
    }
}

int main() {
    // 학생들의 성적을 저장할 배열 선언
    int scores[STUDENTS];
    // 학생들의 성적 입력 받기
    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", scores + i);
    }

    char ch = getchar();
    
    char target;
    printf("특정 점수 (A,B,C,D,F)를 입력하세요\n");
    scanf_s(" %c", &target, 1);
    // 학생들의 성적 분류 및 출력
    classifStudents(scores, target); // 함수 호출
    int sum = sumScores(scores);
    double ave = averageScores(scores);

    printf("\n학생들 점수의 총 합은 %d 이고, 평균 값은 %.5lf입니다.\n", sum, ave);
    printRanks(scores);

    return 0;
}
