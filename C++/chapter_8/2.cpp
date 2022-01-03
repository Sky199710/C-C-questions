/*************************************************************************
	> File Name: 2.cpp
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 06 Jul 2021 12:45:22 AM PDT
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stdlib.h>
#define MAXNAME 20
using namespace std;
struct CandyBar
{
	char name[MAXNAME];
	double weight;
	int heat;
};
CandyBar & AddCandy(CandyBar & candy,char * name ="Millennium Munch",double weight=2.85,int heat=350)
{
	std::strcpy(candy.name,name);
	candy.weight=weight;
	candy.heat=heat;
}
void show_candy(const CandyBar & candy)
{
	cout<<candy.name<<": ";
	cout<<candy.weight<<"kg ";
	cout<<candy.heat<<"k."<<endl;
}
int main()
{
	char name[MAXNAME];
	double weight;
	int heat;
	CandyBar candy1,candy2;
	cout<<"Enter candy's name: ";
	cin.get(name,MAXNAME);
	cout<<"Enter candy's weight: ";
	cin>>weight;
	cout<<"Enter candy's heat: ";
	cin>>heat;
	AddCandy(candy1,name,weight,heat);
	AddCandy(candy2);
	show_candy(candy1);
	show_candy(candy2);

}
