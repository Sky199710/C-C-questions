/*************************************************************************
	> File Name: 7.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 06:39:11 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	float miles;
	float galoons;
	float l;
	float km;
	float b1,b2;
	const float a1=3.785;
	const float a2=1.609;
	printf("请输入行驶的英里数：\n");
	scanf("%f",&miles);
	printf("请输入消耗的汽油量（加仑）： \n");
	scanf("%f",&galoons);
	b1=miles/galoons;
	printf("消耗每加仑汽油行驶的英里数为：\.%f\n",b1);
	km=miles*a2;
	l=galoons*a1;
	b2=l/km*100;
	printf("每100km的升数为：\.%f\n",b2);



}
