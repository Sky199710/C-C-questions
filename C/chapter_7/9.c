/*************************************************************************
	> File Name: 9.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 06:10:35 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{	
	int j,n;

	printf("请输入一个正整数: \n");
	while(scanf("%d",&n))
	{
		if (n==2)
			printf("小于等于2的素数有\n2");
		else
		{	
			printf("小于等于%d的素数有\n",n);
			for(int i=3;i<=n;i++)
			{
				j=2;
				while(i%j)
				{
					j++;
				}
				if (j==i)
					printf("%d\t",i);
			}
		}
		printf("\n");
		printf("请输入一个正整数：\n");
	}
}
