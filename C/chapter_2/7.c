/*************************************************************************
	> File Name: 7.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 02:42:35 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
}

int one_three()
{
	printf("one\n");
	two();
	printf("\n");
	printf("three\n");
}
int two()
{
	printf("two");
}
