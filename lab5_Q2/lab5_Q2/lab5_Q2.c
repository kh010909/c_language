#include<stdio.h>
void compare(char s1[], char s2[]);//�ŧi
int main() {
	char s1[20];
	char s2[20];
	int i = 0;//����o�ӵ{������X�����ܼ�
	while (i < 2) {
		printf("enter a string:");
		scanf_s("%s", s1, 19);//visual studio��J�r�ꪺ�覡
		printf("enter a string:");
		scanf_s("%s", s2, 19);
		compare(s1, s2);
		i++;
	}
}
void compare(char s1[], char s2[]) {
	size_t i = 0;
	//�Ns1�Ms2���,����s1����
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			printf("they are diffirent string.\n");
			return;
		}
	}
	//�קKs2��s1��,�ӥB�e�����@�˪�����(���Oaaa�Maaab���������)
	if (s2[i] != '\0') {
		printf("they are diffirent string.\n");
		return;
	}
	printf("they are the same string.\n");
	return;
}