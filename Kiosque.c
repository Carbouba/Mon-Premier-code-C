#include <stdio.h>
#include <string.h>

int main(void)
{
    int choix, quantite, total = 0;
    char conf[5];

    // Tableaux pour les snacks
    char *noms[] = {"Sandwich", "Jus de Bissap", "Chips"};
    int prix[] = {1500, 500, 300};

    // Affichage du menu
    printf("\n======= Menu snacks =======\n");
    for (int i = 0; i < 3; i++)
        printf("%d - %s : %d FCFA\n", i + 1, noms[i], prix[i]);
    printf("===========================\n");

    // Choix du snack
    printf("\nVeuillez choisir un snack (1, 2 ou 3) : ");
    scanf("%d", &choix);

    while (choix < 1 || choix > 3) {
        printf("Choix invalide. Reessayez : ");
        scanf("%d", &choix);
    }

    char nom_choisi = noms[choix - 1];
    // Quantité
    while (choix > 0)
    {
        printf("Combien d_unites de %s voulez-vous acheter ? ", nom_choisi);
        scanf("%d", &quantite);
        if (quantite > 0)
            printf("Moin");
        else
        printf("Erreur : Vous devez entrez une valeur positive.");
    }
    
    // Calcul du total
    int prix_choisi = prix[choix - 1];
    total = prix_choisi * quantite;

    // Facture
    printf("\n===== Facture =====\n");
    printf("Produit : %s\n", nom_choisi);
    printf("Quantite : %d\n", quantite);
    printf("Prix unitaire : %d FCFA\n", prix_choisi);
    printf("Total a payer : %d FCFA\n", total);
     printf("=====  =====\n");

    // Confirmation
    printf("\nConfirmez-vous la commande (Oui/Non) ? ");
    scanf("%4s", conf);

    if (_stricmp(conf, "Oui") == 0)
        printf("Merci de patienter, votre commande sera traitee !\n");
    else
        printf("Merci et a bientot !\n");

    return 0;
}
    