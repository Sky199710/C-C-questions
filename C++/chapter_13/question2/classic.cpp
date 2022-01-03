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
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	performers = new char[len1+1];
	label = new char[len2+1];
	strcpy(performers,s1);
	strcpy(label,s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	delete [] performers;
	delete [] label;
	int len1 = strlen(d.performers);
	int len2 = strlen(d.label);
	performers = new char[len1+1];
	label = new char[len2+1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[1];
	label = new char[1];
	performers[0]='\0';
	label[0]='\0';
	selections=0;
	playtime=0;
}
Cd::~Cd()
{
	delete [] performers;
	delete [] label;
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
	delete [] performers;
	delete [] label;
	int len1 = strlen(d.performers);
	int len2 = strlen(d.label);
	performers = new char[len1+1];
	label = new char[len2+1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * mw, char * s1, char * s2, int n, double x):Cd(s1,s2,n,x)
{
	int len = strlen(mw);
	main_work = new char[len+1];
	strcpy(main_work,mw);
}
Classic::Classic(const Cd &d, char * mw):Cd(d)
{
	int len = strlen(mw);
	main_work = new char[len+1];
	strcpy(main_work,mw);
}
Classic::Classic():Cd()
{
	main_work = new char[1];
	main_work[0] = '\0';
}
Classic::~Classic()
{
	delete [] main_work;
}
Classic & Classic::operator=(const Classic & cl)
{
	if(this==&cl)
		return *this;
	Cd::operator=(cl);
	delete [] main_work;
	int len = strlen(cl.main_work);
	main_work = new char[len+1];
	strcpy(main_work,cl.main_work);
	return *this;
}
void Classic:: Report() const
{
	cout<<"Main work: "<<main_work<<endl;
	Cd::Report();
}

