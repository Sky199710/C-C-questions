/*************************************************************************
	> File Name: 2.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 16 Jul 2021 08:20:08 PM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include"2.h"
using namespace std;
Person::Person(const string & ln, const char * fn)
{
	lname=ln;
	strcpy(fname,fn);
}
void Person::Show()const
{
	cout<<fname<<" "<<lname;
}
void Person::FormalShow()const
{
	cout<<lname<<", "<<fname;
}
