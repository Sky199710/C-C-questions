/*************************************************************************
	> File Name: 11.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 06 Dec 2020 01:13:12 AM PST
 ************************************************************************/

#include<stdio.h>
void doub(int [][5], int );
void disp(const int [][5], int );
int main()
{
	int exp[3][5] = {{1,2,3,4,5},
					 {6,7,8,9,8},
					 {7,6,5,4,3}
	};
	disp(exp,3);
	doub(exp,3);
	disp(exp,3);
}
void doub(int ar[][5],int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<5;j++)
			ar[i][j]*=2;
	}
}
void disp(const int ar[][5],int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<5;j++)
			printf("%d\t",ar[i][j]);
		printf("\n");
	}
}
