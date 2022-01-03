/*************************************************************************
	> File Name: test.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 28 Aug 2021 01:14:43 AM PDT
 ************************************************************************/

#include<iostream>
#include"cow.h"
using namespace std;
int main()
{
	Cow Jack;
	Jack.ShowCow();
	Cow Mike("Mike","Computer games",130);
	Mike.ShowCow();
	Jack = Mike;
	Jack.ShowCow();
	Cow Jenny(Jack);
	Jenny.ShowCow();
}
