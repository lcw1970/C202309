#include <stdio.h>

int main() {
	int i = 0; // i = 0이다
	while (i < 10) {
		i++; // i에 먼저 1추가
		if (i % 2 == 0) { // i가 짝수일때는 continue로 앞으로
			continue;
		}
		printf("%d Hello World!\n", i);
		
	}
	
	return 0;
}