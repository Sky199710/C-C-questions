/*************************************************************************
	> File Name: 4.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 17 Jul 2021 01:35:16 AM PDT
 ************************************************************************/

#include<iostream>
#include"4.h"
using namespace std;
using namespace SALES;
Sales::Sales(const double ar[],int n)
{
	int i;
	average=0;
	max=0;
	min=10000;
	if(n>QUARTERS)
		n=QUARTERS;
	else if (n<0)
		n=0;
	for(i=0;i<n;i++)
	{
		sales[i]=ar[i];
		average+=sales[i];
		if(max<ar[i])
			max=ar[i];
		if(min>ar[i])
			min=ar[i];
	}
	average/=i;
	for(i;i<QUARTERS;i++)
	{
		sales[i]=0;
	}
}
Sales::Sales()
{
	double in;
	max=0.0;
	min=0.0;
	average=0.0;
	int i=0;
	cout<<"Please enter the sales: ";
	while(i<QUARTERS&&cin>>in)
	{
		sales[i++]=in;
	}
	if(i!=0)
	{
		max=sales[0];
		min=sales[0];
	}
	for(int j=0;j<i;j++)
	{
		average+=sales[j];
		if(max<sales[j])
			max=sales[j];
		if(min>sales[j])
			min=sales[j];
	}
		if(i!=0)
			average/=i;
		for(i;i<QUARTERS;i++)
		{
			sales[i]=0;
		}
	
}
void Sales::showSales()const
{
	int length=sizeof(sales)/sizeof(double);
	for(int i=0;i<length;i++)
	{
		cout<<sales[i]<<" ";
	}
	cout<<endl<<"average="<<average<<" "<<"max="<<max<<" "<<"min="<<min<<endl;	
}
