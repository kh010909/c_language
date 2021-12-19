#include<stdio.h>
int perfect_number(int);//宣告
int main() {
	int num;//輸入的數
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
	for (i = 1; i <= num - 1; ++i) {//求1到(輸入的數-1)
		if ((num % i) == 0) {//若整除就代表是num的因數,把所有因數用sum加起來
			sum += i;
			
		}
	}
	return sum;
}