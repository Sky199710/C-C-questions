/*************************************************************************
	> File Name: 6.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 19 Jul 2021 11:45:16 PM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move & m) const;
	void reset(double a = 0,double b = 0);
};
