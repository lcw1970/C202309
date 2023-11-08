#include <stdio.h>

// summation �Լ�
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// subtraction �Լ�
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// multifcation �Լ�
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// division �Լ�
int division(double* a, double* b, double* result) {
	if (*b == 0) {
		printf("���� 0�� �Է��ϼ̽��ϴ�..\n");
		return 0; // ������ ǥ���ϱ� ���� 0�� ��ȯ
	}
	*result = *a / *b;
	return 1; // ������ ǥ���ϱ� ���� 1�� ��ȯ
}

int main() {
	double a, b;
	double result;
	printf("�� ������ �Է��ϼ���: ");
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