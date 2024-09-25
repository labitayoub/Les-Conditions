#include<stdio.h>
#include<stdlib.h>

int main()
{
char c;

printf("Entrer le caractere :");
scanf("%c",&c);

switch(c)
{
case 'a' :printf("le caractere est une voyelle");
           break;
case 'A' :printf("le caractere est une voyelle");
           break;
case 'i' :printf("le caractere est une voyelle");
           break;
case 'I' :printf("le caractere est une voyelle");
           break;
case 'u' :printf("le caractere est une voyelle");
           break;
case 'U' :printf("le caractere est une voyelle");
           break;
case 'e' :printf("le caractere est une voyelle");
           break;
case 'E' :printf("le caractere est une voyelle");
           break;
case 'o' :printf("le caractere est une voyelle");
           break;
case 'O' :printf("le caractere est une voyelle");
           break;
default : printf("le caractere ce nest pas une voyelle");
}



    return 0;
}