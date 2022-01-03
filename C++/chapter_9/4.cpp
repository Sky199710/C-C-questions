/*************************************************************************
	> File Name: 4.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 08:56:21 PM PDT
 ************************************************************************/

#include<iostream>
#include"4.h"
using namespace std;
namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double avery=0.0;
		double max=ar[0];
		double min=ar[0];
		int i;
		if(n>QUARTERS)
			n=QUARTERS;
		else
		{
			for(i=0;i<n;i++)
			{
				s.sales[i]=ar[i];
				avery+=s.sales[i];
				if(max<ar[i])
					max=ar[i];
				if(min>ar[i])
					min=ar[i];
			}
			avery/=n;
			for(i;i<QUARTERS;i++)
			{
				s.sales[i]=0;
			}

		}
		s.average=avery;
		s.max=max;
		s.min=min;
	}
	void setSales(Sales & s)
	{
		double in;
		double avery=0.0;
		double max=0.0;
		double min=0.0;
		int i=0;
		cout<<"Enter sales ('q' to quit):";
		while(cin>>in&&i<QUARTERS)
		{
			s.sales[i++]=in;
		}
		if(i!=0)
		{
			max=s.sales[0];
			min=s.sales[0];
		}
		for(int j=0;j<i;j++)
		{
			avery+=s.sales[j];
			if(max<s.sales[j])
				max=s.sales[j];
			if(min>s.sales[j])
				min=s.sales[j];
		}
		if(i!=0)
			avery/=i;
		for(i;i<QUARTERS;i++)
		{
			s.sales[i]=0;
		}
		s.max=max;
		s.min=min;
		s.average=avery;
	}
	void showSales(const Sales & s)
	{
		int length=sizeof(s.sales)/sizeof(double);
		for(int i=0;i<length;i++)
		{
			cout<<s.sales[i]<<" ";
		}
		cout<<endl<<"average="<<s.average<<" "<<"max="<<s.max<<" "<<"min="<<s.min<<endl;
	}
}
