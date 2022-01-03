/*************************************************************************
	> File Name: complex0.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 26 Aug 2021 04:29:58 AM PDT
 ************************************************************************/

#include<iostream>
#include "complex0.h"
using namespace std;
complex::complex(double real_,double image_ )
{
	real=real_;
	image=image_;
}
complex::complex()
{
	real=0;
	image=0;
}
complex::~complex()
{

}
complex complex::operator+(const complex &b) const
{
	complex sum;
	sum.real=real+b.real;
	sum.image=image+b.image;
	return sum;
}
complex complex::operator-(const complex &b) const
{
	complex min;
	min.real=real-b.real;
	min.image=image-b.image;
	return min;
}
complex complex::operator*(const complex &b) const
{
	complex mul;
	mul.real=(real*b.real-image*b.image);
	mul.image=real*b.image+image*b.real;
	return mul;
}
complex complex::operator*(const double b) const
{
	complex mul;
	mul.real=real*b;
	mul.image=image*b;
	return mul;
}
complex complex::operator~()const
{
	complex conjure;
	conjure.real=real;
	conjure.image=-image;
	return conjure;
}
ostream & operator<<(ostream & os, const complex &b)
{
	os<<"("<<b.real<<","<<b.image<<"i)";
	return os;
}
istream & operator>>(istream & is,complex &b)
{
	cout<<"real: ";
	if(!(is>>b.real))
		return is;
	cout<<"imaginary: ";
	is>>b.image;
	return is;
}
