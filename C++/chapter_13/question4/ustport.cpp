/*************************************************************************
	> File Name: ustport.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 03 Sep 2021 05:01:40 AM PDT
 ************************************************************************/

#include<iostream>
#include "port.h"
using namespace std;
int main()
{
	Port * p_ports[4];
	p_ports[0] = new Port("Dying","Hush",99);
	p_ports[0]->Show();
	p_ports[1] = new Port;
	*p_ports[1] = *p_ports[0];
	p_ports[1] ->Show();
	*p_ports[1]+=1;
	*p_ports[0]-=100;
	cout<<p_ports[1]->BottleCount()<<endl;
	cout<<p_ports[0]->BottleCount()<<endl;
	
	p_ports[2] = new VintagePort("Fucking",100,"Cao",1997);
	p_ports[2]->Show();
	p_ports[3] = new VintagePort;
	*p_ports[3] = *p_ports[2];
	p_ports[3]->Show();
	*p_ports[3]+=100;
	cout<<p_ports[2]->BottleCount()<<endl;

	for(int i=0;i<4;i++)
	{
		cout<<*p_ports[i]<<endl;
	}
	VintagePort * temp;
	VintagePort * item;
	temp = new VintagePort("Soga",989,"Yes",2021);
	item = new VintagePort;
	item = temp;
	item->Show();
	cout<<*item<<endl;


	


}

