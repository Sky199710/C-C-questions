/*************************************************************************
	> File Name: 6.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 01:41:25 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	float a,b,ans;
	printf("请输入两个浮点数： \n");
	while(scanf("%f %f",&a,&b))
	{
		ans=(a-b)/(a*b);
		printf("%f\n",ans);
		printf("请输入两个浮点数： \n");
	}
	
	printf("\n");
}
