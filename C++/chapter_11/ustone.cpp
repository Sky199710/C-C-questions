/*************************************************************************
	> File Name: ustone.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 21 Jul 2021 04:41:45 AM PDT
 ************************************************************************/

#include<iostream>
#include"stonewt.h"
using namespace std;
int main()
{
	Stonewt goods1(6.985);
	Stonewt goods2(5,3.21);
	Stonewt goods3,goods4,goods5,goods6;
	goods3=goods1+goods2;
	goods4=goods2-goods1;
	goods5=2.4*goods2;
	goods6=goods2*2.4;
	cout<<"goods1: "<<goods1<<endl
		<<"goods2: "<<goods2<<endl
		<<"goods1+goods2: "<<goods3<<endl
		<<"goods2-goods1: "<<goods4<<endl
		<<"2.4*goods2: "<<goods5<<endl
		<<"or: "<<goods5<<endl;
	goods5.ipound_mode();
	cout<<"or: "<<goods5<<endl;
	goods5.fpound_mode();
	cout<<"or: "<<goods5<<endl;
}

