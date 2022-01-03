/*************************************************************************
	> File Name: pel2-2b.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 12:30:21 AM PST
 ************************************************************************/
//pel2-2b.c
//与pel2-2a.c一起编译
#include<stdio.h>
#include"pel2-2a.h"
int main(void)
{
	int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while (mode>=0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 ofr metric mode, 1 for US mode");
		printf(" (-1 to quit) ");
		scanf("%d",&mode);
	}
	printf("Done.\n");
	return 0;
}

