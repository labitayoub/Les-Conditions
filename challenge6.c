#include<stdio.h>
#include<stdlib.h>

int main()
{
float nbr;

printf("Entrer le nombre ");
scanf("%f",&nbr);

if(nbr< 0)
printf("le nombre est negatif");
else if (nbr> 0)
printf("le nombre est positif");
else 
printf("le nombre est egal à zero");





    return 0;
}