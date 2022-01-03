/*************************************************************************
	> File Name: 5.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 04:36:21 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;
template<typename T>
T max5(T *);
int main()
{
	int int_array[5]={5,9,3,7,8};
	int max1;
	double double_array[5]={1.32,85.63,2.78945,236.256,9.321456};
	double max2;
	max1=max5(int_array);
	max2=max5(double_array);
	cout<<"max1="<<max1<<" "<<"max2="<<max2<<endl;

}
template<typename T>
T max5(T * array)
{
	T max=array[0];
	for(int i=1;i<5;i++)
	{
		if(max<array[i])
			max=array[i];
	}
	return max;
}
