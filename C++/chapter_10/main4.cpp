/*************************************************************************
	> File Name: main4.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 17 Jul 2021 01:56:49 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include"4.h"
int main()
{
	using SALES::Sales;
	double ar[2]={3.26,5.18};
	Sales sales1(ar,2);
	Sales sales2;
	sales1.showSales();
	sales2.showSales();

}
