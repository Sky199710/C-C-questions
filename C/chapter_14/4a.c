/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 28 Mar 2021 02:27:04 AM PDT
 ************************************************************************/

#include<stdio.h>
#define LEN 20
struct names {
	char first[LEN];
	char middle[LEN];
	char last [LEN];
};
struct social {
	long number;
	struct names handle;
};
const struct social socials[5] = {
	{302039823,{"Flossie","Mother","Dribble"}},
	{371254230,{"Sky","\0","Peace"}},
	{985694222,{"Jenny","Flora","Bitch"}},
	{571951685,{"Mike","Jonh","Sath"}},
	{147895265,{"Cola","\0","Fuck"}}
};
void func(struct social * item);
void main()
{
	for(int i=0;i<5;i++)
		func(&socials[i]);
}
void func(struct social * item)
{
	printf("%s, %s",item->handle.last,item->handle.first);
	if((item->handle.middle[0])!='\0')
	{
		printf(" %c\. ",item->handle.middle[0]);
	}
	printf(" \-\- %ld\n",item->number);
}
