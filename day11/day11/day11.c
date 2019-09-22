#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
//第三题
void main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int a[20][20] = { 0 };
	while (n < 1 || n>20){
		printf("请输入杨辉三角形的行数(0-20):");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++) {
		a[i][0] = 1;       //第一列全置为一
	}
	for (i = 1; i < n; i++) {
		for (j = 1; j <= i; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//每个数是上面两数之和
		}	
	}
	for (i = 0; i < n; i++)    //输出杨辉三角
	{
		for (j = 0; j <= i; j++)
			printf("%2d  ", a[i][j]);
		printf("\n");
	}
}
#if 0
//第二题
int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int FD;
	int i;
	for (i = 1; i <= 4; i++)
	{

		if (i == 1)//A说的假
		{
			A = 1; C = 1; FD = 1; D = 0;
		}
		if (i == 2)//B说的假
		{
			A = 0; C = 0; FD = 1; D = 0;
		}
		if (i == 3)//C说的假
		{
			A = 0; C = 1; FD = 0; D = 0;
		}
		if (i == 4)//D的说的假
		{
			A = 0; C = 1; FD = 1; D = 0;
		}
		if (A + B + C + D + FD == 1 && FD == D)
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	return 0;
}

//第一题
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if ((a == 3 && b != 2) || (a != 3 && b == 2)==1) {
							if ((b == 2 && e != 4) || (b != 2 && e == 4)==1) {
								if ((c == 1 && d != 2) || (c != 1 && d == 2)==1) {
									if ((c == 5 && d != 3) || (c != 5 && d == 3)==1) {
										if ((e == 4 && a != 1) || (e != 4 && a == 1)==1) {
											if (a*b*c*d*e == 120) {
												printf("a=%d b=%d c=%d d=%d e=%d ", a, b, c, d, e);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
#endif