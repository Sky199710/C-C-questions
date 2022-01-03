/*************************************************************************
	> File Name: 13.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 06 Dec 2020 01:48:50 AM PST
 ************************************************************************/

#include<stdio.h>
void input(int ,int ,double[*][*]);
void average(int ,double[*]);
double all(int,int,double[*][*]);
double maximum(int,int,double[*][*]);
int main()
{
	double a[3][5];
	double aver[3];
	float bar,max;
	printf("请输入三组数，每组包含5个double类型的数\n");
	input(3,5,a);
	printf("三组数的平均值分别为：\n");
	for(int i=0;i<3;i++)
	{
		average(5,a[i]);
	}
	printf("\n");
	bar=all(3,5,a);
	max=maximum(3,5,a);
	printf("所有数值的平均值为：%g\n",bar);
	printf("15个数据中的最大值为：%g\n",max);
}
void input(int rows, int cols, double a[rows][cols])
{
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
			scanf("%lg",&a[i][j]);
	}
}
void average(int cols,double ar[cols])
{
	float total=0;
	float aver=0;
	for (int i=0;i<cols;i++)
		total+=ar[i];
	aver=total/cols;
	printf("%g\t",aver);
}
double all(int rows,int cols,double ar[rows][cols])
{
	float total=0;
	float aver=0;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
			total+=ar[i][j];
	}
	aver=total/15;
	return aver;
}
double maximum(int rows, int cols,double ar[rows][cols])
{
	double max=0 - 1e8;
	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if(ar[i][j]>max)
				max=ar[i][j];
		}
	}
	return max;
}
