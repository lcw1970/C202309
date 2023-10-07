#include <stdio.h>

int main() {
	int i = 0;
	do {
		i++; //i에 1추가
		if (i % 2 == 0) { // i가 짝수일때 다시반복
			continue;
		}
		printf("%d Hello World!\n", i);
		
	} while (i < 10); // i는 10미만까지
	return 0;
}