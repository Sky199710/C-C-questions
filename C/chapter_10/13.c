/*************************************************************************
	> File Name: 13.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 06 Dec 2020 01:48:50 AM PST
 ************************************************************************/

#include<stdio.h>
void input(double[][5], int );
void average(double[], int );
double all(double[][5],int);
double maximum(double[][5],int);
int main()
{
	double a[3][5];
	double aver[3];
	float bar,max;
	printf("请输入三组数，每组包含5个double类型的数\n");
	input(a,3);
	printf("三组数的平均值分别为：\n");
	for(int i=0;i<3;i++)
	{
		average(a[i],5);
	}
	printf("\n");
	bar=all(a,3);
	max=maximum(a,3);
	printf("所有数值的平均值为：%g\n",bar);
	printf("15个数据中的最大值为：%g\n",max);
}
void input(double a[][5],int rows)
{
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<5;j++)
			scanf("%lg",&a[i][j]);
	}
}
void average(double ar[], int n)
{
	float total=0;
	float aver=0;
	for (int i=0;i<n;i++)
		total+=ar[i];
	aver=total/n;
	printf("%g\t",aver);
}
double all(double ar[][5],int n)
{
	float total=0;
	float aver=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<5;j++)
			total+=ar[i][j];
	}
	aver=total/15;
	return aver;
}
double maximum(double ar[][5],int n)
{
	double max=0 - 1e8;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<5;j++)
		{
			if(ar[i][j]>max)
				max=ar[i][j];
		}
	}
	return max;
}
