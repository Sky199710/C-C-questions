/*************************************************************************
	> File Name: winec.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 06 Sep 2021 05:57:33 AM PDT
 ************************************************************************/

#include<iostream>
#include<string>
#include<valarray>
using namespace std;
typedef std::valarray<int> ArrayInt;
template<class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1 & first();
	T2 & second();
	T1 first() const {return a;}
	T2 second() const {return b;}
	Pair(const T1 & aval, const T2 & bval):a(aval),b(bval){}
	Pair() {};
};
template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
	return a;
}
template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
	return b;
}


typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine{
private:
	string name;
	PairArray info;
	int num;
public:
	Wine(const char * l, int y,const int yr[],const int bot[]);
	Wine(const char * l, int y);
	void GetBottles();
	void Show();
	string & Label();
	int sum();
};
