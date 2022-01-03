/*************************************************************************
	> File Name: stacker.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 30 Aug 2021 01:43:10 AM PDT
 ************************************************************************/

#include<iostream>
#include"stack.h"
using namespace std;
int main()
{
	Item po;
	Stack st(5);
	st.push(9856);
	st.push(8259);
	st.push(3847);
	st.pop(po);
	cout<<po<<endl;
	Stack st1(st);
	st1.pop(po);
	cout<<po<<endl;
	Stack st2;
	st2=st1;
	st2.pop(po);
	cout<<po<<endl;

}


