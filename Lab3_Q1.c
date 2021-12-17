#include<stdio.h>
float pow(int, int);
int main() {
	int base, exp;
	printf("enter a base and exp:");
	scanf_s("%d %d", &base, &exp);
	if (base != -1 || exp != -1) {
		printf("The expotential is:%.2f\n", pow(base, exp));
		printf("enter a base and exp:");
		scanf_s("%d %d", &base, &exp);
	}
}
float pow(int base, int exp) {
	int i;
	float sum = 1;
	if (exp >= 1) {
		for (i = 1;i <= exp; i++) {
			sum *= base;
		}
		return sum;
	}
	else if (exp <= -1) {
		for (i = -1;i >= exp; i--) {
			sum /= base;
		}
		return sum;
	}
	else {
		return 0;
	}
}
