#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void game()
{
	char ret = 0;
	char board[ROW][LOW];
	//��ʼ���ո�
	InitBoard(board,ROW,LOW);
	Display(board, ROW, LOW);
	
	while (1)
	{
		Boyplay(board, ROW, LOW);
		Display(board, ROW, LOW);
		ret=Iswin(board,ROW,LOW);
		if (ret != 'C')
		{
			break;
		}
		Computer(board, ROW, LOW);
		Display(board, ROW, LOW);
		ret = Iswin(board, ROW, LOW);
		if (ret != 'C')
		{
			break;
		}
		
		
	}
	if(ret=='*')
	{
		printf("���Ӯ");
	}
	if (ret == '#')
	{
		printf("����Ӯ");

	}
	if (ret == 'Q')
	{
		printf("ƽ��");
	}
}
void menu()
{
	printf("*********1 play 0 exit*********\n");
}
int main()
{
	int input = 0;
	
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		printf("����ѡ��Ϊ>>>%d\n", input);
		switch (input)
		{
		case 1:

			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);//�����ʽΪ0ʱ�����˳�ѭ�����ʺ���0��1ʹ��
	return 0;
}