#include<stdio.h>
#include<math.h>
void sqrtsum(unsigned long long int num);//�ŧi
int main() {
	int num;
	printf("Please enter a number:");
	scanf_s("%d", &num);

	while (num != -1) {	//��-1�Ӹ��X�j��
		sqrtsum(num);
		printf("Please enter a number:");
		scanf_s("%d", &num);
	}
	printf("End program.");
}
void sqrtsum(unsigned long long int num) {
	int count = 0;//��X�p��num,�̤j������
	int a = 0;//�T�{���S�����ѵ����ܼ�(0�N��S���,�j��0�N�����)
	while (pow(count, 2) <= num) {
		count++;
	}

	//�ѩ��while�j������count�|�h1,�ҥHfor�j�餤������� <count �Ӥ��O <=count
	for (int i = 1; i < count;i++) {
		for (int j = 1; j < count;j++) {
			if (i >= j) {//�ѩ�x�|�p��ε���y
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