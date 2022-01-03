/*************************************************************************
	> File Name: 7.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 12:45:10 AM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include"7.h"
using namespace std;
Plorg::Plorg(const char * name_,const int CI_)
{
	strcpy(name,name_);
	CI=CI_;
}
void Plorg::modify(const int CI_)
{
	CI=CI_;
}
void Plorg::show()const
{
	cout<<"Name: "<<name<<endl
		<<"CI: "<<CI<<endl;
}

