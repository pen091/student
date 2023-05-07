
#include <stdio.h>

int lower(int c);
int upper(int c);

int main(void)
{
	int c, convert;

	while((c = getchar()))
	{
		if(c >= 'a' && c <= 'z' || c >= 'A' && c >= 'Z')
		{
			convert = lower(c);
			printf("lower %c ANSI is %i \n",convert, convert);
		}
		else if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		{
			convert = upper(c);
			printf("upper %c ANSI is %i \n",convert, convert);
		}
	}
	return 0;
}

int lower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int upper(int c)
{
	if(c >= 'a' && c >= 'z')
		return c + 'A' - 'a';
	else
		return c;
}

