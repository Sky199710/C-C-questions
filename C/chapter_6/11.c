/*************************************************************************
	> File Name: 11.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 05:49:26 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{	
	int n;
	printf("请输入次数： \n");
	scanf("%d",&n);
	float ans1,ans2;
	int reverse;
    ans1=0;
    ans2=0;
	reverse=-1;
	for (float i=1;i<=n;i++)
	{
		reverse*=-1;
		ans1+=1.0/i;
		ans2+=reverse*(1.0/i);
	}
	printf("结果分别是%f %f\n",ans1,ans2);
	printf("请再输入次数: \n");
	scanf("%d",&n);
	while(n>0)
	{	
		ans1=0;
		ans2=0;
		reverse=-1;
		for (float i=1;i<=n;i++)
		{
			reverse*=-1;
			ans1+=1.0/i;
			ans2+=reverse*(1.0/i);
		}
		printf("结果分别是%f %f\n",ans1,ans2);
		printf("请再输入次数: \n");
		scanf("%d",&n);
	}
}
