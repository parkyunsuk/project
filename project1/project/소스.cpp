
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
;
int main(void)
{
	int a, b;
	double c;

	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
	printf("[1] ����(m)     [2]��ġ(in)     [3]��Ʈ(ft)      [4]�ߵ�(yd)     [5]����(stop)\n");
	printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >>");
	scanf("%d %d", &a, &b);
	do {
		printf("[��ȯ�� ����]�� ���̸� �Է��ϼ���. >> ");
		scanf("%lf", &c);
		switch(a){
		case 1:
		switch(b){
		case 1:
			printf("%f[����] -->%f[����]\n",c, c * 1);
			break;
		
		case 2:
			printf("%f[����] -->%f[��ġ]\n",c, c * 39.370079);
			break;
		
		case 3:
			printf("%f[����] -->%f[��Ʈ]\n",c, c * 3.28084);
			break;
		
		case 4:
			printf("%f[����] -->%f[�ߵ�]\n",c, c * 1.093613);
			break;
		default:
			printf("�����մϴ�.");
			break;
		}break;
		case 2:
			switch (b) {
			case 1:
				printf("%f[��ġ] -->%f[����]\n", c, c * 0.0254);
				break;

			case 2:
				printf("%f[��ġ] -->%f[��ġ]\n", c, c * 1);
				break;

			case 3:
				printf("%f[��ġ] -->%f[��Ʈ]\n", c, c * 0.083333);
				break;
				
			case 4:
				printf("%f[��ġ] -->%f[�ߵ�]\n", c, c * 0.027778);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		case 3:
			switch (b) {
			case 1:
				printf("%f[��Ʈ] -->%f[����]\n", c, c * 0.3048);
				break;

			case 2:
				printf("%f[��Ʈ] -->%f[��ġ]\n", c, c * 12);
				break;

			case 3:
				printf("%f[��Ʈ] -->%f[��Ʈ]\n", c, c * 1);
				break;
				
			case 4:
				printf("%f[��Ʈ] -->%f[�ߵ�]\n", c, c * 0.333333);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		case 4:
			switch (b) {
			case 1:
				printf("%f[�ߵ�] -->%f[����]\n", c, c * 0.9144);
				break;

			case 2:
				printf("%f[�ߵ�] -->%f[��ġ]\n", c, c * 36);
				break;

			case 3:
				printf("%f[�ߵ�] -->%f[��Ʈ]\n", c, c * 3);
				break;
				
			case 4:
				printf("%f[�ߵ�] -->%f[�ߵ�]\n", c, c * 1);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		default:
			printf("����");
		}
	} while (c != 0);
	puts("�����մϴ�.");


	return 0;
		
}

