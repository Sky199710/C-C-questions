/*************************************************************************
	> File Name: 8.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 07:33:40 PM PST
 ************************************************************************/

#include<stdio.h>

double power(double n, int p)  // function definition
{
    double pow = 1;
    int i;
	if (n!=0)
	{
		if(p!=0)
		{
		
			if (p<0)
			{
				n=1/n;
				p=-p;
			}
			for (i = 1; i <= p; i++)
			pow *= n;
		}
		else
			pow=1;
	}
	else
	{
		if (p==0)
			{
				printf("0的0次幂未定义，因此把改值处理为1\n");
				pow=1;
			}
		else pow=0;
	}
    return pow;                // return the value of pow
}
int main()
{
	double n,ans;
	int p;
	printf("请输入底数和指数：");
	while((scanf("%lf %d",&n,&p))==2)
	{
		ans=power(n,p);
		printf("结果为%g\n",ans);
		printf("请输入底数和指数：");
	}
}
