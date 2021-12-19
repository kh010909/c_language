#include<stdio.h>
int prime(int);//宣告
int main(){
	int num;//輸入的數
	printf("Please enter a number,enter -1 to exit:");
	scanf_s("%d", &num);
	while(num != -1){
		if (prime(num) == 0) {
		printf("This number is a prime number\n");
		}
		else if (prime(num) == 1) {
		printf("This number is not a prime number\n");
		}
		printf("Please enter a number,enter -1 to exit:");
		scanf_s("%d", &num);
	}
	return 0;
}
int prime(int num) {
	int i;
	for (i = 2; i <= num - 1;++i) {//求2到(輸入的數-1)
		//如果整除就回傳1(非質數)
		if ((num % i) == 0) {
			return 1;
			break;
		}
	}
	//若沒有i可以整除就回傳0(質數)
	return 0;
}