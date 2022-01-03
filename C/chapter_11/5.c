/*************************************************************************
	> File Name: 5.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 07 Dec 2020 07:19:25 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
const char * search(const char [], char);
char * s_gets(char * st, int n);
void main()
{
	char ch;
	char str1[40];
	const char * index;
	printf("请输入一个字符串：\n");
	while(s_gets(str1,40)&&str1[0]!='\0')
	{
		printf("请输入字符：\n");
		ch=getchar();
		index=search(str1,ch);
		if (index!=NULL)
			printf("%s\n",index);
		else 
			printf("字符串中无该字符\n");
		printf("请输入一个字符串：\n");

	}


}
char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
		find = strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}
const char * search(const char str[],char ch)
{
	const char * index;
	int found=0;
	while(getchar()!='\n')
		continue;
	for (int i=0;i<strlen(str);i++)
	{
		if (!found&&(str[i]==ch))
		{
			index=&str[i];
			found=1;
		}
	}

	if(found==1)
		return index;
	else
		return NULL;

}
