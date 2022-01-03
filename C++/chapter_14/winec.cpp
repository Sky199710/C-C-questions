/*************************************************************************
	> File Name: winec.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 06 Sep 2021 09:06:00 PM PDT
 ************************************************************************/

#include<iostream>
#include "winec.h"
using namespace std;
Wine::Wine(const char * l, int y, const int yr[], const int bot[]):info(ArrayInt(y),ArrayInt(y))
{
	name = l;
	num = y;
	for(int i=0;i<num;i++)
	{
		info.first()[i] = yr[i];
		info.second()[i] = bot[i];
	}
}

Wine::Wine(const char * l, int y):info(ArrayInt(y),ArrayInt(y))
{
	name = l;
	num = y;
}

void Wine::GetBottles()
{
	cout<<"Enter "<<name<<" data for "<<num<<" year(s):"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Enter year: ";
		cin>>info.first()[i];
		cout<<"Enter bottles for that year: ";
		cin>>info.second()[i];
	}
}

void Wine::Show()
{
	cout<<"Wine: "<<name<<endl;
	cout<<"\tYear\tBottles"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"\t"<<info.first()[i]<<'\t'<<info.second()[i]<<endl;
	}
}

string & Wine::Label()
{
	return name;
}

int Wine::sum()
{
	return info.second().sum();
}




