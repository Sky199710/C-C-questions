/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 23 Jun 2021 06:33:29 AM PDT
 ************************************************************************/

#include<stdio.h>
int inlist(int *,int,int);
void main()
{
	int exm[10]={1,2,9,10,15,17,20,35,50,100};
	int length=10;
	int find;
	int ans;
	printf("Please enter the number.\n");
	while((scanf("%d",&find))==1)
	{
		while(getchar()!='\n')
			continue;
		ans=inlist(exm,length,find);
		if(ans==1)
			printf("The number is in the list.\n");
		else if(ans==0)
			printf("The number is not in the list.\n");
		else
			printf("Error");
		printf("Please enter the number.");
	}
	puts("Bye.");
}
int inlist(int list[],int length,int find)
{
	int middle;
	int head=0;
	int end=length-1;
	int found=0;
	while(head<end)
	{
		middle=(head+end)/2;
		if(find<list[middle])
			end=middle-1;
		else if(find>list[middle])
			head=middle+1;
		else
		{
			found=1;
			break;
		}
	}
	if(find==list[head])
		found=1;
		return found;
}
