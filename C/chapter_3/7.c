/*************************************************************************
	> File Name: 7.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 04:31:43 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int height;
	float shengao;
	printf("请输入您的身高(cm)：\n");
	scanf("%d",&height);
	shengao = height/2.54;
	printf("您的身高为%fcm\n",shengao);
}
