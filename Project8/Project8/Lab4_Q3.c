#include<stdio.h>
unsigned long long int stair (unsigned int num);//�ŧi
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
		return num;//�ҥ~:stair(1) = 1,stair(2) = 2,���L�����^�ǹ�������
	}
	else {
		//���]n = 3,�|��2�ر���(1)��1��,��2��,�i��ʬ�((stair(3 - 1))(2)��2��,��1��,�i��ʬ�(stair(3 - 2)),�A���ت��Ȭۥ[
		return stair(num - 1) + stair(num - 2);
	}
}