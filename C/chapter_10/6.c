/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 06:42:11 PM PST
 ************************************************************************/

#include<stdio.h>
void order (double a[], int n)
{
	double temp;
	for (int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
int main()
{
	double a[]={1.1,2.2,3.3,4.4,5.5};
	order(a,sizeof(a)/8);
	for(int i=0;i<sizeof(a)/8;i++)
		printf("%g\t",a[i]);
	printf("\n");
}
