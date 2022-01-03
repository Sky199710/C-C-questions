/*************************************************************************
	> File Name: 1.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 08 Jul 2021 05:39:19 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include<string>

class Bank
{
private:
	string name;
	string account;
	double sum;
public:
	Bank(const string & name_="NULL", const string &  account_="NULL",double save_ =0.0);
	void save(double money);
	void fetch(double money);
	void show();
};

