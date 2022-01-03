/*************************************************************************
	> File Name: main2.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 16 Jul 2021 08:32:51 PM PDT
 ************************************************************************/

#include<iostream>
#include"2.h"
using namespace std;
int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy","Sam");
	one.Show();
	cout<<endl;
	one.FormalShow();
	cout<<endl;
	two.Show();
	cout<<endl;
	two.FormalShow();
	cout<<endl;
	three.Show();
	cout<<endl;
	three.FormalShow();
	cout<<endl;
}
