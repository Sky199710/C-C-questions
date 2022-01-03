/*************************************************************************
	> File Name: 4.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 08:56:21 PM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void setSales(Sales & s,const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales &s);
}
