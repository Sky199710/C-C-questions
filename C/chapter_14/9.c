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
#define FLIGHT 4
#define CONTINUE 0
#define DONE 1
struct seat {
	int number;
	bool booked;
	char first[MAXNAME];	
	char last[MAXNAME];
	int flight;
};
void menu(void);
char getlet(char *);
char * s_gets(char * , int);
int empty_number(struct seat *,int);
void show_empty(struct seat *,int);
void list_assign(struct seat *[],int,int);
void sort(struct seat *[],int);
void assign_seat(struct seat * , int,int);
void delete_seat(struct seat * , int,int);
void top_menu(void);
int main(void)
{
	struct seat plane_1[FLIGHT][SEAT],*ps[FLIGHT][SEAT];
	char choice,first_choice;
	int flight;
	int No[4] = {102,311,444,519};
	FILE *fp;
	size_t size=sizeof(struct seat);
	for(int j=0;j<FLIGHT;j++)
	{
		for(int i=0;i<SEAT;i++)
		{
			ps[j][i]=&plane_1[j][i];
		}
	}
	if((fp=fopen("flight.dat","r+b"))==NULL)
		for(int j=0;j<FLIGHT;j++)
		{
			for(int i=0;i<SEAT;i++)
			{
				plane_1[j][i].booked=false;
				plane_1[j][i].number=i+1;
				plane_1[j][i].flight=No[j];
			}
		}
	else
	{		
		for(int i=0;i<FLIGHT;i++)
		{
			fread(plane_1[i],size,SEAT,fp);
		}
		fclose(fp);
	}
	top_menu();
	while((first_choice=getlet("abcde"))!='e')
	{
		//printf("%c\n",first_choice);
		switch(first_choice)
		{
			case 'a': flight=0;
					  break;
			case 'b': flight=1;
					  break;
			case 'c': flight=2;
					  break;
			case 'd': flight=3;
					  break;
		}
		//printf("%d\n",No[flight]);
		menu();
		while((choice=getlet("abcdef"))!='f')
		{	
			switch(choice)
			{
				case 'a' :  printf("There are %d empty seats in flight %d.\n",
							empty_number(plane_1[flight],SEAT),No[flight]);
							break;
				case 'b' :  if(empty_number(plane_1[flight],SEAT)==0)
								printf("All seats are took in flight %d.\n",
										No[flight]);
							else
							{	
								puts("Empty seats are:");
								for(int i=0;i<SEAT;i++)
								{
									if(plane_1[flight][i].booked==false)
									printf("%d ",i+1);
								}
								printf("in flight %d\n",No[flight]);
							}
							break;
				case 'c' :  list_assign(ps[flight],SEAT,No[flight]);
							for(int i=0;i<SEAT;i++)
							{
								ps[flight][i]=&plane_1[flight][i];
							}
							break;
				case 'd' : assign_seat(plane_1[flight],SEAT,No[flight]);
							break;
				case 'e' : delete_seat(plane_1[flight],SEAT,No[flight]);
			}
			menu();
		}
		if(choice=='f')
			top_menu();
	}
	if(first_choice=='e')
	{
		if((fp=fopen("flight.dat","wb"))==NULL)
		{
			fputs("Can't open flight.dat file for output\n'",stderr);
			exit(EXIT_FAILURE);
		}
		for(int j=0;j<FLIGHT;j++)
		{
			for(int i=0;i<SEAT;i++)
			{
				fwrite(&plane_1[j][i],size,1,fp);
			}
		}
	}
	fclose(fp);		
	puts("Thanks.Bye.");        
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
void list_assign(struct seat *pb[],int n,int flight)
{
	int num;
	num=empty_number(*pb,n);
	printf("%d\n",num);
	if(empty_number(*pb,n)==SEAT)
		printf("All seats are empty in flight %d\n.",flight);
	else
	{
		sort(pb,n);
		printf("Flight %d:\n",flight);
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
void assign_seat(struct seat *pb, int n,int flight)
{
	char choice;
	int status=DONE;
	char str[3*SEAT];
	char temp[SEAT];
	str[0]='\0';

	int num;
	if(empty_number(pb,n)==0)
		printf("All seats are taken in flight %d\n.",flight);
	else
	{
		printf("Which seat do you want to choose in flight %d.\n",flight);
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
		printf("%d seat assigned to %s %s in flight %d.\n",num,
				pb[num-1].first,pb[num-1].last,flight);
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
void delete_seat(struct seat pb[],int n,int flight)
{
	char choice;
	int status=DONE;
	char str[3*SEAT];
	char temp[SEAT];
	str[0]='\0';

	int num;
	if(empty_number(pb,n)==SEAT)
		printf("All seats are empty in flight %d.\n",flight);
	else
	{
		printf("Which seat do you want to delete in flight %d.",flight);
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
		printf("Delete %s %s's %d seat in flight %d.\n",
				pb[num-1].first,pb[num-1].last,num,flight);
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
void top_menu(void)
{
	puts("Please choose the flight.");
	puts("a) flight 102           b) flight 311");
	puts("c) flight 444           d) flight 519");
	puts("e) quit");
}
