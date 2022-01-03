/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 26 Mar 2021 02:48:50 AM PDT
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
char*s_gets(char str[], int n);
void main()
{	
	char input[40];
	printf("请输入月份号： ");
	while(s_gets(input,40)!=NULL&input[0]!='\0')
	{	
		for (int i=0;i<strlen(input);i++)
		{
			if (i==0)
				input[i]=toupper(input[i]);
			else
				input[i]=tolower(input[i]);
		}
	    int i=0;
	    int ans=0;
		while(strcmp(input,months[i].abbrev))
		{
			i++;
			if(i==12)
				break;
		}
		if(i==12)
		{
			printf("没有该月份\n");
	        printf("请输入月份号： ");
			continue;
		}
		else
		{
			for(int j=0;j<=i;j++)
			ans+=months[j].days;
	        printf("%d\n",ans);
		}
	
	printf("请输入月份号： ");
	}
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
