/*************************************************************************
	> File Name: cow.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Aug 2021 06:54:59 PM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
class Cow
{
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm,const char * ho, double wt);
	Cow(const Cow & c);
	~Cow();
	Cow & operator=(const Cow & c);
	void ShowCow() const;
};
