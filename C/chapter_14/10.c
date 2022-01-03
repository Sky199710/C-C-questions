/*************************************************************************
	> File Name: 10.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 19 May 2021 12:22:13 AM PDT
 ************************************************************************/


#include<stdio.h>
#include<string.h>
float add(float,float);
float minus(float,float);
float multiple(float,float);
float division(float,float);
float show(float(*fp)(float,float),float,float);
void showmenu(void);
char getlet(char *);
int main(void)
{
	float a,b,ans;
	//typedef float (*V_FP_CHARP)(float,float);
	//V_FP_CHARP arpf[4] = {add,minus,multiple,division};
	//float(*pfun)(float,float);
	float(*arpf[4])(float,float)={add,minus,multiple,division};
	char choice_1,choice_2;
	puts("Do you want to calculate(y/n):");
	while((choice_1=getlet("yn"))=='y')
	{
		puts("Please enter two numbers.");
		while(scanf("%f %f",&a,&b)!=2)
		{	
			puts("Please enter two numbers.");
		}
		showmenu();
		while(getchar()!='\n')
			continue;
		while((choice_2=getlet("abcde")-'a')!=4)
		{

			/*switch(choice_2)
			{
				case 'a' : pfun=add;break;
				case 'b' : pfun=minus;break;
				case 'c' : pfun=multiple;break;
				case 'd' : pfun=division;break;
			}*/
			ans=show(arpf[choice_2],a,b);
			printf("The answer is %f.\n",ans);
			showmenu();
		}
		puts("Do you want to calculate(y/n):");
	}
	puts("Bye~");
	return 0;
}
float show(float(*fp)(float,float),float a,float b)
{
	float ans;
	ans=fp(a,b);
	return ans;
}
void showmenu(void)
{
	puts("Enter menu choice:");
	puts("a) add          b)minus");
	puts("c) multiple     d)division");
	puts("e) quit");
}
char getlet(char *str)
{
	char ch;
	ch=getchar();
	while((strchr(str,ch))==NULL)
	{
		printf("Enter the letter form %s.\n",str);
		while(getchar()!='\n')
			continue;
		ch=getchar();
	}
	while(getchar()!='\n')
		continue;
	return ch;
}
float add(float a,float b)
{
	float ans;
	ans=a+b;
	return ans;
}
float minus(float a,float b)
{
	float ans;
	ans=a-b;
	return ans;
}
float multiple(float a,float b)
{
	float ans;
	ans=a*b;
	return ans;
}
float division(float a,float b)
{
	float ans;
	ans=a/b;
	return ans;
}
