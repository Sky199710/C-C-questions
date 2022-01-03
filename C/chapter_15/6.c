/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 17 Jun 2021 01:55:32 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define LEFT 0
#define MIDDLE 1
#define RIGHT 2
struct font_set{
	unsigned int id:8;
	unsigned int size:7;
	unsigned int :1;
	unsigned int alignment:2;
	bool bold:1;
	bool italic:1;
	bool underline:1;
	unsigned int :3;
};
void show_settings(const struct font_set *pb);
char getlet(char *);
int main(void)
{	
	char ch,sh;
	int num;
	struct font_set set ={1,12,LEFT,false,false,false};
	show_settings(&set);
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
				   set.id=num;
					while(getchar()!='\n')
						continue;
				   break;
			case 's':puts("Enter font size(0-127):");
				   while(scanf("%d",&num)!=1||num<0||num>127)
				   {
						puts("Please input correct font size(0-127)");
						while(getchar()!='\n')
							continue;
				   }
				   set.size=num;
				   while(getchar()!='\n')
					   continue;
				   break;
			case 'a':puts("Select alignment:");
				   puts("l)left   c)center   r)right");
				   sh=getlet("lcr");
				   switch(sh)
				   {
					   case'l':set.alignment=LEFT;break;
					   case'c':set.alignment=MIDDLE;break;
					   case'r':set.alignment=RIGHT;break;
				   }
				   break;
			case'b':set.bold=(!set.bold);break;
			case'i':set.italic=(!set.italic);break;
			case'u':set.underline=(!set.underline);break;
		}
		show_settings(&set);
	}
}
void show_settings(const struct font_set *pb)
{
	puts("ID SIZE ALIGNMENT	 B   I   U");
	printf("%d  %d  ",pb->id,pb->size);
	switch(pb->alignment)
	{
		case LEFT :printf("left		");break;
		case MIDDLE:printf("middle		 ");break;
		case RIGHT:printf("right		 ");break;
	}
	printf("%s ",
		(pb->bold)==true?"on":"off");
	printf("%s ",
		(pb->italic)==true?"on":"off");
	printf("%s ",
		(pb->underline)==true?"on":"off");
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
