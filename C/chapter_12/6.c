/*************************************************************************
	> File Name: 5.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 04:45:00 AM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int seed;
	int a[1000];
	int b[10]={0,0,0,0,0,0,0,0,0,0};
	int temp;
	printf("请输入种子： ");
	while(scanf("%d",&seed)==1)
	{
		srand(seed);
		for (int i=0;i<1000;i++)
		{
			a[i]=rand()%10+1;
			b[a[i]-1]++;
		}
		printf("0-10数字的个数分别为：\n");
		for (int i=0;i<10;i++)
		{
			printf("%d\t",b[i]);
			if((i+1)%5==0)
				printf("\n");
		}
		printf("请输入种子： ");
		for (int i=0;i<10;i++)
			b[i]=0;
	}	
}
