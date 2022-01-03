/*************************************************************************
	> File Name: 13.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 09 Dec 2020 07:12:04 PM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	double de;
	double ans=1;
	int zhi;
	de=atof(argv[1]);
	zhi=atoi(argv[2]);
	for(int i=0;i<zhi;i++)
		ans*=de;
	printf("%g\n",ans);

}
