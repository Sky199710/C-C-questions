/*************************************************************************
	> File Name: complex0.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 26 Aug 2021 03:18:14 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
class complex
{
private:
	double real;
	double image;
public:
	complex(double real,double image);
	complex();
	~complex();
	
	complex operator+(const complex &b) const;
	complex operator-(const complex &b) const;
	complex operator*(const complex &b) const;
	complex operator*(const double b) const;
	friend complex operator*(const double b, const complex &a)
	{
		return a*b;
	}
	complex operator~() const;
	friend ostream & operator<<(ostream & os, const complex &b);
	friend istream & operator>>(istream & is, complex &b);


};
