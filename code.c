#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(void)
{ float a, b, result; // déclarations

printf("Quelle est la premiere longueur en cm ?");// affichage

    scanf("%f", &a); // recup de la variable
    
    printf("Quelle est la deuxieme longueur en cm ?"); // affichage

    scanf("%f", &b);// recup de la variable

    résult = pow(a, b); // puissance 

    result = sqrt(pow(a, 2) + pow(b, 2));// racine carré

        printf("L'hypoténuse du triangle rectangle est de : %.2f cm\n", result);

     return 0;  //état initial
