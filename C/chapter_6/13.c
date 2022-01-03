/*************************************************************************
	> File Name: 13.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 25 Nov 2020 06:30:59 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	double a[8],b[8];
	printf("请输入数组1的8个值 \n");
	scanf("%lf",&a[0]);
	b[0]=a[0];
	for(int i=1;i<8;i++)
	{
		scanf("%lf",&a[i]);
		b[i]=a[i]+b[i-1];
	}
	for (int i=0;i<8;i++)
		printf("%lf\t",a[i]);
	printf("\n");
	for (int i=0;i<8;i++)
		printf("%lf\t",b[i]);
	printf("\n");
}
