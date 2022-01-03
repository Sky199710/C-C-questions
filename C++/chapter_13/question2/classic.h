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
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char * s1,char * s2,int n,double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
	char * main_work;
public:
	Classic(char * mw, char * s1, char * s2, int n, double x);
	Classic(const Cd &d, char * s3);
	Classic();
	~Classic();
	virtual void Report() const;
	Classic & operator=(const Classic & cl);

};
