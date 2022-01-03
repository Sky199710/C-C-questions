/*************************************************************************
	> File Name: 7.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 12:35:52 AM PDT
 ************************************************************************/

#include<iostream>
#define MAXNAME 20
using namespace std;
class Plorg{
private:
	char name[MAXNAME];
	int CI;
public:
	Plorg(const char * name_="Plorga",const int CI_=50);
	void modify(const int CI_);
	void show() const;
};

