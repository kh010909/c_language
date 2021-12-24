#include<stdio.h>
unsigned long long int binary(int);
int main() {
	int num;
	printf("Enter a decimal number:");
	scanf_s("%d", &num);
	printf("The binary equivalent to %d is %llu", num, binary(num));
}
/*
計算方法:
輸入n,將n除2,得到商,餘數,再將商除2,重複這步驟直到商 = 0,最後將餘數從最後一個開始排列,得到2進位數
*/
unsigned long long int binary(int num) {
	while (num > 0) {//當num大於0時才會執行
		//整除
		if (num % 2 == 0) {
			return 0 + binary(num / 2) * 10;//回傳0,將其他的乘10(也就是放在下一位數,因為最晚執行的會在最前面)
		}
		//沒有整除
		if (num % 2 == 1) {
			return 1 + binary(num / 2) * 10;//回傳1,將其他的乘10(也就是放在下一位數,因為最晚執行的會在最前面)
		}
	}
	return 0;
}