#include <stdio.h>

// summation 함수
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// subtraction 함수
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// multifcation 함수
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// division 함수
int division(double* a, double* b, double* result) {
	if (*b == 0) {
		printf("오류 0을 입력하셨습니다..\n");
		return 0; // 오류를 표시하기 위해 0을 반환
	}
	*result = *a / *b;
	return 1; // 성공을 표시하기 위해 1을 반환
}

int main() {
	double a, b;
	double result;
	printf("두 정수를 입력하세요: ");
	scanf_s("%lf %lf", &a, &b);

	summation(&a, &b, &result);
	printf("%.0lf + %0.lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - % .0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf\n", a, b, result);

	return 0;
}