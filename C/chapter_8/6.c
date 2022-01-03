/*************************************************************************
	> File Name: 7.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 30 Nov 2020 04:28:17 AM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
char get_first(void)
{
    int ch; 
	while(isspace(ch=getchar()))
		continue;
    while (getchar() != '\n')
        continue;
    
    return ch;
}
int main()
{
	char ch;
	printf("请输入字符： \n");
	ch=get_first();
	printf("第一个字符为%c",ch);
	printf("\n");
}
