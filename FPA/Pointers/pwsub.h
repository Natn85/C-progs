//Natnael Feleke - porwursub.c

#include <stdio.h>

void pot(int *a, int *b, int *c);
void wur(float *a, float *b);

void pot(int *a, int *b, int *c)
{
        int i = 1;
        *c = *a;
        for(i = 1; i < *b; i++)
        {
                *c = *c * *a;
        }
}
void wur(float *a, float *b)
{
        float x = *a / 2.0;
        for(int i = 0; i < 5; i++)
        {
                x = 0.5 * (x + (*a / x));
        }
        *b = x;
}
