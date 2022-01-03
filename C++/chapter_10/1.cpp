/*************************************************************************
	> File Name: 1.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 08 Jul 2021 05:48:46 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include"1.h"
Bank::Bank(const string & name_,const string & account_,double save_)
{
	name=name_;
	account=account_;
	sum=save_;
}
void Bank::save(double money)
{
	if(money<0)
		cout<<"The amount of money can not be negative. "<<"Saving is aborted.\n";
	else
		sum+=money;
}
void Bank::fetch(double money)
{
	if(money<0)
		cout<<"The amount of money can not be negative. "<<"Fetching is aborted.\n";
	else if(money>sum)
		cout<<"You can't fetch more than you have! "<<"Fetching is aborted.\n";
	else
		sum-=money;
}
void Bank::show()
{
	cout<<"Name: "<<name<<"   "
		<<"Account: "<<account<<'\n'
		<<"Saved money: "<<sum<<'\n';

}
