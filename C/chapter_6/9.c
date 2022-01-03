/*************************************************************************
	> File Name: 9.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 05:35:19 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int min,max,sum;
	printf("Enter lower and upper integer limits: \n");
	scanf("%d %d",&min,&max);
	while(max>min)
	{	
		sum=0;
		for (int i=min;i<=max;i++)
		{
			sum+=i*i;
		}
		printf("The sums of the squares form %d to %d is %d\n",min,max,sum);
		printf("Enter next set of limits: \n");
		scanf("%d %d",&min,&max);
	}
	printf("Done\n");
}
