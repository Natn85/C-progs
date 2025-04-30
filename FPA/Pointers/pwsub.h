//Natnael Feleke - porwursub.c

#include <stdio.h>

void pot(int *a, int *b, int *c);
void wur(int *a, float *b);

void pot(int *a, int *b, int *c)
{
	int i = 1;
	*c = *a;
	for(i = 1; i < *b; i++)
	{
		*c = *c * *a;
	}
}
void wur(int *a, float *b)
{
	*b = ((*a / 2)+(*a / (*a / 2))) / 2;
}
