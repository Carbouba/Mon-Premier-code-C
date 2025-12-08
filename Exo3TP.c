#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nom[30], prenom[30], statut[30], niveau[30], sexe[30];
    int age;

    // Collecte de données
    printf("\nVeuillez saisir votre nom : ");
    scanf("%29s", nom);
    
    printf("\nVeuillez saisir votre prenom : ");
    scanf("%29s", prenom);
    
    printf("\nVeuillez saisir votre age : ");
    scanf("%d", &age);
    
    // Validation de l'âge
    while (age < 18 || age > 35)
    {
       
      if (age < 18)
         printf("Vous etes trop jeune pour participer. Lage minimum requis est de 18 ans.\n");
      else
         printf("Vous dépassez la limite d'age. Le concours est reserve aux 18 et 35 ans.\n");
         printf("\nVeuillez ressaisir votre age : ");
         scanf("%d", &age);
    }
    
    printf("\nQuel est votre genre (Masculin,Feminin) : ");
    scanf("%29s", sexe);
    
    // Validation du genre
    while (strcasecmp(sexe, "Masculin") != 0 && strcasecmp(sexe, "Feminin") != 0)
    {
        printf("\nGenre invalide. Veuillez choisir Masculin ou Feminin.\n");
        printf("\nVeuillez ressaisir votre genre : ");
        scanf("%29s", sexe);
    }
    
    printf("\nQuel est votre statut (Independant,Etudiant, Salarie): ");
    scanf("%29s", statut);
    
    // Validation du statut
    while (strcasecmp(statut, "Independant") != 0 && 
         strcasecmp(statut, "Etudiant") != 0)
    {
        
      printf("\nLe concours est reserve uniquement aux Etudiants et Independants.\n");
        printf("\nVeuillez ressaisir votre statut : ");
        scanf("%29s", statut);
    }
    
    printf("\nQuel est votre niveau (Debutant,Intermediaire, Avance, Expert): ");
    scanf("%29s", niveau);
    
    // Validation du niveau
    while (strcasecmp(niveau, "Intermediaire") != 0 && 
           strcasecmp(niveau, "Avance") != 0 && 
           strcasecmp(niveau, "Expert") != 0)
    {
      
        printf("\nVotre niveau est insuffisant pour participer (minimum requis : Intermediaire).\n");
        printf("\nVeuillez ressaisir votre niveau : ");
        scanf("%29s", niveau);
    }
    
    // Affichage du récapitulatif
    printf("\n\n--- Resume de votre inscription ---");
    printf("\nNom : %s", nom);
    printf("\nPrenom : %s", prenom);
    printf("\nAge : %d ans", age);
    printf("\nGenre : %s", sexe);
    printf("\nStatut : %s", statut);
    printf("\nNiveau : %s\n\n", niveau);
    
    printf("Felicitations %s %s, vous etes inscrit au concours de design en tant que participant %s.\n\n", 
           prenom, nom, niveau);
    
    return 0;
}