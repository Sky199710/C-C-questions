/*************************************************************************
	> File Name: 11.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 11:13:51 PM PST
 ************************************************************************/

#include<stdio.h>
void manu()
{
	printf("售价表\na)洋蓟:2.05$/pound\tb)甜菜：1.15$/pound\nc)胡萝卜：1.09$/pound\tq)退出\n");
}
int main()
{	
	char i;
	float price,weight,money,package,ans;
	float off=0;
	float weight_a=0;
	float weight_b=0;
	float weight_c=0;
	float weight_sum=0;
	manu();
	while ((i=getchar())!='q')
	{
		if (i=='\n')
			continue;
		printf("请输入重量： \n");
		scanf("%f",&weight);
		switch(i)
		{
			case 'a' : weight_a+=weight;
					 break;
			case 'b' : weight_b+=weight;
					 break;
			case 'c' : weight_c+=weight;
					 break;
		}
		manu();
		printf("请选择\n");
	}

	weight_sum=weight_a+weight_b+weight_c;
	money=weight_a*2.05+weight_b*1.15+weight_c*1.09;
	if(money>=100)
		off=money*0.05;
	if(weight_sum<=5)
		package=6.5;
	else if(weight_sum<=20)
		package=14;
	else
		package=14+(weight_sum-20)*0.5;
	ans=money-off+package;
	printf("您共订购了%f磅洋蓟,%f磅甜菜,%f磅胡萝卜\n"
			"货物总价为%f$,折扣为%f$,运费和包装费为%f$"
			"所有费用的总额为%f\n谢谢惠顾！\n",weight_a,weight_b,weight_c,money,off,package,ans);

}
