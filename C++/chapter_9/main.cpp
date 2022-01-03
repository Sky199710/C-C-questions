/*************************************************************************
	> File Name: main.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 07 Jul 2021 01:56:14 AM PDT
 ************************************************************************/

#include<iostream>
#include"4.h"
using namespace std;
int main()
{
	using SALES::Sales;
	Sales sales1,sales2;
	using SALES::setSales;
	setSales(sales1);
	double ar[2]={3.26,5.18};
	setSales(sales2,ar,2);
	using SALES::showSales;
	showSales(sales1);
	showSales(sales2);

}

