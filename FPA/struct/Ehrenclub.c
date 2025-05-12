#include <stdio.h>
#include <stdbool.h>

struct club
{
    char vname[20];
    char mname[20];
    char adresse[20];
    char ort[20];
    int plz;
    int ejahr;
    int gjahr;
    bool geschlecht;
    bool entiglied;

void karte(struct club*pclub);

int main()
{
    struct club eins = {"Michael", "Halleber", "Uhlandstraße 3", "Wuerzburg", 97072, 2020, 1980, true, true};
    karte(seins);
}

void karte(struct club*pclub)
{
    FILE * kartetext = fopen("kartetext.txt", "w");
    if (kartetext == NULL)
    {
    printf("Datei nicht gefunden!\\n");
    }
    else
    {
    if ((*pclub).entiglied = true)
    {
    fprintf(kartetext, "%s %s\n%s\n%is\n\nLieber %s %s,\nwir wuenschen Ihnen ein angenehmes Pfingsfesst?",
    t!\n\nFreundliche Grüße\nIhre Clubleitung\n", (*pclub).vname, (*pclub).mame, (*pclub).adresse, (*pclub).plz,
    (*pclub).ort, (*pclub).geschlecht ? "Herr" : "Frau", (*pclub).vname);
    }
    }
}
