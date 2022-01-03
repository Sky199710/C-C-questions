/*************************************************************************
	> File Name: pel2-2a.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 12:41:33 AM PST
 ************************************************************************/

#include<stdio.h>
int set_mode(int);
void get_info(int,double[],double[]);
void show_info(int,double,double);
int  set_mode(int n)
{
	if(n!=1&&n!=0)
	{
		printf("Invalid mode specified. Mode 1(US) used.\n");
		return 1;
	}
	else
		return n;
}
void get_info(int mode,double * distance,double * fuel)
{
	if(mode==0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf",distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf",fuel);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%lf",distance);
		printf("Enter fuel consumed in gallons: ");
		scanf("%lf",fuel);
	}
}
void show_info(int mode,double distance,double fuel)
{
	double ans;
	if(mode==0)
	{
		ans=fuel/distance*100;
		printf("Fuel consumption is %.2lf liters per 100 km.\n",ans);
	}
	else
	{
		ans=distance/fuel;
		printf("Fuel consumption is %.1lf miles per gallon.\n",ans);
	}

}
