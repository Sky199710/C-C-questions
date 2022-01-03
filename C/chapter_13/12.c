/*************************************************************************
	> File Name: 12.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 15 Dec 2020 04:00:45 AM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void process(int ar[][30])
{
	for (int i=1;i<19;i++)
	{
		for(int j=1;j<29;j++)
		{
			if (abs(ar[i][j]-ar[i-1][j])>1\
				&&abs(ar[i][j]-ar[i+1][j]>1)\
				&&abs(ar[i][j]-ar[i][j-1]>1)\
				&&abs(ar[i][j]-ar[i][j+1])>1)
				ar[i][j]=(ar[i+1][j]+ar[i-1][j]\
						+ar[i][j+1]+ar[i][j-1])/4.0+0.5;
					
		}
	}
}
int main(int argc, char * argv[])
{
	int store[20][30];
	char disp[20][31];
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
	for(int i=0;i<20;i++)
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
	process(store);
	for(int i=0;i<20;i++)
	{	
		for(int j=0;j<30;j++)
			printf("%d",store[i][j]);
		printf("\n");
	}
	for (int i=0;i<20;i++)
	{
		for (int j=0;j<30;j++)
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
