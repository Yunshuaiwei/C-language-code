#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//第四题
int Show(unsigned int *P1, unsigned int *P2) {
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if (((*P1 >> i) & 1)!= ((*P2 >> i) & 1)) {
			count++;
		}
	}
	return count;
}
int main() {
	int value1 = 0;
	int value2 = 0;
	printf("请输入数字：");
	scanf("%d%d", &value1, &value2);
	int count=Show(&value1, &value2);
	printf("%d和%d不同的二进制位有 %d 位！ ",value1,value2,count);
	return 0;
}
#if 0
//第三题
void Bit(unsigned int *P) {
	int i = 0;
	for (i = 0; i < 32; i++) {
		int a = ((*P >> i) & 1);
		printf("%d ", a);
	}
	return 0;
}
int main() {
	int value = 0;
	printf("请输入数字：");
	scanf("%d", &value);
	Bit(&value);
	return 0;
}

//第二题
void List(unsigned int *P) {
	int i = 0;
	printf("奇数位为：");
	for (i = 0; i < 32; i =i+ 2) {
		int a = ((*P >> i) & 1);
		printf("%d ", a);
	}
	printf("\n");
	printf("偶数位位: ");
	for (i = 1; i < 32; i =i+ 2) {
		int a = ((*P >> i) & 1);
		printf("%d ", a);
	}
	return 0;
}
int main() {
	int value = 0;
	printf("请输入数字：");
	scanf("%d", &value);
	List(&value);
	return 0;
}

//第一题
int Move(unsigned int *P){
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((*P >> i) & 1) == 1)
			count++;
	}
	return count;
}
int main() {
	int value = 0;
	printf("请输入数字：");
	scanf("%d", &value);
	int count = Move(&value);
	printf("%d二进制1的个数为:%d", value, count);
	return 0;
}
#endif