/*************************************************************************
	> File Name: 7.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 05:00:10 AM PST
 ************************************************************************/

#include<stdio.h>
#define rate_1 0.15
#define rate_2 0.20
#define rate_3 0.25
#define salary 1000
#define plus 1.5
#define basic_hours 40
#define basic_money 300
#define secondery_money 150
#define third_money 150
int main()
{
	float hours,money,rate,remain;
	printf("请输入工作小时数：\n");
	scanf("%f",&hours);
	if (hours<=basic_hours)
		money=salary*hours;
	else
		money=salary*basic_hours+(hours-basic_hours)*plus*salary;
	if (money<=basic_money)
		rate=rate_1*money;
	else if (money<=basic_money+secondery_money)
		rate=basic_money*rate_1+(money-basic_money)*rate_2;
	else
		rate=basic_money*rate_1+secondery_money*rate_2+(money-basic_money-secondery_money)*rate_3;
	remain=money-rate;
	printf("工资总额为%f,税金为%f,净收入为%f\n",money,rate,remain);


}	
