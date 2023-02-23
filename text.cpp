#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void game()
{
	char ret = 0;
	char board[ROW][LOW];
	//初始化空格
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
		printf("玩家赢");
	}
	if (ret == '#')
	{
		printf("电脑赢");

	}
	if (ret == 'Q')
	{
		printf("平局");
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
		printf("您的选择为>>>%d\n", input);
		switch (input)
		{
		case 1:

			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);//当表达式为0时，则退出循环，适合于0、1使用
	return 0;
}