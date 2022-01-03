/*************************************************************************
	> File Name: 4.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 17 Jul 2021 01:27:20 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double ar[],int n);
		Sales();
		void showSales()const;
	};
};
