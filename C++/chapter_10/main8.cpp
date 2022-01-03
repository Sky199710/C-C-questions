/*************************************************************************
	> File Name: main8.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 01:36:34 AM PDT
 ************************************************************************/

#include<iostream>
#include"8.h"
using namespace std;
int main()
{
	List Rick;
	Rick.AddItem(1);
	Rick.AddItem(2);
	Rick.AddItem(3);
	Rick.AddItem(4);
	Rick.AddItem(5);
	Rick.visit(show);
}

