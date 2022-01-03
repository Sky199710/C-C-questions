/*************************************************************************
	> File Name: 5.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 04:36:21 AM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
T maxn(T *,const int);

template<>  char *maxn(  char **, const int ); 
int main()
{
	int int_array[6]={5,9,3,7,8,1};
	int max1;
	double double_array[4]={1.32,85.63,2.78945,235.523};
	double max2;
	char * pointer[5];
	pointer[0]="Hello";
	pointer[1]="world";
	pointer[2]="what's";
	pointer[3]="your";
	pointer[4]="plan";
	char * max3;
	max1=maxn(int_array,6);
	max2=maxn(double_array,4);
	max3=maxn(pointer,5);
	cout<<"max1="<<max1<<" "<<"max2="<<max2<<endl;
	cout<<"max3="<<max3<<endl;

}
template<typename T>
T maxn(T * array,const int n)
{
	T max=array[0];
	for(int i=1;i<n;i++)
	{
		if(max<array[i])
			max=array[i];
	}
	return max;
}
template<> char * maxn( char * p[], const int n )
{
	char * pmax=p[0];
	for(int i=1;i<n;i++)
	{
		if(std::strlen(pmax)<std::strlen(p[i]))
			pmax=p[i];
	}
	return pmax;
}


