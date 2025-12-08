#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Informations personnelles
    char nom[30], prenom[30], sex[30];

    // Informations administratives
    char etatcivil[30], fonction[30], nationalite[30], lieudenaissance[50];

    // Données numériques
    int age;

    // Collecte de données
    printf("Veuillez entrer votre nom : ");
    scanf("%s", nom);

    printf("Veuillez entrer votre prenom : ");
    scanf("%s", prenom);

    printf("Veuillez entrer votre sexe (Homme/Femme) : ");
    scanf("%s", sex);

    printf("Veuillez entrer votre age : ");
    scanf("%d", &age);

    // Vérification finale
   int erreur = 0;

if (age < 18) 
{
    printf("Desole, Vous devez avoir au moins 18 ans\n");
    erreur = 1;
}

if (strcasecmp(sex, "Homme") != 0) 
{
    printf("Le programme est reserve aux hommes uniquement.\n");
    erreur = 1;
}

if (erreur == 0) 
{
    printf("Bienvenue %s %s, vous etes eligible !\n", prenom, nom);
}
return 0;

}