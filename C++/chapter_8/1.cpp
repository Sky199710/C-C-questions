/*************************************************************************
	> File Name: 1.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 04 Jul 2021 11:45:42 PM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
static int summon=1;
void print_str(const char * str, int n=0)
{
	using namespace std;
	if(n!=0)
	{
		for(int i=0;i<summon;i++)
		{
			cout<<str<<endl;	
		}
		summon++;
	}
	else 
		cout<<str<<endl;	
}
int main()
{
	const int SIZE=80;
	char input[SIZE];
	int num;
	cout<<"Enter a string: ";
	cin.get(input,SIZE);
	cout<<"Enter a number: ";
	cin>>num;
	print_str(input,num);
	print_str(input,num);
}
