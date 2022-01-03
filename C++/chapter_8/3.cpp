/*************************************************************************
	> File Name: 3.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 01:49:23 AM PDT
 ************************************************************************/

#include<iostream>
#define MAXLEN 40
#include<cctype>
#include<cstring>
using namespace std;
void uppercase(string &);
int main()
{
	string input;
	string quit("q");
	cout<<"Enter a string(q to quit):";
	getline(cin,input);
	while(input.compare(quit)!=0)
	{
		uppercase(input);
		cout<<input<<endl;
		cout<<"Nest string(q to quit):";
		getline(cin,input);
	}
}
void uppercase(string & str)
{
	for(int i=0;i<str.length();i++)
		str[i]=std::toupper(str[i]);
}
