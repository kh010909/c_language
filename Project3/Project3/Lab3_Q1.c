#include<stdio.h>
float pow(int, int);//�ŧi
int main() {
	int base, exp;//����,����
	printf("enter a base and exp, base have to be a positive number:");
	scanf_s("%d %d", &base, &exp);
	while (base >= 0 || exp != -1) {
		printf("The expotential is:%.2f\n", pow(base, exp));
		printf("enter a base and exp:");
		scanf_s("%d %d", &base, &exp);
	}
}
//pow function
float pow(int base, int exp) {
	int i;
	float sum = 1;
	//exp�j��0��
	if (exp >= 1) {
		for (i = 1;i <= exp; i++) {
			sum *= base;
		}
		return sum;
	}
	//exp�p��0��
	else if (exp <= -1) {
		for (i = -1;i >= exp; i--) {
			sum /= base;
		}
		return sum;
	}
	//exp����0��
	else {
		return 1;
	}
}
