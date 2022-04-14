#include<stdio.h>
void compare(char s1[], char s2[]);//宣告
int main() {
	char s1[20];
	char s2[20];
	int i = 0;//控制這個程式執行幾次的變數
	while (i < 2) {
		printf("enter a string:");
		scanf_s("%s", s1, 19);//visual studio輸入字串的方式
		printf("enter a string:");
		scanf_s("%s", s2, 19);
		compare(s1, s2);
		i++;
	}
}
void compare(char s1[], char s2[]) {
	size_t i = 0;
	//將s1和s2比較,直到s1結束
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			printf("they are diffirent string.\n");
			return;
		}
	}
	//避免s2比s1長,而且前面都一樣的情形(像是aaa和aaab之間的比較)
	if (s2[i] != '\0') {
		printf("they are diffirent string.\n");
		return;
	}
	printf("they are the same string.\n");
	return;
}