/*************************************************************************
	> File Name: 4.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 02:21:26 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
#include<cstring>
struct stringy{
	char * str;
	int ct;
};
void set(stringy &,char*);
void show(stringy & str1, int n=1);
void show(char *,int n=1 );
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany,testing);
	show(beany);
	show(beany,2);
	testing[0]='D';
	testing[1]='u';
	show(testing);
	show(testing,3);
	show("Done!");
	return 0;
}
void set(stringy & str1,char * testing)
{
	 int len=std::strlen(testing);
	 char * p = new char[len+1];
	 std::strcpy(p,testing);
	 str1.str=p;
	 str1.ct=len;
}
void show(stringy & str1, int n)
{
	for(int i=0;i<n;i++)
		cout<<str1.str<<endl;
}
void show(char * str1,int n)
{
	for(int i=0;i<n;i++)
		cout<<str1<<endl;
}

