/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 06:15:22 PM PST
 ************************************************************************/

#include<stdio.h>
void copy_arr(double [], const double [], int);
int main()
{
	double a[]={1,2,3,4,5,6,7};
	double b[3];
	copy_arr(b,a+2,3);
	for (int i=0;i<3;i++)
		printf("%g\t",b[i]);
	printf("\n");
}
void copy_arr(double tar[], const double sour[], int n)
{
	for (int i=0;i<n;i++)
		tar[i]=sour[i];
}

