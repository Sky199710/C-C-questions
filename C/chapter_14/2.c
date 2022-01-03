/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 26 Mar 2021 07:18:16 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXNAME 10
struct month {
	char name[MAXNAME];
	char abbrev[3];
	int days;
	int num;
};
const struct month months[12] = {
	{"January","Jan",31,1},
	{"February","Feb",28,2},
	{"March","Mar",31,3},
	{"April","Apr",30,4},
	{"May","May",31,5},
	{"June","Jun",30,6},
	{"July","Jul",31,7},
	{"August","Aug",31,8},
	{"September","Sep",30,9},
	{"Octomber","Oct",31,10},
	{"November","Nov",30,11},
	{"December","Dec",31,12}
};
char*s_gets(char * , int);
void main()
{
	int day,mon,year;
	char ch;
	char input[10];
	int lenth=0;
	int mark;
	int ans=0;
	printf("请输入年： ");
	while(scanf("%d",&year)!=1)
	{
		printf("请输入正确的年份\n");
		while(getchar()!='\n')
			continue;
	}
	while(getchar()!='\n')
		continue;
	printf("请输入月： ");
	while(s_gets(input,10)!=NULL&input[0]!='\0')
	{
		lenth=strlen(input);
		if(isalpha(input[0]))
	    {
			input[0]=toupper(input[0]);
			for(int i=1;i<lenth;i++)
			input[i]=tolower(input[i]);
			if(lenth>3)
			{
				int i=0;
				while(strcmp(input,months[i].name))
				{
 		 			if(i==12)
						break;
					i++;
				}
				mark=i;
			}
			else
			{
 				int i=0;
				while(strcmp(input,months[i].abbrev))
				{
					if(i==12)
						break;
 					i++;
				}
				mark=i;
			}
		}
		else
		{
			if(lenth==1)
				mark=input[0]-49;
			else if(lenth==2)
				mark=(input[0]-48)*10+input[1]-49;
			else
				mark=12;
		}
		if(mark==12)
		{
			printf("请输入正确的月份\n");
			continue;
		}
		else
		{
			if(mark!=0)
			{
				for(int i=0;i<mark;i++)
					ans+=months[i].days;
			}
		}
		break;
	}
	printf("请输入日： ");
	while(scanf("%d",&day))
	{
		if(day<1|day>months[mark].days)
		{
		printf("请输入正确的日： ");
		continue;
		}
		break;
		
	}
	ans+=day;
	printf("%d年1月1日至%d月%d日共%d天\n",year,mark+1,day,ans);

}
char*s_gets(char str[], int n)
{
	char *find;
	char *verify;
	verify=fgets(str,n,stdin);
	if(verify)
	{
		find=strrchr(str,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
		return str;
	}
	else 
		return NULL;
}
