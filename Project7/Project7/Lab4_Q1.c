#include<stdio.h>
unsigned long long int multiply (int, int);
int main() {
	int num1 = 0, multi = 0;
	printf("Enter two positive numbers:");
	scanf_s("%d %d", &num1, &multi);
	while (num1 != -1 && multi != -1) {//��-1�Ӹ��X�j��
		printf("The result is:%llu\n", multiply(num1, multi));
		printf("Enter two positive numbers:");
		scanf_s("%d %d", &num1, &multi);
	}
	return 0;
}
unsigned long long int multiply(int num1, int multi) {
	if (multi > 0) {
		return num1 + multiply(num1, multi - 1);//���L���ư���۵���multi������
	}
	else {
		return 0;//�̫�|��multiply(num1, 0),���L�^��0
	}
}