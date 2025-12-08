#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int nbc = 0;         // Nombre de chiffres que l'utilisateur veut saisir
    float moy;      // Variable pour la moyenne (non utilisée encore)

    printf("Combien de chiffre voulez-vous : ");
    scanf("%d", &nbc);       // L'utilisateur entre combien de nombres il veut

    int chif[nbc];       // Création d'un tableau de taille nbc
    int somme = 0;      // Pour calculer la somme

    for(int i = 0; i < nbc; i++)         // Boucle pour saisir chaque nombre
    {
        printf("Veuillez saisir le chiffre %d: ", i+1);
        scanf("%d", &chif[i]);      // Stocke chaque nombre dans le tableau
        somme += chif[i];
    }

    moy = somme / nbc;        // Calcul de la moyenne

     printf("\n\nNombres saisis : ");       // Affichage des résultats
    for(int i = 0; i < nbc; i++)
    {
        printf("%d, ", chif[i]);
    }
    printf("\nLa somme est : %d\n", somme);
    printf("\nLa moyenne est : %.2f\n", moy);

  

    return 0;
}