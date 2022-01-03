/*************************************************************************
	> File Name: 10.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 10:56:13 PM PST
 ************************************************************************/

#include<stdio.h>
#define rate1 17850
#define rate2 23900
#define rate3 29750
#define rate4 14875
void manu()
{
	printf("请输入纳税人类别：\n");
	printf("1.单身\t\t2.户主\n3.已婚，共有\t4.已婚，离异\n");
}
int choose(int i)
{
	int rate;
	switch(i)
	{
		case 1 : rate=rate1;
				 break;
		case 2 : rate=rate2;
				 break;
		case 3 : rate=rate3;
				 break;
		case 4 : rate=rate4;
				 break;
	}
	return rate;
}
int main()
{
	int i,rate;
	float money,give;
	manu();
	while (scanf("%d",&i))
	{
		rate=choose(i);
		printf("请输入应纳税收入： \n");
		scanf("%f",&money);
		if (money>rate)
			give=rate*0.15+(money-rate)*0.28;
		else
			give=money*0.15;
		printf("税金为%f\n",give);
		manu();
	}
}
