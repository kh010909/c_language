#include<stdio.h>
int prime(int);//�ŧi
int main(){
	int num;//��J����
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
	for (i = 2; i <= num - 1;++i) {//�D2��(��J����-1)
		//�p�G�㰣�N�^��1(�D���)
		if ((num % i) == 0) {
			return 1;
			break;
		}
	}
	//�Y�S��i�i�H�㰣�N�^��0(���)
	return 0;
}