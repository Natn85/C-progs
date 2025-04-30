//Natnael Feleke - potwurmain.c

#include "pwsub.h"
#include <stdio.h>

int main (void)
{
	int zahl1, potenz, erg, zahl2;
	int *z1 = &zahl1, *pz = &potenz, *er = &erg, *z2 = &zahl2;
	float wurzel, *wzl = &wurzel;

	printf("Bitte Zahl eingeben(Potenzieren): ");
	scanf("%i", z1);
	printf("Bitte Potenz eingen: ");
	scanf("%i", pz);
	printf("Bitte Zahl eingeben(Wurzeln): ");
	scanf("%i", z2);
	pot(z1, pz, er);
	wur(z2, wzl);

	printf("Ergebnis = %i\n", erg);
	printf("Wurzel = %.1f\n", wurzel);

	return 0;
}
