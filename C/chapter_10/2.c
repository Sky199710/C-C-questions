/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 06:15:22 PM PST
 ************************************************************************/

#include<stdio.h>
void copy_arr(double [], const double [], int);
void copy_ptr(double [], const double [], int);
void copy_ptrs(double [], const double [], double *);
int main()
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
	printf("source[5]=");
	for (int i=0;i<5;i++)
		printf("%g\t",source[i]);
	printf("\n");
	printf("target1[5]=");
	for (int i=0;i<5;i++)
		printf("%g\t",target1[i]);
	printf("\n");
	printf("target2[5]=");
	for (int i=0;i<5;i++)
		printf("%g\t",target2[i]);
	printf("\n");
	printf("target3[5]=");
	for (int i=0;i<5;i++)
		printf("%g\t",target3[i]);
	printf("\n");

}
void copy_arr(double tar[], const double sour[], int n)
{
	for (int i=0;i<n;i++)
		tar[i]=sour[i];
}
void copy_ptr(double tar[], const double sour[], int n)
{
	for (int i=0;i<n;i++)
		*(tar+i)=*(sour+i);
}
void copy_ptrs(double tar[], const double sour[],double *end)
{
	while(sour<end)
	{
		*tar++=*sour++;
	}
}
