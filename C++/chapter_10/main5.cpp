/*************************************************************************
	> File Name: main5.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 19 Jul 2021 11:24:32 PM PDT
 ************************************************************************/

#include<iostream>
#include<cctype>
#include<cstring>
#include"stack.h"
using namespace std;
int main()
{
	Stack st;
	char ch;
	char name[35];
	double money;
	double sum=0.0;
	struct customer cu;
	cout<<"Please enter A to add a purchase order,\n"
		<<"P to process a PO, or Q to quit.\n";
	while(cin>>ch&&toupper(ch)!='Q')
	{
		while(cin.get()!='\n')
			continue;
		if(!isalpha(ch))
		{
			cout<<'\a';
			continue;
		}
		switch(ch)
		{
			case'A':
			case'a':cout<<"Enter a customer name: ";
					cin.get(name,35);
					strcpy(cu.fullname,name);
					cout<<"Enter the payment: ";
					cin>>cu.payment;
					if(st.isfull())
						cout<<"stack already full\n";
					else
						st.push(cu);
					break;
			case'p':
			case'P':if(st.isempty())
						cout<<"stack already empty\n";
					else{
						st.pop(cu);
						sum+=cu.payment;
					}
					break;
		}
		cout<<"Please enter A to add a purchase order,\n"
			<<"P to process a PO, or Q to quit.\n";
		
	}
	cout<<"The sum is "<<sum<<endl
		<<"Bye\n";
	return 0;
}
