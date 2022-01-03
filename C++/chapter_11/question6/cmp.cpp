/*************************************************************************
	> File Name: cmp.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 21 Jul 2021 06:23:39 AM PDT
 ************************************************************************/

#include<iostream>
#include"stonewt.h"
using namespace std;
int main()
{
	Stonewt goods[6];
	Stonewt standard = Stonewt(11,0);
	goods[0]=Stonewt(88.888);
	goods[1]=Stonewt(11,0);
	goods[2]=Stonewt(59.636);
	char ch;
	int st;
	double fl;
	double pd;
	Stonewt max;
	Stonewt min;
	int num=0;

	for(int i=3;i<6;i++)
	{
		cout<<"Please choose a mode:"<<endl;
		cout<<"s:stone	p:pounds\n";
		while(cin>>ch)
		{
			if(ch=='s'||ch=='p')
				break;
			else
			{
				while(cin.get()!='\n')
					continue;
				cout<<"Please enter option between 's' and 'p'\n";
			}
		}
		switch(ch)
		{
		case's':cout<<"Please enter the stone: ";
				cin>>st;
				cout<<"Please enter the rest pounds: ";
				cin>>fl;
				goods[i]=Stonewt(st,fl);
				break;
		case'p':cout<<"Please enter the pounds: ";
				cin>>pd;
				goods[i]=Stonewt(pd);
		}
	}
	for(int i=0;i<6;i++)
	{
		if(i==0)
		{
			max=goods[0];
			min=goods[0];
		}
		if(max<goods[i])
			max=goods[i];
		if(min>goods[i])
			min=goods[i];
	}
	cout<<"Min: ";
	min.show_stn();	
	cout<<"Max: ";
	max.show_stn();
	cout<<"Items over 11 pounds: ";
	for(int i=0;i<6;i++)
	{
		if(goods[i]>=standard)
			goods[i].show_stn();
	}
}

