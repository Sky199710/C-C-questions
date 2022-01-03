/*************************************************************************
	> File Name: 11.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 19 May 2021 02:05:20 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>
void transform(double *,double *,int ,double(*fp)(double));
double square (double);
double cube (double);
int main()
{
	double source[100],target[100];
	for(int i=0;i<100;i++)
	{
		source[i]=i*1.0/100;
	}
	double(*pfun[4])(double)={sin,cos,square,cube};
	transform(source,target,25,pfun[0]);
	transform(source+25,target+25,25,pfun[1]);
	transform(source+50,target+50,25,pfun[2]);
	transform(source+75,target+75,25,pfun[3]);
	for(int i=0;i<100;i++)
	{
		if(i%25==0)
			printf("\n");
		printf("%.3f ",target[i]);
	}
}
void transform(double source[],double target[],int n,double(*fp)(double))
{
	for(int i=0;i<n;i++)
		target[i]=fp(source[i]);
}
double square (double n)
{
	return n*n;
}
double cube (double n)
{
	return n*n*n;
}
