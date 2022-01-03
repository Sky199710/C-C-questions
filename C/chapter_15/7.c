/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 17 Jun 2021 01:55:32 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define UNDERLINE 0x1
#define ITALIC 0x2
#define BOLD 0x4
#define ALIGN_RIGHT 0
#define ALIGN_CENTER 0x10
#define ALIGN_LEFT 0x20
#define ALIGN_MASK 0x30
#define SIZE_MASK 0x7F00
#define ID_MASK 0xFF0000

void show_settings(unsigned long);
char getlet(char *);
unsigned long btoi(char * );
int main(void)
{	
	int num;
	char ch,sh;
	char bin_str[]="00000000000000010000110000100000";
	unsigned long set;
	set=btoi(bin_str);
	show_settings(set);
	while((ch=getlet("fsabiuq"))!='q')
	{
		switch(ch)
		{
			case 'f':puts("Enter font ID(0-255):");
				   while(scanf("%d",&num)!=1||num<0||num>255)
				   {
						puts("Please input correct font ID(0-255)");
						while(getchar()!='\n')
							continue;
				   }
				   set&=~ID_MASK;
				   set|=(num<<16);
					while(getchar()!='\n')
						continue;
				   break;
			case 's':puts("Enter font size(0-127):");
				   while(scanf("%d",&num)!=1||num<0||num>127)
				   {
						puts("Please 0input correct font size(0-127)");
						while(getchar()!='\n')
							continue;
				   }
				   set&=~SIZE_MASK;
				   set|=(num<<8);
				   while(getchar()!='\n')
					   continue;
				   break;
			case 'a':puts("Select alignment:");
				   puts("l)left   c)center   r)right");
				   set&=~ALIGN_MASK;
				   sh=getlet("lcr");
				   switch(sh)
				   {
					   case'l':set|=ALIGN_LEFT;break;
					   case'c':set|=ALIGN_CENTER;break;
					   case'r':set|=ALIGN_RIGHT;break;
				   }
				   break;
			case'b':set^=BOLD;break;
			case'i':set^=ITALIC;break;
			case'u':set^=UNDERLINE;break;
		}
		show_settings(set);
	}
}
void show_settings(unsigned long ul)
{
	puts("ID SIZE ALIGNMENT	 B   I   U");
	printf("%ld  %ld  ",(ul>>16)&0xFF,(ul>>8)&0x7F);
	switch(ul&ALIGN_MASK)
	{
		case ALIGN_LEFT:printf("left		");break;
		case ALIGN_CENTER:printf("middle		 ");break;
		case ALIGN_RIGHT:printf("right		 ");break;
	}
	printf("%s ",
		(ul&BOLD)==BOLD?"on":"off");
	printf("%s ",
		(ul&ITALIC)==ITALIC?"on":"off");
	printf("%s ",
		(ul&UNDERLINE)==UNDERLINE?"on":"off");
	puts("");
	printf("f)change font   s)change size   a)change alignment\n");
	printf("b)toggle bold   i)toggle italic u)toggle underline\n");
	printf("q)quit\n");
}
char getlet(char *s)
{	char ch=getchar();
	while(strchr(s,ch)==NULL)
	{
		printf("Enter a character in %s.\n",s);
		if(ch=='\n')
		{
			ch=getchar();
			continue;
		}
		while(getchar()!='\n')
			continue;
		ch=getchar();
	}
	while(getchar()!='\n')
		continue;
	return ch;
}
unsigned long btoi(char * p)
{
	int n;
	unsigned long ans=0;
	n=strlen(p);
	for(int i=n-2;i>-1;i--)
	{
		ans=ans+(p[i]-'0')*pow(2,n-1-i);
	}
	if(p[n-1]=='1')
		ans++;
		return ans;
}
