/*************************************************************************
	> File Name: main3.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 17 Jul 2021 12:54:33 AM PDT
 ************************************************************************/

#include<iostream>
#include"3.h"
using namespace std;
int main()
{
	Golf golf[3];
	int i;
	for(i=0;i<3;i++)
	{
		if(!golf[i].setgolf())
			break;
	}
	for(int j=0;j<i;j++)
		golf[j].showgolf();
	cout<<"bye!"<<endl;


}

