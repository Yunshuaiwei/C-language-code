#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu() {
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("^^^^^^^^^^^^ɨ��^^^^^^^^^^^^^\n");
	printf("^^^^^^^^^1.��ʼ��Ϸ^^^^^^^^^^\n");
	printf("^^^^^^^^^2.  �˳�^^^^^^^^^^^^\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
int main() {
	int input = 0;
	do {
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 2:
			printf("��Ϸ������\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}