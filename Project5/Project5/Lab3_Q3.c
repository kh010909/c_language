#include<stdio.h>
int perfect_number(int);//�ŧi
int main() {
	int num;//��J����
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
	for (i = 1; i <= num - 1; ++i) {//�D1��(��J����-1)
		if ((num % i) == 0) {//�Y�㰣�N�N��Onum���]��,��Ҧ��]�ƥ�sum�[�_��
			sum += i;
			
		}
	}
	return sum;
}