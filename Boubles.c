#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
   char sexe[10];

    //Collecte d'infos
   printf("Votre sexe : \n");
   printf("\nHomme\nFemme\n\n");
   scanf("%s", sexe);

    // Tant que le sexe n'est pas "Homme", on redemande
   while (strcasecmp(sexe, "Homme") != 0)
   {
    printf("\nLe programme est uniquement reserve aux hommes\n");
    printf("Veuillez saisir une valeur valide: ");
    scanf("%s", sexe);
    
   }

   printf("\nBienvenue\n\n");
  */
    /*
  char mdp[20], nom[30], prenom[30];
    // Collecte du mot de passe
     printf("Veuillez saisir votre nom : ");
        scanf("%29s", nom);
        printf("Veuillez saisir votre prenom : ");
        scanf("%29s", prenom);
    do {
        printf("Veuillez saisir le mot de passe : ");
        scanf("%19s", mdp);
       
        if (strcasecmp(mdp, "admin123") != 0)
            printf("Mot de passe incorrect.\n");

    } while (strcasecmp(mdp, "admin123") != 0);

    //Validation mot de passe
    printf("Acces autorise.\nBienvenue %s %s\n", prenom, nom);
    */

    
    /*   
    int nomber;

    printf("Veuillez saisir 11²²le nombre que vous saouhaiter avoir sa table de multiplication : ");
    scanf("%d", &nomber);


    for (int i = 1; i < 10; i++)
        nomber = nomber * i;
    {
        printf("%d", nomber);
    }
    

    int i;

    for(i = 0; i <= 5; i--)
    {
    
        printf("Nombre de tour : %d", i);
        printf("\n");

    }
    */



int lignes;

    // Demander le nombre de lignes
    printf("Combien de lignes d’étoiles voulez-vous ? ");
    scanf("%d", &lignes);

    // Afficher le triangle
    for (int i = 1; i <= lignes; i++) {
        for (int j = 1; j <= i; j++) {
            printf("1- * ");
        }
        printf("\n");
    }

    return 0;





    return 0;
}