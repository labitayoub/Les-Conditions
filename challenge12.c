#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int H1, M1, S1;
    int H2, M2, S2;
    printf("Entrer le premier instant (HH MM SS) :");
    scanf("%d %d %d", &H1, &M1, &S1);
    printf("Entrer le deuxieme instant (HH MM SS) :");
    scanf("%d %d %d", &H2, &M2, &S2);
    
    if (H1<H2 || (H1 == H2 && M1 < M2) || (H1 == H2 && M1 == M2 && S1 < S2))
        printf("Le premier instant est antérieur au deuxieme.\n");
    else if (H1 == H2 && M1 == M2 && S1 == S2)
        printf("Les deux instants sont egaux.\n");
    else
        printf("Le deuxieme instant est interieur au premier.\n");
    
    return 0;
    }