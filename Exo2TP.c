#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
    char nom[30], prenom[30], sexe[30];
    int age, fonction; 

     // Collecte de données
    printf("\nVeuillez saisir votre nom : ");
    scanf("%s", nom);
     
    printf("Veuillez saisir votre prenom : ");
    scanf("%s", prenom);


    printf("Veuillez saisir votre sexe (Homme/Femme) : ");
    scanf("%s", sexe);
     
    printf("Veuillez saisir votre age : ");
    scanf("%d", &age);

    printf("\nChoisissez une fonction (1 a 3) : \n");
    printf("\n1. Designer\n2. Dev\n3. Data Analyste\n");
    scanf("%d", &fonction);




    // Vérification éligiblité
    int erreur = 0;

    if (age < 18)
    {
        printf("\nDesole %s %s, Vous devez avoir au moins 18 ans", prenom, nom);
        erreur = 1;
    }

    if (strcasecmp(sexe, "Homme") != 0)
    {
        printf(" Le programme est uniquement reserve aux hommes\n");
        erreur = 1;
    
    }
    if (fonction < 1 || fonction > 3)
    {
        printf("Vous devez choisir une fonction valide entre 1 et 3\n");
        erreur = 1;
    }

    // Affichage des informations si éligible
    if (erreur == 0)
    {
        printf("\n\n--- Informations Recueillies ---");
        printf("\nNom : %s\n", nom);
        printf("Prenom : %s\n", prenom);
        printf("Sexe : %s\n", sexe);
        printf("Age : %d ans\n", age);
        printf("Fonction : %d\n", fonction);

        printf("\nBienvenue %s %s vous etes eligible pour un entretien pour le poste", prenom, nom);

         // Affichage de la fonction choisie    
    switch (fonction)
    {
    case 1:
        printf(" en tant que (Designer).\n");
        break;
    case 2:
        printf(" en tant que (Developpeur).\n");
        break;
    case 3:
        printf(" en tant que (Data Analyste).\n");
        break;
    
    default:
        break;  
    }

    }

   

   // Fin du programme
    printf("\n");
    
return 0;

}