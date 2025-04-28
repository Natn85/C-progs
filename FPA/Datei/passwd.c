//Natnael Feleke - passwd.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int split(char string[], char teil[], char trenner);
int main (void)
{
	int i, j, lng;
	char temp[100], name[30], pass[30], num[30], gpn[30], pass2[30];
	FILE *psw = fopen("passwd.csv", "r");
	if (psw == NULL)
	{
		printf("Datei ist nicht gefunden!\n");
	}
	else
	{
		while(fgets(temp, 100, psw) != NULL)
		{
			lng = split(temp, name,':');
			lng = split(temp + lng, pass, ':');
			lng = split(temp + lng, num, ':');
			lng = split(temp + lng, gpn, ':');
		}
		fclose(psw);
	}
	return 0;
}
int split (char string[], char teil[], char trenner)
{
	int i = 0; 
	while (string[i] != trenner && string[i] != '\0' && string[i] != '\n')
	{
		teil [i] = string[i];
		i ++;
	}
	teil[i] = '\0';
	i ++;
	return i;
}
