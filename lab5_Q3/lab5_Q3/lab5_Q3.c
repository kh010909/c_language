#include<stdio.h>
#include<math.h>
void sqrtsum(unsigned long long int num);//宣告
int main() {
	int num;
	printf("Please enter a number:");
	scanf_s("%d", &num);

	while (num != -1) {	//用-1來跳出迴圈
		sqrtsum(num);
		printf("Please enter a number:");
		scanf_s("%d", &num);
	}
	printf("End program.");
}
void sqrtsum(unsigned long long int num) {
	int count = 0;//找出小於num,最大的平方
	int a = 0;//確認有沒有找到解答的變數(0代表沒找到,大於0代表有找到)
	while (pow(count, 2) <= num) {
		count++;
	}

	//由於用while迴圈執行時count會多1,所以for迴圈中的條件用 <count 而不是 <=count
	for (int i = 1; i < count;i++) {
		for (int j = 1; j < count;j++) {
			if (i >= j) {//由於x會小於或等於y
				continue;
			}

			else {
				if (pow(i, 2) + pow(j, 2) == num) {
					printf("x=%d,y=%d,%d^2+%d^2 = %llu\n", i, j, i, j, num);
					a++;
				}
			}
		}
	}

	if (a == 0) {
		printf("Not found.\n");
	}
}