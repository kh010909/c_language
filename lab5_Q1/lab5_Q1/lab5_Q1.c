#include<stdio.h>
int main() {
	char a[80];
	printf("Input: ");
	scanf_s("%s", a, 79);//visual studio��J�r�ꪺ�覡
	for (int i = 0;a[i] != '\0'; i++) {
		//32���j�p�g����ASCII�X���t�Z(�p�g����j)

		//�p�g��j�g
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
		//�j�g��p�g
		else if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
	}
	printf("Output: %s", a);
}