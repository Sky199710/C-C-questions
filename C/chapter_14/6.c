/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 28 Mar 2021 08:09:27 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ball{
	int id;
	char first[10];
	char last[10];
	int times;
	int hits;
	int runs;
	int rbi;
	float rate;
};
int read_datas(struct ball  [],int ,FILE *);
void hit_rate(struct ball  [],int);
void show_messages(struct ball  [],int);
void main()
{	int n=0;
	struct ball members[19];
	for(int i=0;i<19;i++)
	{
		members[i].id=0;
		members[i].first[0]='\0';
		members[i].last[0]='\0';
		members[i].times=0;
		members[i].hits=0;
		members[i].runs=0;
		members[i].rbi=0;
		members[i].rate=0;
	}
	FILE * pmembers;
	if((pmembers=fopen("data.dat","r"))==NULL)
	{
		fputs("Can't open data.dat file\n'",stderr);
		exit(1);

	}
	else{
		n=read_datas(members,19,pmembers);
		hit_rate(members,n);
		show_messages(members,n);

	}
	
}
int read_datas(struct ball  members[],int n,FILE * fp)
{
	 int count=0;
	 int ch=0;
	 int num,times,hits,runs,rbi;
	 char first[10];
	 char last[10];
	 count=fscanf(fp,"%d %10s %10s %d %d %d %d",&num,first,last,
			 &times,&hits,&runs,&rbi);
	while(count==7&!feof(fp)&ch<n)
	{
		if(members[num-1].id==0)
			ch++;
		strcpy(members[num-1].first,first);
		strcpy(members[num-1].last,last);
		members[num-1].times+=times;
		members[num-1].hits+=hits;
		members[num-1].runs+=runs;
		members[num-1].rbi+=rbi;
		members[num-1].id=num;
	 count=fscanf(fp,"%d %10s %10s %d %d %d %d",&num,first,last,
			 &times,&hits,&runs,&rbi);
	}
	return ch;
}
void hit_rate(struct ball members[],int n)
{
	if(n>0)
	{
		for(int i=0;i<n;i++)
		{	
			members[i].rate=(1.0*members[i].hits)/(1.0*members[i].times);
		}
	}
}
void show_messages(struct ball members[],int n)
{
	if(n==0)
		printf("无数据！\n");
	else
	{
		for(int i=0;i<n;i++)
		{
			printf("%d %s %s %d %d %d %d %f\n",i+1,members[i].first,
					members[i].last,members[i].times,
					members[i].hits,members[i].runs,
					members[i].rbi,members[i].rate);	
		}
	}
}
