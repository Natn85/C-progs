#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
char *words[10] = {
    "programming",
    "python",
    "hangman",
    "iphone",
    "window",
    "football",
    "pencil"
 };

void displayHangman(int tries){
    switch(tries){
        case 0:
            printf("   ____\n");
            printf("   |  |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            break;
        case 1:
            printf("   ____\n");
            printf("   |  |\n");
            printf("   o  |\n");
            printf("      |\n");
            printf("      |\n");
            break;
        case 2:
            printf("   ____\n");
            printf("   |  |\n");
            printf("   o  |\n");
            printf("   |  |\n");
            printf("      |\n");
            break;
        case 3:
            printf("   ____\n");
            printf("   |  |\n");
            printf("  \\o  |\n");
            printf("   |  |\n");
            printf("      |\n");
            break;
        case 4:
            printf("   ____\n");
            printf("   |  |\n");
            printf("  \\o/ |\n");
            printf("   |  |\n");
            printf("      |\n");
            break;
        case 5:
            printf("   ____\n");
            printf("   |  |\n");
            printf("  \\o/ |\n");
            printf("   |  |\n");
            printf("  /   |\n");
            break;
        case 6:
            printf("   ____\n");
            printf("   |  |\n");
            printf("  \\o/ |\n");
            printf("   |  |\n");
            printf("  / \\ |\n");
            break;
    }
}

int main ()
{
    srand(time(NULL));
    char word[50];
    char guessed[50];
    int wordlen, tries = 0, correctGuess = 0;
    strcpy(word, words[rand()%7]);
    wordlen = strlen(word);
    for (int i = 0; i < wordlen; i++) {
        guessed[i] = '_';            
    }    
    guessed [wordlen] = '\0';
    printf("welcome to hangman\n");
    printf("Guess the word for a cookie: %s\n", guessed);

    while(tries<6){

        char guess;
        printf("\nEnter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int found = 0;
        for(int i = 0; i < wordlen; i++)
        {if(word[i] == guess)
            {
                guessed[i] = guess;
                found = 1;
                correctGuess++;
            }
        }
        if (found){
            printf("correct guess!\n");
            
        }else{
            printf("incorrect guess! %d tries left", 5-tries);
            tries++;
            displayHangman(tries);
        }
        printf("word %s\n", guessed);
        if(correctGuess == wordlen){
            printf("congratulations! you have guessed the word %s\n", word);
            break;
        }


    }
    if (tries == 6){
        printf("sorry you have run out of tries.\n The word was %s\n", word);
        displayHangman(tries);
    }

    return 0;
}
