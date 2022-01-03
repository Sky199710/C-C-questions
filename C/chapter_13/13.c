/*************************************************************************
	> File Name: 12.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 15 Dec 2020 04:00:45 AM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int m=20;
	int n=30;
	int store[m][n];
	char disp[m][n+1];
	FILE *code;
	FILE *imag;
	char ch;
	int j;
	char image;
	if((code=fopen(argv[1],"r"))==NULL)
	{
		printf("Can't open %s file.\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	if((imag=fopen(argv[2],"w"))==NULL)
	{
		printf("Can't open %s file.\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	for(int i=0;i<m;i++)
	{
		j=0;
		while((ch=getc(code))!='\n')
		{
			if (ch!=' ')
			{
				store[i][j]=(int)(ch-'0');
				j++;
			}
		}
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			switch(store[i][j])
			{
				case 0 : image=' ';
						  break;
				case 1: image='.';
						  break;
				case 2: image='\'';
						  break;
				case 3: image=':';
						  break;
				case 4: image='~';
						  break;
				case 5: image='*';
						  break;
				case 6: image='=';
						  break;
				case 7: image='+';
						  break;
				case 8: image='%';
						  break;
				case 9: image='#';
						  break;
			}
			putchar(image);
			putc(image,imag);
		}
		printf("\n");
		putc('\n',imag);
	}
	if(fclose(imag)!=0||fclose(code)!=0)
	{
		printf("Close files failed.\n");
		exit(EXIT_FAILURE);
	}
}
