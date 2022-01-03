/*************************************************************************
	> File Name: pel2-2b.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 12:30:21 AM PST
 ************************************************************************/
//3b.c
//与3a.c一起编译
#include<stdio.h>
#include"3a.h"
int main(void)
{
	int mode;
	double distance;
	double fuel;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while (mode>=0)
	{
		mode=set_mode(mode);
		get_info(mode,&distance,&fuel);
		show_info(mode,distance,fuel);
		printf("Enter 0 ofr metric mode, 1 for US mode");
		printf(" (-1 to quit) ");
		scanf("%d",&mode);
	}
	printf("Done.\n");
	return 0;
}

