#include<stdio.h>
int perfect_number(int);//
int main() {
	int num;//块计
	printf("Please enter a number (-1 to exit):");
	scanf_s("%d", &num);
	while (num != -1) {
		if (perfect_number(num) == num) {
			printf("%d is a perfect number\n", num);
		}
		else {
			printf("%d is not a perfect number\n", num);
		}
		printf("Please enter a number (-1 to exit):");
		scanf_s("%d", &num);
	}
	return 0;
}
int perfect_number(int num) {
	int i,sum = 0;
	for (i = 1; i <= num - 1; ++i) {//―1(块计-1)
		if ((num % i) == 0) {//璝俱埃碞琌num计,р┮Τ计ノsum癬ㄓ
			sum += i;
			
		}
	}
	return sum;
}