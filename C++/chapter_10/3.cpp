/*************************************************************************
	> File Name: 3.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 17 Jul 2021 12:35:20 AM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include"3.h"
using namespace std;
Golf::Golf(const char * name, int hc)
{
	strcpy(fullname,name);
	handicap=hc;
}
int Golf::setgolf()
{
	char name[Len];
	int hc;
	cout<<"Please enter the name:(empty line to quit) ";
	cin.get(name,Len);
	strcpy(fullname,name);
	if(fullname[0]=='\0')
		return 0;
	cout<<"Please enter the handicap: ";
	cin>>handicap;
	cin.get();
	return 1;
}
void Golf::handi(int hc)
{
	handicap=hc;
}
void Golf::showgolf()const
{
	cout<<fullname<<":  "<<handicap<<endl;
}

