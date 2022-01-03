/*************************************************************************
	> File Name: base.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 31 Aug 2021 09:31:26 PM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
//base class
class Cd {
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char * s1,char * s2,int n,double x);
	Cd(const Cd & d);
	Cd();
	~Cd();
	void Report() const;
	Cd & operator=(const Cd & d);
};
