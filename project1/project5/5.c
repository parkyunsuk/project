#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i;
	int num;
	char binary[32];

	for (i = 0; i < 32; i++)

		binary[i] = '0';
	do {

		printf("정수를 하나 입력하세요.>>");
		scanf("%d", &num);
		printf("팔진수 : %x\n", num);
		printf("십육진수 : %o\n", num);
		i = 0;

		while (num > 0) {
			if (num % 2 == 1)
				binary[i] = '1';
			num = num / 2;
			i++;
		}

		for (i = 31; i >= 0; i--) {
			printf("%c", binary[i]);
			if (i % 8 == 0)
				printf(" ");
		}
		printf("\n");


	} while (num != 0);



	return 0;

}