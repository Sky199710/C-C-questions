/*************************************************************************
	> File Name: 2.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 16 Jul 2021 08:15:51 PM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
class Person{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person(){lname="";fname[0]='\0';}
	Person(const string & ln, const char * fn="Heyyou");
	void Show() const;
	void FormalShow() const;
};
