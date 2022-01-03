/* booksave.c -- saves structure contents in a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#define MAXTITL  40
#define MAXAUTL  40
#define MAXBKS   10             /* maximum number of books */
#define CONTINUE 0
#define DONE 1
char * s_gets(char * st, int n);
struct book {                   /* set up book template    */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
struct pack{
	struct book book;
	bool delete_me;
};
char getlet(char * );
int getbook(struct pack *);
void update(struct pack *);

int main(void)
{
    struct pack library[MAXBKS]; /* array of structures     */
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);
    int deleted = 0;
	int open;

	for(int i=0;i<MAXBKS;i++)
	{
		library[i].delete_me=false;
	}
    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("Can't open book.dat file\n",stderr);
        exit(1);
    }
    
    rewind(pbooks);            /* go to start of file     */
    while (count < MAXBKS &&  fread(&library[count], size,
                                    1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n",library[count].book.title,
               library[count].book.author, library[count].book.value);
		puts("Do you want to delete or modify this entry? (y/n): ");
		if(getlet("yn")=='y')
		{
			puts("Enter 'm' for modify, 'd' for delete");
			if(getlet("md")=='d')
			{
				library[count].delete_me=true;
				deleted++;
				puts("Entry is deleted");
			}
			else
				update(&library[count]);
		}
        count++;
    }
    filecount = count-deleted;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
	open=0;
	while(filecount<MAXBKS)
	{
		if(filecount<count)
		{
			while(library[open].delete_me==false)
				open++;
			if(getbook(&(library[open]))==DONE)
				break;
		}
		else if ((getbook(&library[filecount]))==DONE)
			break;
			filecount++;
		puts("Now add a new book");
	}
    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < filecount;index++)
		{
			if(library[index].delete_me==false)
				printf("%s by %s: $%.2f\n",library[index].book.title,
                   library[index].book.author, library[index].book.value);
		}
        if((pbooks=fopen("book.dat","w"))==NULL)
		{
			fputs("Can't open book.dat file for output\n'",stderr);
			exit(EXIT_FAILURE);
		}
		for(int i=0;i<filecount;i++)
		{
			if(library[i].delete_me==false)
			fwrite(&library[i].book,size,1,pbooks);
		}
		puts("Done!");

    }
    else
    	puts("No books? Too bad.\n");
    
    puts("Bye.\n");
    fclose(pbooks);
    
    return 0;
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
void update(struct pack * item)
{
	struct book copy;
	char ch;
	copy = item->book;
	puts("Enter the letter that indicates your choice:");
	puts("t) modify title       a) modify author");
	puts("v) modify value       s) quit, saving changes");
	puts("q) quit, ignore changes");
	while((ch=getlet("tavsq"))!='s' & ch!='q')
	{
		switch(ch)
		{
			case 't':puts("Enter new title");
					 s_gets(copy.title,MAXTITL);
					 break;
			
			case 'a':puts("Enter new author");
					 s_gets(copy.author,MAXAUTL);
					 break;
			case 'v':puts("Enter new value");
					 while(scanf("%f",&copy.value)!=1)
					 {
						puts("Enter a numerical value:");
						scanf("%*s");
					 }
					 while(getchar()!='\n')
						 continue;
					 break;
		}
		puts("t) modify title       a) modify title");
		puts("v) modify value       s) quit, saving changes");
		puts("q) quit, ignore changes");
	}
	if(ch=='s')
		item->book=copy;
}
int getbook(struct pack *pb)
{
	int status = CONTINUE;
	if(s_gets(pb->book.title,MAXTITL)==NULL||pb->book.title[0]=='\0')
	{
		status = DONE;
	}
	else
	{	
        puts("Now enter the author.");
        s_gets(pb->book.author, MAXAUTL);
        puts("Now enter the value.");
		while(scanf("%f",&pb->book.value)!=1)
		{
			puts("Enter a numerical value:");
			scanf("%*s");
		}
		while(getchar()!='\n')
			continue;
		pb->delete_me=false;
	}
	return status;
}
