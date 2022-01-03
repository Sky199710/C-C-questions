/*************************************************************************
	> File Name: 8.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 30 Nov 2020 04:57:46 AM PST
 ************************************************************************/

#include<stdio.h>
void manu()
{
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
}
float get_float(void)
{
	float input;
	char ch;
	while((scanf("%f",&input))!=1)
	{
		while((ch=getchar())!='\n')
		{
			putchar(ch);
		}

		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5,-1.78E8, or 3:");
	}
	return input;
}
int main()
{
	manu();
	float num1,num2,ans;
	char i;
	while((i=getchar())!='q')
	{
		if (i=='\n')
			continue;
		printf("Enter first number: ");
		num1=get_float();
		printf("Enter second number: ");
		num2=get_float();
		switch(i)
		{
			case 'a': ans=num1+num2;
					  printf("%g+%g=%g\n",num1,num2,ans);
					  break;
			case 's': ans=num1-num2;
					  printf("%g-%g=%g\n",num1,num2,ans);
					  break;
			case 'm': ans=num1*num2;
					  printf("%g*%g=%g\n",num1,num2,ans);
					  break;
			case 'd': while(num2==0)
					  {
						printf("Enter a number other than 0:");
						num2=get_float();
					  }
					  ans=num1/num2;
					  printf("%g/%g=%g\n",num1,num2,ans);


		}
		manu();
	}
	printf("bye!\n");
}
