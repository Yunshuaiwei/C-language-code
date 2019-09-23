#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//第三题
i/*nt main() {
	int arr[] = { 1,2,3,4,5,6,6,5,4,8,9 };
	int i = 0;
	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		for (int j = i + 1; i < (sizeof(arr) / sizeof(arr[0])); j++) {
			if ((arr[i] ^ arr[j]) == 0) {
				printf("%d", arr[i]);
				break;
			}
		}
	}
	return 0;
}*/
#if 0
//第四题
int main() {
	char arr[20] = "I am student";
	char *p=0 ;
	p = &arr;
	char *count=0;
	char *b = 0;
	int len = strlen(arr);
	for (p = p + len; (*p) != ' '; p--) {
		count = p;
	}
	b = p;
	p = &arr;
	for (count; count < (p+len); count++) {
		printf("%c", *count);
	}
	printf(" ");
	for (p = b - 2; (*p) != ' '; p--) {
		count = p;
	}
	for (count; count < (p + 3); count++) {
		printf("%c", *count);
	}
	printf(" ");
	p = &arr;
	printf("%c", *p);
}

//第二题
int Average(int a, int b) {
	return ((a + b) >> 1);
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字：");
	scanf("%d%d", &a, &b);
	int c = Average(a,  b);
	printf("%d和%d的平均数为：%d", a, b, c);
	return 0;
}
//第一题
unsigned int reverse_bit(unsigned int value, unsigned int *P) {
	int i = 0;
	unsigned int a = 0;
	for (i = 0; i < 32; i++) {
		a = ((value >> i) & 1);
		if (a == 1) {
			*P = ((*P | a) << 1);
		}
		if (a == 0) {
			*P = (*P << 1);
		}
	}
	return *P;
}
int main() {
	unsigned int value1 = 0;
	unsigned int value = 0;
	printf("请输入数字：");
	scanf("%d", &value);
	int a = reverse_bit(value, &value1);
	printf("%d", a);
	return 0;
}

#endif
