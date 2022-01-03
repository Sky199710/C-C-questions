/*************************************************************************
	> File Name: 5.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 28 Mar 2021 05:49:02 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define LEN 20
#define CSIZE 4
struct name{
	char first[LEN];
	char last[LEN];
};
struct student{
	struct name handle;
	float grade[3];
	float average;
};
char*s_gets(char *,int);
void getgrades(struct student * stu)
{
	printf("请输入%s %s的分数：  ",stu->handle.first,
			stu->handle.last);
	for(int i=0;i<3;i++)
	{
		scanf("%f",&(stu->grade[i]));
		while(getchar()!='\n')
			continue;
	}
}
void calculate(struct student * stu)
{
	float aver=0;
	for(int i=0;i<3;i++)
	{
		aver+=stu->grade[i];
	}
	aver=aver/3;
	stu->average=aver;
}
void showinfo(struct student *stu[])
{
	for(int i=0;i<4;i++)
	{
		printf("%s %s的分数为%f %f %f,平均分为%f\n",
				stu[i]->handle.first,stu[i]->handle.last,
				stu[i]->grade[0],stu[i]->grade[1],
				stu[i]->grade[2],stu[i]->average);
	}
}
void showaver(struct student *stu[])
{
	float aver=0;
	for(int i=0;i<4;i++)
	{
		aver+=stu[i]->average;
	}
	aver=aver/4;
	printf("班级平均分为 %f\n",aver);
}


void main()
{
	struct student students[CSIZE] = {
		{.handle={"Harry","Potter"}},
		{.handle={"Ron","Wei"}},
		{.handle={"Hemin","Ge"}},
		{.handle={"Navy","Lon"}}
	};
	struct student * pstu[CSIZE];
	for(int i=0;i<4;i++)
		pstu[i]=&students[i];
	for(int i=0;i<4;i++)
		getgrades(&students[i]);
	for(int i=0;i<4;i++)
		calculate(&students[i]);
	showinfo(pstu);
	showaver(pstu);
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
