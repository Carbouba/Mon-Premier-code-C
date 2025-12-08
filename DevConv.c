#include <stdio.h>
#include <stdlib.h>


float convcfa(int cfa){

    
    float euro;  
    euro = cfa * 0.0012524;

    return euro;
}

float conveuro(float euro){

    float cfa;
    cfa = euro * 655.96;

    return cfa;
}

int main(void)

{
    int option, cfa;
    float RE, euro, RC;

    do
    {
    printf("\n\n====================");
    printf("\n1. Conversion du CFA --> EURO\n");
    printf("2. Conversion du EURO --> CFA\n");
    printf("3. Quiter\n");
    printf("====================\n");
    printf("\nVeuillez choisir une option : ");
    scanf("%d", &option);
 
    switch (option)
    {
    case 1:
        printf("\nVeuillez entrez le montant en CFA : ");
        scanf("%d", &cfa);
        RE = convcfa(cfa); //Appele de la fonction
        printf("\n%d Cfa vaut %.2f Euros", cfa, RE);
        break;
     case 2:
        printf("\neuillez entrez le montant en EURO : ");
        scanf("%f", &euro);
        RC = conveuro(euro); //Appele de la fonction
        printf("\n%.2f Euro vaut %.2f Cfa", euro, RC);
        break;
    case 3:
        printf("\n\nVous avez quiter le programme.\n\n");
        break;
    
    
    default:
         printf("\nChoix invalide. Veuillez choisir une option valide.\n");
        break;
    }

    } while (option != 3);


    return 0;
}




/* void afficherTableau(int *notes[], int taille){

    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", notes[i]);
    }
    
}


int main(void){

    int notes[] = {10, 20, 15, 12};
    afficherTableau(notes, 5);

    return 0;
} */