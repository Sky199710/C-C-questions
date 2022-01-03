/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 06:15:22 PM PST
 ************************************************************************/

#include<stdio.h>
void copy_arr(double [], const double [], int);
int main()
{
	const double sex[4][4]={{1,2,3,4},
							{5,6,7,8},
							{9,3,6,5},
							{6,8,2,4}
	};
	double fuck[4][4];
	for (int i=0;i<4;i++)
		copy_arr(fuck[i],sex[i],4);
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
			printf("%g\t",fuck[i][j]);
		printf("\n");
	}
}
void copy_arr(double tar[], const double sour[], int n)
{
	for (int i=0;i<n;i++)
		tar[i]=sour[i];
}



