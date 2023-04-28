
#include <stdio.h>


int inttochar(char s[]);

int main(void)
{
	char s[] =";Abc";

	printf("%i \n",  inttochar(s));
	return 0;
		
}

int inttochar(char s[])
{
	int i, n;

	n = 0;
	if(s[i] >= 0 && s[i] <= 127)
		return n = s[i];
	else
		return n;

}
