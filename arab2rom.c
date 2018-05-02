#include <stdio.h>
#include <stdlib.h>

char* arab2rom(unsigned int n) {
	if (n >= 5000)
		return NULL;

	while (n >= 1000) {
		printf("M");
		n -= 1000;
	}
	if (n >= 500) {
		printf("D");
		n -= 500;
	}
	while (n >= 100) {
		printf("C");
		n -= 100;
	}
	if (n >= 50) {
		printf("L");
		n -= 50;
	}
	while (n >= 10) {
		printf("X");
		n -= 10;
	}
	if (n >= 5) {
		printf("V");
		n -= 5;
	}
	while (n>0) {
		printf("I");
		n -= 1;
	}
}

int main() {
	int n;
	printf("input arab number: \n");
	scanf_s("%d", &n);
	arab2rom(n);

	system("pause");
	return 0;
}