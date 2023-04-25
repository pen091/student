#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define RED	"\x1b[31m"
#define YELLOW	"\x1b[33m"
#define BLUE	"\x1b[34m"
#define GREEN	"\x1b[32m"

void binary(long int c);
long int add(long int x, long int y);
long int minus(long int x, long int y);
void delay(unsigned int mytime);


int main(void)
{
	long int x, y, z;
	int n, i;
	char *s = ".";
	char *ch = ".....";
	char *buf = "\t\tRestarting   ";
	int str;
	

label :

	system("clear");

	printf("\n\n\n");
	
	printf("\t\t\t %s********************************\n", RED);
	printf("\t\t\t %s********************************\n", RED);
	printf("\t\t\t %s***                          ***\n", RED);
	printf("\t\t\t %s***        [ 0 ]    +        ***\n", RED);
	printf("\t\t\t %s***                          ***\n", RED);
	printf("\t\t\t %s***        [ 1 ]    -        ***\n", RED);
	printf("\t\t\t %s***                          ***\n", RED);
	printf("\t\t\t %s********************************\n", RED);
	printf("\t\t\t %s********************************\n\n", RED);

	printf("%sAUTHOR : Prince Ekene Ndioziri\n", RED);
	printf("%sCOUNTRY : Nigeria\n", RED);
	printf("%sLINENSE : GPL Linense\n",RED);
	

	printf("\n\n\n\n\n\n\n\n\b%sPress [ 0 ] for plus or [ 1 ] for minus : ", YELLOW);
	scanf("%d", &n);

	printf("\n");

	if(n == 0)
		printf("%sSet to addition mode\n", GREEN);
	else if(n == 1)
		printf("%sSet to subtraction mode\n", GREEN);
	else {
		printf("\n\n%sEntered wrong format\n\n ", RED);

		write(1, buf, strlen(buf));
		
                i = 0;
                while(ch[i] != '\0')
                {
			write(1, s, strlen(s));
                        delay(50);
                        i = i + 1;
		}
		goto label;
	}
	

	printf("%s\nenter first number : ", BLUE);
	scanf("%ld", &x);

	printf("%s\nenter second number : ", BLUE);
	scanf("%ld", &y);

	printf("\n");
	

	switch(n)
	{
		case 0 : z = add(x, y);
			 printf("%sTotal addition in digit = %ld\n\n", GREEN, z);
			 binary(z);
lab :
			 printf("%s\n\n\nPress [ 1 ] for YES to continue OR [ 0 ] for NO to exit  : ", BLUE );
			 scanf("%d", &str);
			 if(str == 1)
				 goto label;
			 else if(str == 0)
				 exit(0);
			 else{
				 printf("\n\nPlease entered the correct character\n");
				 goto lab;
			 }

		case 1 : z = minus(x, y);
			 printf("%sTotal subtraction in digit = %ld\n\n", GREEN, z);
			 binary(z);
lab1 :
			 printf("%s\n\n\nPress [ 1 ] for YES to continue OR [ 0 ] for NO to exit : ", BLUE );
                         scanf("%d", &str);
                         if(str == 1)
                                 goto label;
                         else if(str == 0)
                                 exit(0);
                         else{
                                 printf("\n\nPlease entered the digit\n");
                                 goto lab1;
                         }
			 break;

		default : exit(1);
	}
	
	return 0;
}

void binary(long int c)
{
	long int sign, n;
	int i;

	n = sign = 0;

	i = 0;
	while(i <= 63)
	{
		sign = c;
		sign = sign / 2;
		n = c % 2;
		c = sign;
		i++;
		printf("%s%ld",GREEN, n);
	}
	putchar('\n');
}

long int add(long int x, long int y)
{
	return x + y;
}

long int minus(long int x, long int y)
{
	return x - y;
}

void delay(unsigned int mytime1)
{
        int i, j;                                                                                                                                               for(i = 0; i < mytime1; i++)
                for(j = 0; j < 10000000; j++);
}
