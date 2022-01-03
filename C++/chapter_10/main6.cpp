/*************************************************************************
	> File Name: main6.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 12:03:29 AM PDT
 ************************************************************************/

#include<iostream>
#include"6.h"
using namespace std;
int main()
{
	Move or1;
	or1.showmove();
	Move or2(1.3,5.6);
	Move or3 = or1.add(or2);
	or1.showmove();
	or3.showmove();
	or1.reset(2,3);
	or1.showmove();
	or3 = or1.add(or2);
	or1.showmove();
	or3.showmove();

}

