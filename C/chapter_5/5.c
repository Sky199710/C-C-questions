/* addemup.c -- five kinds of statements */
#include <stdio.h>
int main(void)                /* finds sum of first 20 integers */
{
    int count, sum;           /* declaration statement          */
    int end;
    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */
	printf("请输入累加至多少： \n");
	scanf("%d",&end);
    while (count++ < end)      /* while                          */
        sum = sum + count;    /*     statement                  */
    printf("sum = %d\n", sum);/* function statement             */
    
    return 0;                 /* return statement               */
}
