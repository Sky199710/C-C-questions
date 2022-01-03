/*************************************************************************
	> File Name: 3.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 17 Jul 2021 12:27:48 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
class Golf{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(const char * name="", int hc=0);
	int setgolf();
	void handi(int hc);
	void showgolf()const;
};
