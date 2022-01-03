/*************************************************************************
	> File Name: 8.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 16 May 2021 08:31:20 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include <string.h>
#include<stdlib.h>
#define MAXNAME 20
#define SEAT 12
#define CONTINUE 0
#define DONE 1
struct seat {
	int number;
	bool booked;
	char first[MAXNAME];	
	char last[MAXNAME];
};
void menu(void);
char getlet(char *);
char * s_gets(char * , int);
int empty_number(struct seat *,int);
void show_empty(struct seat *,int);
void list_assign(struct seat *[],int);
void sort(struct seat *[],int);
void assign_seat(struct seat * , int);
void delete_seat(struct seat * , int);
int main(void)
{
	struct seat plane_1[SEAT],*ps[SEAT];
	char choice;
	FILE *fp;
	size_t size=sizeof(struct seat);
	for(int i=0;i<SEAT;i++)
	{
		ps[i]=&plane_1[i];
	}
	if((fp=fopen("air.dat","r+b"))==NULL)
		for(int i=0;i<SEAT;i++)
		{
			plane_1[i].booked=false;
			plane_1[i].number=i+1;
		}
	else
	{		
		fread(plane_1,size,SEAT,fp);
		fclose(fp);
	}
	menu();
	while((choice=getlet("abcdef"))!='f')
	{	
		switch(choice)
		{
			case 'a' : printf("There are %d empty seats.\n",
						   empty_number(plane_1,SEAT));
					   break;
			case 'b' :  if(empty_number(plane_1,SEAT)==0)
							puts("All seats are took.");
						else
						{	
							puts("Empty seats are:");
							for(int i=0;i<SEAT;i++)
							{
								if(plane_1[i].booked==false)
								printf("%d ",i+1);
							}
							printf("\n");
						}
						break;
			case 'c' : list_assign(ps,SEAT);
					   break;
			case 'd' : assign_seat(plane_1,SEAT);
					   break;
			case 'e' : delete_seat(plane_1,SEAT);
		}
		menu();
	}
	if(choice=='f')
	{
        if((fp=fopen("air.dat","w+b"))==NULL)
		{
			fputs("Can't open air.dat file for output\n'",stderr);
			exit(EXIT_FAILURE);
		}
		for(int i=0;i<SEAT;i++)
		{
			if(plane_1[i].booked==true)
				fwrite(&plane_1[i],size,1,fp);
		}
		puts("Thanks.Bye.");
		
	}
}
void menu(void)
{
	puts("To choose a function, enter its letter label:");
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");
}
char getlet(char *s)
{
	char ch=getchar();
	while(strchr(s,ch)==NULL)
	{
		printf("Enter a character in %s.\n",s);
		while(getchar()!='\n')
			continue;
		ch=getchar();
	}
	while(getchar()!='\n')
		continue;
	return ch;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   // look for newline
        if (find)                  // if the address is not NULL,
            *find = '\0';          // place a null character there
        else
            while (getchar() != '\n')
                continue;          // dispose of rest of line
    }
    return ret_val;
}
int empty_number(struct seat pb[],int n)
{
	int open=0;
	for(int i=0;i<n;i++)
	{
		if(pb[i].booked==false)
			open++;
	}
	return open;
}
void list_assign(struct seat *pb[],int n)
{
	if(empty_number(*pb,n)==SEAT)
		puts("All seats are empty.");
	else
	{
		sort(pb,n);
		for (int i=0;i<n;i++)
		{
			if(pb[i]->booked==true)
				printf("Seat %d: %s %s\n",
						pb[i]->number,pb[i]->first,
						pb[i]->last);
		}
	}
}
void sort(struct seat *ps[],int n)
{
	struct seat *temp;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i;j<n-1;j++)
		{
			if (strcmp(ps[i]->last,ps[j]->last)>0)
			{
				temp=ps[i];
				ps[i]=ps[j];
				ps[j]=temp;
			}
		}
	}
}
void assign_seat(struct seat *pb, int n)
{
	char choice;
	int status=DONE;
	char str[3*SEAT];
	char temp[SEAT];
	str[0]='\0';

	int num;
	if(empty_number(pb,n)==0)
		puts("All seats are taken.");
	else
	{
		puts("Which seat do you want to choose.");
		for(int i=0;i<n;i++)
		{
			if(pb[i].booked==false)
			{	sprintf(temp,"%d ",i+1);
				strcat(str,temp);
			}
		}
		printf("%s\n",str);
		do
		{
			while(scanf("%d",&num)!=1)
			{
				scanf("%*s");
				puts("Enter number from this list.");
				printf("%s\n",str);
			}
			if(num>SEAT||num<1||pb[num-1].booked==true)
			{
				puts("Enter number from this list.");
				printf("%s\n",str);
				status=CONTINUE;
			}
		}while(status==CONTINUE);
		while(getchar()!='\n')
			continue;
		puts("Enter first name");
		s_gets(pb[num-1].first,MAXNAME);
		puts("Enter last name");
		s_gets(pb[num-1].last,MAXNAME);
		printf("%d seat assigned to %s %s.\n",num,
				pb[num-1].first,pb[num-1].last);
		puts("Enter 'a' to accept this assignment,enter 'c' to cancel it");
		choice=getlet("ac");
		if(choice=='a')
		{
			pb[num-1].booked=true;
			puts("Passenger assigned");
		}
		else
			puts("Passenger not assigned");
	}

}
void delete_seat(struct seat pb[],int n)
{
	char choice;
	int status=DONE;
	char str[3*SEAT];
	char temp[SEAT];
	str[0]='\0';

	int num;
	if(empty_number(pb,n)==SEAT)
		puts("All seats are empty.");
	else
	{
		puts("Which seat do you want to delete.");
		for(int i=0;i<n;i++)
		{
			if(pb[i].booked==true)
			{	sprintf(temp,"%d ",i+1);
				strcat(str,temp);
			}
		}
		printf("%s\n",str);
		do
		{
			while(scanf("%d",&num)!=1)
			{
				scanf("%*s");
				puts("Enter number from this list.");
				printf("%s\n",str);
			}
			if(num>SEAT||num<1||pb[num-1].booked==false)
			{
				puts("Enter number from this list.");
				printf("%s\n",str);
				status=CONTINUE;
			}
		}while(status==CONTINUE);
		while(getchar()!='\n')
			continue;
		printf("Delete %s %s's %d seat.\n",
				pb[num-1].first,pb[num-1].last,num);
		puts("Enter 'd' to delete this assignment,enter 'c' to cancel it");
		choice=getlet("dc");
		if(choice=='d')
		{
			pb[num-1].booked=false;
			puts("Seat assignment deleted");
		}
		else
			puts("Seat assignment not deleted");
	}
	
}

