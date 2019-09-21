#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu() {
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("^^^^^^^^^^^^扫雷^^^^^^^^^^^^^\n");
	printf("^^^^^^^^^1.开始游戏^^^^^^^^^^\n");
	printf("^^^^^^^^^2.  退出^^^^^^^^^^^^\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
int main() {
	int input = 0;
	do {
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 2:
			printf("游戏结束！\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}