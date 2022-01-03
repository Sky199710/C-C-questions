/*************************************************************************
	> File Name: stack.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 23 Jun 2021 04:24:50 AM PDT
 ************************************************************************/

#include<stdio.h>
#include "stack.h"
void InitializeStack(Stack * ps)
{
	ps->top=-1;
}
bool FullStack(const Stack * ps)
{
	if(ps->top>=MAXSTACK-1)
		return true;
	else
		return false;
}
bool EmptyStack(const Stack *ps)
{
	if(ps->top==-1)
		return true;
	else
		return false;
}
bool Push(Item item, Stack * ps)
{
	if(ps->top>=MAXSTACK-1)
		return false;
	else
	{
		ps->items[++ps->top]=item;
		return true;
	}
}
bool Pop(Item *pitem,Stack * ps)
{
	if(ps->top==-1)
		return false;
	else
	{
		*pitem=ps->items[ps->top--];
		return true;
	}
}
