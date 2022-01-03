/*************************************************************************
	> File Name: 4.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 06:30:46 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	float height;
	char name[10];
	printf("请输入身高\n");
	scanf("%f",&height);
	printf("请输入姓名\n");
	scanf("%s",name);
	printf("%s, you are %4.3f feet tall\n",name,height);

}
