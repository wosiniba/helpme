#pragma once
#define ROW 3
#define LOW 3
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 void InitBoard(char board[ROW][LOW],int row,int low);
 void Display(char board[ROW][LOW], int row, int low);
 void Boyplay( char board[ROW][LOW], int row,int low);
 void Computer(char board[ROW][LOW], int row,int low);
 char Iswin(char board[ROW][LOW],int row,int low);