/*************************************************************************
	> File Name: pel2_2.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 28 Aug 2021 05:37:57 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include"string2.h"
int main()
{
	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;
	cout<< s2;
	cin>>s3;
	s2="My name is "+s3;
	cout<<s2<<".\n";
	s2=s2+s1;
	s2.stringup();
	cout<<"The string\n"<<s2<<"\ncontains "<<s2.has('A')
		<<" 'A' characters in it.\n";
	s1="red";
	String rgb[3] = {String(s1), String("green"), String("blue")};
	cout<<"Enter the name of a primary color for mixing light: ";
	String ans;
	bool success = false;
	while(cin>>ans)
	{
		ans.stringlow();
		for(int i=0;i<3;i++)
		{
			if(ans == rgb[i])
			{
				cout<<"That's right!\n";
				success = true;
				break;
			}
		}
		if(success)
			break;
		else
			cout<<"Try again!\n";
	}
	cout<<" Bye\n";
	return 0;
}
