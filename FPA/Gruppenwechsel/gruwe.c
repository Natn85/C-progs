//Natnal Feleke - gruwe.c´

#include <stdio.h>

int split(char string[], char teil[], char trenner);

int main (void)
{
	int i, j, k, lng, kunde, ;
	char temp[100], knum[30], datum[30], ums[30], data[100][100];

	FILE *gruwe = fopen("gruwe.txt", "r");
	if (gruwe == NULL)
	{
		printf("Datei ist nicht gefunden\n");
	}
	else
	{
		FILE *output = fopen(
		while(fgets(temp, 100, gruwe) != NULL)
		{
			i = 0;
			lng = split(temp, knum, ';');
			lng += split(temp + lng, datum, ';');
			lng += split(temp + lng, ums, ';');
			printf("%s, %s, %s\n", knum, datum, ums);

			i ++;
		}
		fclose(gruwe);
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

