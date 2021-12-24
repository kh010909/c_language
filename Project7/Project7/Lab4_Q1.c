#include<stdio.h>
unsigned long long int multiply (int, int);
int main() {
	int num1 = 0, multi = 0;
	printf("Enter two positive numbers:");
	scanf_s("%d %d", &num1, &multi);
	while (num1 != -1 && multi != -1) {//用-1來跳出迴圈
		printf("The result is:%llu\n", multiply(num1, multi));
		printf("Enter two positive numbers:");
		scanf_s("%d %d", &num1, &multi);
	}
	return 0;
}
unsigned long long int multiply(int num1, int multi) {
	if (multi > 0) {
		return num1 + multiply(num1, multi - 1);//讓他重複執行相等於multi的次數
	}
	else {
		return 0;//最後會有multiply(num1, 0),讓他回傳0
	}
}