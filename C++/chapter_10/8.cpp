/*************************************************************************
	> File Name: 8.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 01:14:52 AM PDT
 ************************************************************************/

#include<iostream>
#include"8.h"
using namespace std;
List::List()
{
	num=0;
}
void List::AddItem(const Item point)
{
	if(!this->isfull())
		item[num++]=point;
}
bool List::isempty()const
{
	if(num==0)
		return true;
	else 
		return false;
}
bool List::isfull()const
{
	if(num==MAXITEM)
		return true;
	else 
		return false;
}
void List::visit(void(*pf)(Item & ))
{
	for(int i=0;i<num;i++)
		pf(item[i]);
}
void show(Item & points)
{
	cout<<points<<" ";
}


