/*************************************************************************
	> File Name: main7.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 12:51:10 AM PDT
 ************************************************************************/

#include<iostream>
#include"7.h"
using namespace std;
int main()
{
	Plorg plog1;
	plog1.show();
	char name[MAXNAME]="hello";
	Plorg plog2(name,99);
	plog2.show();
	plog2.modify(0);
	plog2.show();
}

