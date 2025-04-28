//Natnael Feleke - zahlenand.c

#include <stdio.h>

void input(int *a, int *b);
void x2(int *a, int *b);
void shuffle(int *a, int *b);
void add(int *a, int *b);

int main (void)
{
	int zahl1, zahl2, *pz1, *pz2;
	
	pz1 = &zahl1;
	pz2 = &zahl2;

	input(pz1, pz2);

	x2(pz1, pz2);
	printf("Zahl 1: %i\n", zahl1);
	printf("Zahl 2: %i\n", zahl2);

	shuffle(pz1, pz2);
	printf("Zahl 1: %i\n", zahl1);
	printf("Zahl 2: %i\n", zahl2);

	add(pz1, pz2);
	printf("Zahl 1: %i\n", zahl1);
	printf("Zahl 2: %i\n", zahl2);

	return 0;
}

void input(int *a, int *b)
{
	printf("Zahl 1: ");
	scanf("%i", a);
	printf("Zahl 2: ");
	scanf("%i", b);
}

void x2(int *a, int *b)
{
	*a = *a * 2;
	*b = *b * 2;
}

void shuffle(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void add(int *a, int *b)
{
	int adder;
	printf("Addierende Zahl: ");
	scanf("%i", &adder);

	*a = *a + adder;
	*b = *b + adder;
}
