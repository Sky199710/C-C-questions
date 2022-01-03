/*************************************************************************
	> File Name: stack.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 30 Aug 2021 12:53:06 AM PDT
 ************************************************************************/

#include<iostream>
#include "stack.h"
using namespace std;
Stack::Stack(int n)
{
	pitems = new Item[n];
	size = n;
	top = 0;
}
Stack::Stack(const Stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for(int i=0;i<top;i++)
		pitems[i] = st.pitems[i];
}
Stack::~Stack()
{
	delete [] pitems;
}
bool Stack::isempty() const
{
	return top==0;
}
bool Stack::isfull()const
{
	return top==size;
}
bool Stack::push(const Item & item)
{
	if(top<size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item & item)
{
	if(top>0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}
Stack & Stack::operator=(const Stack &st)
{
	if(this == &st)
		return *this;
	delete [] pitems;
	size=st.size;
	top=st.top;
	pitems = new Item[size];
	for(int i=0;i<top;i++)
		pitems[i]=st.pitems[i];
}


