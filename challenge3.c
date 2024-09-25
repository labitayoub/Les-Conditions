#include<stdio.h>
#include<stdlib.h>


int main() 
{
    int a, b;
    printf("Entrer les deux nombres : ");
    
    scanf("%d %d",&a, &b);
    
    if (a==b)
        printf("Resultat : %d\n", 3*(a + b));
    else
        printf("Resultat : %d\n", a+b);
    


    return 0;
}