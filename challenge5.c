#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int annee;

    printf("Entrez une annee : ");
    scanf("%d",&annee);
    
    printf("mois : %d\n", annee*12);
    printf("jours : %d\n", annee*365);
    printf("heures : %d\n", annee*365*24);
    printf("minutes : %d\n", annee*365*24*60);
    printf("secondes : %d\n", annee*365*24*60*60);


    return 0;
}