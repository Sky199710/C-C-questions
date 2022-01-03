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
#define plus 1.5
#define basic_hours 40
#define basic_money 300
#define secondery_money 150
#define third_money 150
#define work1 8.75
#define work2 9.33
#define work3 10.00
#define work4 11.20
void manu()
{
	printf("*****************************************************************\n\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr\t2) $9.33/hr\t\n3) $10.00/hr\t4) $11.20/hr\n5) quit\n");
	printf("*****************************************************************\n\n");
}
void check(int i)
{
	while(i<1||i>5)
	{
		printf("请输入正确地选项\n");
		manu();
		scanf("%d",&i);
	}
}

int main()
{
	float hours,money,rate,remain,salary;
	int i;
	manu();
	scanf("%d",&i);
	while(i!=5)
	{	
		check(i);
		if(i>=1&&i<=4)
		{
			switch(i)
			{
				case 1 : salary=work1;
						break;
				case 2 : salary=work2;
						break;
				case 3 : salary=work3;
						break;
				case 4 : salary=work4;
			}	
		}
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
		printf("工资总额为%f,税金为%f,净收入为%f\n\n",money,rate,remain);
		manu();
		scanf("%d",&i);
	}
	printf("bye\n");


}	
