#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int isfull(char board[ROW][LOW], int row,int low)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < low;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
			
				
		}
			
			
	
	}
	return 1;
}

void InitBoard(char board[ROW][LOW], int row, int low)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0; j< low; j++)
			board[i][j] = ' ';
	}
	
}
void Display(char board[ROW][LOW], int row, int low)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < low;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < low - 1)
			
				printf("|");
				
				

				
			
			
		}
		printf("\n");
		if (i < row - 1)
		{
			j = 0;
			for (j = 0;j < low;j++)
			{
				printf("---");
				if(j<low-1)
				printf("|");
			}
		}
		printf("\n");
		

	}
}void Boyplay(char board[ROW][LOW], int row, int low)
{
	int x = 0;
	int y = 0;
	
	
	while (1)
	{

		printf("请输入坐标");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= low)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("该坐标被占用，请重新输入");
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	}
	
	
	
}
void Computer(char board[ROW][LOW], int row, int low)
{
	int x = 0;
	int y = 0;
	printf("电脑走》》\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % low;

		if (board[x][y == ' '])
		{
			board[x][y] = '#';
			break;

		}
	}
	
}
char Iswin(char board[ROW][LOW], int row, int low)
{
	int x = 0;
	int y = 0;
	for (x = 0;x < row;x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2]&&board[x][1] != ' ')
		{
			return  board[x][0];

		}

		

	}
	for (x = 0;x < low;x++)
	{
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x]&& board[1][x] != ' ')
		{
			return board[0][x];
		}

	}
	if (board[0][0] == board[1][1] && board[1][1]==board[2][2]&& board[1][1] != ' ')
			return board[1][1];
	if ( board[0][2] == board[1][1] &&board[1][1]== board[2][0]&& board[1][1]!=' ')
			return board[1][1];
	if (1 == isfull(board ,ROW,LOW))

	{
		return 'Q';
	}
	return 'C';
}
 
