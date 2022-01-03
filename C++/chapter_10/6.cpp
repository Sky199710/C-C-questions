/*************************************************************************
	> File Name: 6.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 19 Jul 2021 11:48:50 PM PDT
 ************************************************************************/

#include<iostream>
#include"6.h"
using namespace std;
Move::Move(double a, double b)
{
	x=a;
	y=b;
}
void Move::showmove()const
{
	cout<<"x = "<<x<<endl
		<<"y = "<<y<<endl;
}
Move Move::add(const Move & m) const
{
	double nx,ny;
	nx=x+m.x;
	ny=y+m.y;
	Move newmove(nx,ny);
	return newmove;
}
void Move::reset(double a,double b)
{
	x=a;
	y=b;
}

