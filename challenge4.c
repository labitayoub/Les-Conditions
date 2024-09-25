#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    float a, b, c, discriminant,x1,x2;
    printf("Entrez les coefficients a, b, c : ");
    scanf("%f %f %f", &a,&b,&c);
    
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        
        printf("Racines reelles et distinctes :X1= %.2f et X2= %.2f\n", x1, x2);
    } else if (discriminant == 0) {
        x1 = -b / (2*a);
        printf("La solution réelle double : %.2f\n",x1);
    } else {
        printf("l'equation n'admet pas de solution reelle.\n");
    }


    return 0;
}