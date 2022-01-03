/* binary.c -- prints integer in binary form */
#include <stdio.h>
void to_binary_n(unsigned long n,int m);

int main(void)
{
    unsigned long number;
	int status,m;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
	{
		printf("请输入进制数(2~10):");
		while ((status=scanf("%d",&m))!=1||(m<2||m>10))
		{
			if (status!=1)
				scanf("%*s");
			printf("请输入2~10之间的整数\n");
		}
        printf("n进制数为: ");
        to_binary_n(number,m);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    
    return 0;
}

void to_binary_n(unsigned long n,int m)   /* recursive function */
{
    int r;
    
    r = n % m;
    if (n >= m)
        to_binary_n(n / m,m);
     printf("%d",r);
    
    return;
}
