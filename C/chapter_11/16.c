/*************************************************************************
	> File Name: 16.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 09 Dec 2020 07:52:52 PM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
	int ch;
	while ((ch=getchar())!=EOF)
	{
		if(argc<2)
			putchar(ch);
		else 
		{
			switch(argv[1][1])
			{
				case 'p' : putchar(ch);
						   break;
				case 'u' : putchar(toupper(ch));
						   break;
				case 'l' : putchar(tolower(ch));

			}
		}
	}
}
