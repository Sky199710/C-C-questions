/* manybook.c -- multiple book inventory */
#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL   40
#define MAXAUTL   40
#define MAXBKS   100              /* maximum number of books  */

struct book {                     /* set up book template     */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void sortt(struct book * pb[],int n);
void sortv(struct book * pb[],int n);

int main(void)
{
    struct book library[MAXBKS]; /* array of book structures */
    int count = 0;
    int index;
    struct book * pbooks[MAXBKS];
    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count].value);
        while (getchar() != '\n')
            continue;          /* clear input line         */
		pbooks[count]=&library[count];
		count++;
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    
    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        printf("Here is the list of your books(alphabetically):\n");
		sortt(pbooks,count);
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", pbooks[index]->title,
                   pbooks[index]->author, pbooks[index]->value);
        printf("Here is the list of your books(price):\n");
		sortv(pbooks,count);
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", pbooks[index]->title,
                   pbooks[index]->author, pbooks[index]->value);

    }
    else
    	printf("No books? Too bad.\n");
    
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
void sortt(struct book * pb[],int n)
{	
	struct book * temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(pb[i]->title[0]>pb[j]->title[0])
			{
				temp=pb[j];
				pb[j]=pb[i];
				pb[i]=temp;
			}
		}
	}
}
void sortv(struct book * pb[],int n)
{
	struct book * temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(pb[i]->value>pb[j]->value)
			{
				temp=pb[j];
				pb[j]=pb[i];
				pb[i]=temp;
			}
		}
	}

}
