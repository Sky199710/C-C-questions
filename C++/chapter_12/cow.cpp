/*************************************************************************
	> File Name: cow.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Aug 2021 07:01:13 PM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include"cow.h"
using namespace std;
Cow::Cow()
{
	name[0]='\0';
	hobby = new char[1];
	hobby[0]='\0';
	weight = 0.0;
}
Cow::Cow(const char * nm,const char *ho, double wt)
{
	strcpy(name,nm);
	int len = strlen(ho);
	hobby = new char[len+1];
	strcpy(hobby,ho);
	weight = wt;

}
Cow::Cow(const Cow & c)
{
	strcpy(name,c.name);
	int len = strlen(c.hobby);
	hobby = new char[len+1];
	strcpy(hobby,c.hobby);
	weight=c.weight;
}
Cow::~Cow()
{
	delete [] hobby;
}
Cow & Cow::operator=(const Cow & c)
{
	name[0]='\0';
	delete [] hobby;
	int len = strlen(c.hobby);
	hobby = new char[len+1];
	strcpy(name,c.name);
	strcpy(hobby,c.hobby);
	weight=c.weight;
	return *this;
}
void Cow::ShowCow() const
{
	cout<<"Name: "<<name<<" Hobby: "<<hobby<<" Weight: "<<weight<<endl;
}

