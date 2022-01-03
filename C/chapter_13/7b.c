/* append.c -- appends files to a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
void append(FILE *source, FILE *dest);
char * s_gets(char * st, int n);

int main(int argc, char*argv[])
{
    FILE *f1, *f2;	// fa for append file, fs for source file
    char file_1[SLEN];  // name of append file
    char file_2[SLEN];  // name of source file
    int ch1,ch2;
    if (argc!=3)
	{
		printf("Usaget: %s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
    if ((f1 = fopen(argv[1], "r")) == NULL)
    {
		printf("Can't open %s filename\n",argv[1]);
		exit(EXIT_FAILURE);
    }
    if ((f2 = fopen(argv[2], "r")) == NULL)
    {
		printf("Can't open %s filename\n",argv[2]);
		exit(EXIT_FAILURE);
    }
	ch1=getc(f1);
	ch2=getc(f2);
	while(ch1!=EOF||ch2!=EOF)
	{
		while(ch1!='\n'&&ch1!=EOF)
		{
			putchar(ch1);
			ch1=getc(f1);
		}
		if(ch1!=EOF)
		{	
			ch1=getc(f1);
		}
		while(ch2!='\n'&&ch2!=EOF)
		{
			putchar(ch2);
			ch2=getc(f2);
		}
		if(ch2!=EOF)
		{
			ch2=getc(f2);
		}
		printf("\n");
	}
	if(fclose(f1)!=0||fclose(f2)!=0)
		fprintf(stderr,"Error in closing files\n");
	return 0;
}

