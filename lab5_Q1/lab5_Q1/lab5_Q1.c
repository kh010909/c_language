#include<stdio.h>
int main() {
	char a[80];
	printf("Input: ");
	scanf_s("%s", a, 79);//visual studio輸入字串的方式
	for (int i = 0;a[i] != '\0'; i++) {
		//32為大小寫之間ASCII碼的差距(小寫比較大)

		//小寫轉大寫
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
		//大寫轉小寫
		else if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
	}
	printf("Output: %s", a);
}