/*************************************************************************
	> File Name: 4.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 07:50:45 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int feet;
	float n,m,inches;
	printf("Enter a height in centimetrs: ");
	scanf("%f",&n);
	while(n>0)
	{	m=n/2.54;
		feet=m/12;
		inches=m-feet*12;
		printf("%.1f cm = %d feet, %.1f inches\n",n,feet,inches);
		printf("Enter a height in centimetrs: (<=0 to quit) ");
		scanf("%f",&n);
	}
	printf("bye\n");

}
