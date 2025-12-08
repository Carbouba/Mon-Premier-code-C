#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *moncahier; //Le pointer
    char prenom[20], nom[20]; 

    moncahier = fopen("Cahier.txt", "w"); //Ouverture/Creeation du fichier avec "w" pour creer un noveau et ecraser l'ancien

    printf("Entrez votre nom : ");
    scanf("%19s", nom);

    printf("Entrez votre prenom : ");
    scanf("%19s", prenom);

    fprintf(moncahier, "Mon nom est %s %s", nom, prenom); //Affichage dans le fichier
    fclose(moncahier);



    return 0;

}
