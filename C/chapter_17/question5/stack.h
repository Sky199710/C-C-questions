/*************************************************************************
	> File Name: stack.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 23 Jun 2021 04:16:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAXSTACK 100

typedef char Item;
typedef struct stack
{
	Item items[MAXSTACK];
	int top;
}Stack;

void InitializeStack(Stack * ps);
bool FullStack(const Stack * ps);
bool EmptyStack(const Stack * ps);
bool Push(Item item,Stack * ps);
bool Pop(Item *pitem, Stack * ps);
