#include<stdio.h>
unsigned long long int binary(int);
int main() {
	int num;
	printf("Enter a decimal number:");
	scanf_s("%d", &num);
	printf("The binary equivalent to %d is %llu", num, binary(num));
}
/*
�p���k:
��Jn,�Nn��2,�o���,�l��,�A�N�Ӱ�2,���Ƴo�B�J����� = 0,�̫�N�l�Ʊq�̫�@�Ӷ}�l�ƦC,�o��2�i���
*/
unsigned long long int binary(int num) {
	while (num > 0) {//��num�j��0�ɤ~�|����
		//�㰣
		if (num % 2 == 0) {
			return 0 + binary(num / 2) * 10;//�^��0,�N��L����10(�]�N�O��b�U�@���,�]���̱߰��檺�|�b�̫e��)
		}
		//�S���㰣
		if (num % 2 == 1) {
			return 1 + binary(num / 2) * 10;//�^��1,�N��L����10(�]�N�O��b�U�@���,�]���̱߰��檺�|�b�̫e��)
		}
	}
	return 0;
}