/*************************************************************************
	> File Name: port.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 02 Sep 2021 06:44:08 AM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include "port.h"
using namespace std;
Port::Port(const char *br,const char *st,int b)
{
	int len = strlen(br);
	brand = new char[len+1];
	strcpy(brand,br);
	strcpy(style,st);
	bottles=b;
}
Port::Port(const Port & p)
{
	int len = strlen(p.brand);
	brand = new char[len+1];
	strcpy(brand,p.brand);
	strcpy(style,p.style);
	bottles=p.bottles;
}
Port & Port::operator=(const Port & p)
{
	if(this==&p)
		return *this;
	delete [] brand;
	int len = strlen(p.brand);
	brand = new char[len+1];
	strcpy(brand,p.brand);
	strcpy(style,p.style);
	bottles=p.bottles;
	return *this;
}
Port & Port::operator+=(int b)
{
	if(b<0)
		cout<<"Bottles can not be negetive. Operation aborted.\n";
	else
		bottles+=b;
}
Port & Port::operator-=(int b)
{
	if(b<0)
		cout<<"Bottles can not be negetive. Operation aborted.\n";
	else if(b>bottles)
		cout<<"Can not get bottles more than remain.\n";
	else
		bottles-=b;
}
void Port::Show() const
{
	cout<<"Brand: "<<brand<<endl;
	cout<<"Kind: "<<style<<endl;
	cout<<"Bottles: "<<bottles<<endl;
}
ostream & operator<<(ostream & os, const Port & p)
{
	
	os<<p.brand<<", "<<p.style<<", "<<p.bottles;
	return os;
}

VintagePort::VintagePort():Port()
{
	nickname = new char[1];
	nickname[0] = '\0';
	year = 0;
}
VintagePort::VintagePort(const char * br,int b, const char *nn, int y):Port(br,"vintage",b)
{
	int len = strlen(nn);
	nickname = new char[len+1];
	strcpy(nickname,nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort &vp):Port(vp)
{
	int len = strlen(vp.nickname);
	nickname = new char[len+1];
	strcpy(nickname,vp.nickname);
	year = vp.year;
}
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if(this==&vp)
		return *this;
	Port::operator=(vp);
	delete [] nickname;
	int len = strlen(vp.nickname);
	nickname = new char[len+1];
	strcpy(nickname,vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::Show() const
{	
	Port::Show();
	cout<<"Nickname: "<<nickname<<endl;
	cout<<"Year: "<<year<<endl;
}
ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os<<(const Port &)vp;
	os<<", "<<vp.nickname<<", "<<vp.year;
}
