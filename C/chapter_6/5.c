/*************************************************************************
	> File Name: 5.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 01:27:44 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int min,max,temp;
	printf("请输入表的下限：\n");
	scanf("%d",&min);
	printf("请输入表的上限：\n");
	scanf("%d",&max);
	for (int i=min;i<=max;i++)
	{	
		printf("%d\t",i);
		temp = i;
		for (int j=0;j<2;j++)
		{
			temp*=i;
			printf("%d\t",temp);
		}
		printf("\n");
	}
}
