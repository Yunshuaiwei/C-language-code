#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{	
	int year;
	printf("%s", "������1000��2000����ݣ�");
	scanf("year=%d", &year);
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		printf("%s", "������");
	else
		printf("%s", "��������");
	return 0;
}