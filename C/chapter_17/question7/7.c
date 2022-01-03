/*************************************************************************
	> File Name: 7.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 23 Jun 2021 07:17:10 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"tree.h"
void show_menu(void);
void show_words(Tree *);
void find_words(Tree *);
void printitem(Item item);
char * s_gets(char * st, int n);
int main(int argc,char *argv[])
{
	Tree wordcount;
	Item temp;
	char word[SLEN];
	FILE *file;
	char choice;
	if(argc<2)
	{
		fprintf(stderr,"Usage:%s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if((file=fopen(argv[1],"r"))==NULL)
	{
		fprintf(stderr,"I couldn't open the file \"%s\"\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	InitializeTree(&wordcount);
	while(fscanf(file,"%s",word)==1&&!TreeIsFull(&wordcount))
	{
		strcpy(temp.word,word);
		AddItem(&temp,&wordcount);
	}
	show_menu();
	while((choice=getchar())!='q')
	{
		while(getchar()!='\n')
			continue;
		if (choice!='a'&&choice!='b')
		{
			puts("please enter from 'abq'.");
			continue;
		}
		if(choice=='a')
			show_words(&wordcount);
		else
			find_words(&wordcount);
		show_menu();
	}
	fclose(file);

}
void show_menu(void)
{
	puts("a) show word list      b)find a word");
	puts("q) quit");
}
void show_words(Tree * pt)
{
	if(TreeIsEmpty(pt))
		puts("No words!");
	else
		Traverse(pt,printitem);
}
void printitem(Item item)
{
	printf("Word: %-19s Counts:%d\n",item.word,item.times);
}
void find_words(Tree * pt)
{
	Item temp;
	if(TreeIsEmpty(pt))
	{
		puts("No words!");
		return;
	}
	puts("Please enter word you wish to find");
	s_gets(temp.word,SLEN);
	printf("%s appear %d times.\n",temp.word,AppearTimes(&temp,pt));
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
