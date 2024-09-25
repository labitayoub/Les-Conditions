#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    char* jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    srand(time(0));
    int i = rand() % 7;
    
    printf("Jour aleatoire : %s\n", jours[i]);
    
    return 0;
}