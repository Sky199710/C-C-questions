/*************************************************************************
	> File Name: winec.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 06 Sep 2021 09:06:00 PM PDT
 ************************************************************************/

#include<iostream>
#include "winec.h"
using namespace std;
Wine::Wine(const char * l, int y, const int yr[], const int bot[]):PairArray(ArrayInt(y),ArrayInt(y)),
	string(l)
{
	num = y;
	for(int i=0;i<num;i++)
	{
		PairArray::first()[i] = yr[i];
		PairArray::second()[i] = bot[i];
	}
}

Wine::Wine(const char * l, int y):PairArray(ArrayInt(y),ArrayInt(y)),string(l)
{
	num = y;
}

void Wine::GetBottles()
{
	cout<<"Enter "<<(const string &)*this<<" data for "<<num<<" year(s):"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Enter year: ";
		cin>>PairArray::first()[i];
		cout<<"Enter bottles for that year: ";
		cin>>PairArray::second()[i];
	}
}

void Wine::Show()
{
	cout<<"Wine: "<<(const string &)*this<<endl;
	cout<<"\tYear\tBottles"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"\t"<<PairArray::first()[i]<<'\t'<<PairArray::second()[i]<<endl;
	}
}

const string & Wine::Label()
{
	return (const string &) (*this);
}

int Wine::sum()
{
	return PairArray::second().sum();
}




