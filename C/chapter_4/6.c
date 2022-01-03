/*************************************************************************
	> File Name: 6.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 06:27:23 PM PST
 ************************************************************************/

#include<stdio.h>
#include<float.h>
int main()
{
	double a=1.0/3.0;
	float b=1.0/3.0;
	printf("%5.4f %1.12f %1.16f\n",a,a,a);	
	printf("%5.4f %1.12f %1.16f\n",b,b,b);
	printf("%d %d\n",FLT_DIG,DBL_DIG);
}
