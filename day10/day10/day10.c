#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������
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
	printf("���������֣�");
	scanf("%d%d", &value1, &value2);
	int count=Show(&value1, &value2);
	printf("%d��%d��ͬ�Ķ�����λ�� %d λ�� ",value1,value2,count);
	return 0;
}
#if 0
//������
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
	printf("���������֣�");
	scanf("%d", &value);
	Bit(&value);
	return 0;
}

//�ڶ���
void List(unsigned int *P) {
	int i = 0;
	printf("����λΪ��");
	for (i = 0; i < 32; i =i+ 2) {
		int a = ((*P >> i) & 1);
		printf("%d ", a);
	}
	printf("\n");
	printf("ż��λλ: ");
	for (i = 1; i < 32; i =i+ 2) {
		int a = ((*P >> i) & 1);
		printf("%d ", a);
	}
	return 0;
}
int main() {
	int value = 0;
	printf("���������֣�");
	scanf("%d", &value);
	List(&value);
	return 0;
}

//��һ��
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
	printf("���������֣�");
	scanf("%d", &value);
	int count = Move(&value);
	printf("%d������1�ĸ���Ϊ:%d", value, count);
	return 0;
}
#endif