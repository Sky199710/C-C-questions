/*************************************************************************
	> File Name: 9.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 11:40:05 PM PST
 ************************************************************************/

#include<stdio.h>
void copy(int row, int col, double [row][col],double [row][col]);
void disp(int row, int col, double [row][col]);
int main()
{
	double world[3][5];
	double hello[3][5]={{1,2,3,4,5},
						{6,7,8,9,8},
						{7,6,5,4,3},
	};
	int row=3;
	int col=5;
	copy(3,5,world,hello);
	printf("hello:\n");
	disp(3,5,hello);
	printf("world:\n");
	disp(3,5,world);
}
void copy(int row, int col, double tar[row][col],double sour[row][col])
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
			tar[i][j] = sour[i][j];
	}
}
void disp(int row, int col, double ar[row][col])
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
			printf("%g\t",ar[i][j]);
		printf("\n");
	}
}


