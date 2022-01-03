/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 04:45:11 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int num=0;
	char former;
	char later=' ';
	printf("请输入：\n");
	while((former=getchar())!='#')
	{
		if (former=='i'&&later=='e')
			num++;
		later=former;
	}
	printf("‘ei’共出现了%d次\n",num);
}
