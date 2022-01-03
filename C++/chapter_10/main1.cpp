/*************************************************************************
	> File Name: main1.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 08 Jul 2021 06:06:53 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include"1.h"
int main()
{
	Bank card1("Sky","371254230",6.36);
	Bank card2 = Bank();
	card1.show();
	card2.show();
	card1.save(100.23);
	card1.fetch(-20);
	card1.show();
	card1.fetch(100000);
	card1.show();
	card1.fetch(3.36);
	card1.show();
	
}
