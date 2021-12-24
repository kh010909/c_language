#include<stdio.h>
unsigned long long int stair (unsigned int num);//宣告
int main() {
	unsigned int num;
	printf("How many stairs? ");
	scanf_s("%d", &num);
	while (num > 0) {
		while (num == 1) {
			printf("There is %d ways.\n", stair(num));
			printf("How many stairs? ");
			scanf_s("%d", &num);
		}
		while (num >= 2) {
			printf("There are %d ways.\n", stair(num));
			printf("How many stairs? ");
			scanf_s("%d", &num);
		}
	}
	return 0;
}
unsigned long long int stair(unsigned int num) {
	if (num == 1 || num == 2) {
		return num;//例外:stair(1) = 1,stair(2) = 2,讓他直接回傳對應的值
	}
	else {
		//假設n = 3,會有2種情形(1)走1階,剩2階,可能性為((stair(3 - 1))(2)走2階,剩1階,可能性為(stair(3 - 2)),再把兩種的值相加
		return stair(num - 1) + stair(num - 2);
	}
}