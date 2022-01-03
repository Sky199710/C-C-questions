/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 20 Jun 2021 01:27:55 AM PDT
 ************************************************************************/

#include<stdio.h>
#define AVERAGE(X,Y) 1/(((1/X)+(1/Y))/2)
int main()
{
	double a,b,c;
	a=1;
	b=0.5;
	c=AVERAGE(a,b);
	printf("%f\n",c);
}
