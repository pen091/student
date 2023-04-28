

#include <stdio.h>

char *reverse(char s[]);
int strlen2(char s[]);

int main(void)
{
	char s[] = "hello world!";

	printf("%s\n", reverse(s));
}

char *reverse(char s[])
{
	int c, i, j;
		for(i = 0, j = strlen2(s)-1; i < j; i++, j--)
		c = s[i], s[i] = s[j], s[j] = c;
	return s;
}

int strlen2(char s[])
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;

	return i;
}
