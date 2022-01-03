/*************************************************************************
	> File Name: classic.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 01 Sep 2021 12:29:13 AM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include "classic.h"
using namespace std;
Cd::Cd(char * s1,char * s2, int n, double x)
{
	strncpy(performers,s1,49);
	strncpy(label,s2,19);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers[0]='\0';
	label[0]='\0';
	selections=0;
	playtime=0;
}
Cd::~Cd()
{

}
void Cd::Report()const
{
	cout<<"Performers: "<<performers<<endl
		<<"Label: "<<label<<endl
		<<"selections: "<<selections<<endl
		<<"playtime: "<<playtime<<endl<<endl;
}
Cd & Cd::operator=(const Cd &d)
{	
	if(this==&d)
		return *this;
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * mw, char * s1, char * s2, int n, double x):Cd(s1,s2,n,x)
{
	strncpy(main_work,mw,49);
}
Classic::Classic(const Cd &d, char * mw):Cd(d)
{
	strncpy(main_work,mw,49);
}
Classic::Classic():Cd()
{
	main_work[0]='\0';
}
Classic::~Classic()
{

}
Classic & Classic::operator=(const Classic & cl)
{
	if(this==&cl)
		return *this;
	Cd::operator=(cl);
	strcpy(main_work,cl.main_work);
	return *this;
}
void Classic:: Report() const
{
	cout<<"Main work: "<<main_work<<endl;
	Cd::Report();
}

