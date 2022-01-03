/*************************************************************************
	> File Name: pushnpop.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 23 Jun 2021 04:49:33 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
int main(void)
{
	Stack strings;
	Item temp;

	InitializeStack(&strings);
	if(FullStack(&strings))
	{
		fprintf(stderr,"No memory acailable!Bye!\n");
		exit(1);
	}

	puts("Enter the string.");
	while((temp=getchar())!='\n')
	{
		if(Push(temp,&strings)==false)
		{
			fprintf(stderr,"Problem pushing stacks.");
			break;
		}
		if(FullStack(&strings))
		{
			puts("The stack now is full.");
			break;
		}
	}
	if(EmptyStack(&strings))
	{
		printf("No data stacked.");
	}
	else
	{
		while(Pop(&temp,&strings)==true)
			printf("%c",temp);
		printf("\n");
	}
}
