/*************************************************************************
	> File Name: complex.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 26 Aug 2021 02:21:46 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include "complex0.h"
int main()
{
	complex a(3.0, 4.0);
	complex c;
	cout<<"Enter a complex number (q to quit):\n";
	while(cin>>c)
	{
		cout<<"c is "<<c<<'\n';
		cout<<"complex conjugate is "<<~c<<'\n';
		cout<<"a is "<<a<<'\n';
		cout<<"a + c is "<<a + c<<'\n';
		cout<<"a - c is "<<a - c<<'\n';
		cout<<"a * c is "<<a * c<<'\n';
		cout<<"2 * c is "<<2 * c<<'\n';
		cout<<"Enter a complex number (q to quit):\n";
	}
	cout<<"Done!\n";
	return 0;
}
