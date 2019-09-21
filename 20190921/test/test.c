#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
//判断今天是今年的第几天
typedef struct Day {
	int year;
	int mouth;
	int day;
}Day;
int today(Day *p) {
	int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (p->year % 4 == 0 && p->year % 100 != 0 || p->year % 400 == 0) {
		arr[1] = 29;
	}
	int total = 0;
	switch (p->mouth) {
	case 12:
		total += arr[10];
	case 11:
		total += arr[9];
	case 10:
		total += arr[8];
	case 9:
		total += arr[7];
	case 8:
		total += arr[6];
	case 7:
		total += arr[5];
	case 6:
		total += arr[4];
	case 5:
		total += arr[3];
	case 4:
		total += arr[2];
	case 3:
		total += arr[1];
	case 2:
		total += arr[0];
	case 1:
		total =total+p->day;
		break;
	default:
		break;
	}
	return total;
}
int main() {
	int year = 0;
	int mouth = 0;
	int day = 0;
	printf("请输入日期(用/隔开)：\n");
	scanf("%d/%d/%d", &year, &mouth, &day);
	Day D = { year, mouth, day };
	int T=today(&D);
	printf("今天是%d年的第%d天！",D.year, T);
	return 0;
}

//结构体
typedef struct Student {
	char name[10];
	int age;
}Stu;
void Show(Stu *p, int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		printf("%s,%d", p[i].name,p[i].age);
		printf("%s,%d", (*(p+i)).name, (*(p + i)).age);
		printf("%s,%d", (p + i)->name, (p + i)->age);
	}
}
int main() {
	Stu arr[3] = { {"caocao",18},{"zhuge",88},{"liubei",99} };
	int len = sizeof(arr) / sizeof(arr[0]);
	Show(arr, len);
	return 0;
}

struct a {
	int a;
	int *pa;
	struct a *ppa;
};
struct b {
	int b;
	struct a aa;
	struct b *pb;
	struct a *pba;
};
int main() {
	struct b bb;
	bb.aa.a;
	bb.aa.pa;
	bb.aa.ppa;
	bb.b;
	bb.aa;
	bb.pb;
	bb.pba;
	return 0;
}
#endif