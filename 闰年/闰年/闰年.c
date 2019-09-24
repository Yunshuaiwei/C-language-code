#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{	
	int year;
	printf("%s", "请输入1000到2000的年份：");
	scanf("year=%d", &year);
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		printf("%s", "是闰年");
	else
		printf("%s", "不是闰年");
	return 0;
}