/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
    int choix, quantite, p_u_sand = 1500, p_u_bis = 500, p_u_chi = 300, total = 0;
    char conf[5];
    
    //Affichage du menu Snacks
    printf("\n======= Menu snacks =======\n1 - Sandwich : %d FCFA\n2 - Jus bissap : %d FCFA\n3 - Chips : %d FCFA\n=========================\n", p_u_sand, p_u_bis, p_u_chi);
    //Demande du choix Snacks
    printf("\n\nVeuillez choisir un snack (Entrez un numero 1, 2 ou 3) : \n");
    scanf("%d", &choix);

    //Verification du choix
    while (choix < 1 || choix > 3)
    {
        printf("\nChoix incorrect, veuillez choisir un numero valide !!!\n\n:");
        scanf("%d", &choix);
    }
    

    //Message personalise selon le snacks choisi
    switch (choix)
    {
    case 1:
        printf("Combien d'unite de Sandwich vouslez-vous acheter ? \n: ");
        scanf("%d", &quantite);
        break;
    case 2:
        printf("Combien d'unite de jus de Bissap vouslez-vous acheter ? \n: ");
        scanf("%d", &quantite);
        break;
    case 3:
        printf("Combien paquets de Chips vouslez-vous acheter ? \n: ");
        scanf("%d", &quantite);
        break;
    
    default:
        break;
    }
    

    //Calcule du prix
    if (choix == 1)
    
         total = p_u_sand * quantite; 

    else if (choix == 2)
        total = p_u_bis * quantite;

    else

        total = p_u_chi * quantite;


    //Affichage de la facture si toutes les conditions remolis
    if (choix >= 1 && choix <= 3)

   

        printf("\n=====Facture de la commande=====\n");
    // Affiche choix produit    
    switch (choix)
    {
    case 1:
        printf("Produit : Sandwich\n");
        break;
    case 2:
        printf("Produit : Jus de Bissap\n");
        break;
    case 3:
        printf("Produit : Chips\n");
        break;
    
    default:
        break;
    }
        // Affiche Quantite
        printf("Quantite : %d\n", quantite);
        
        // Afffiche Prix unitaire
        if (choix == 1)
        {
             printf("Prix unitaire : %d FCFA\n", p_u_sand);
        }
         else if (choix == 2)
        {
             printf("Prix unitaire : %d FCFA\n", p_u_bis);
        }
        else 
        {
             printf("Prix unitaire : %d FCFA\n", p_u_chi);
        }
       
        // Affiche Total
        printf("\nTotal a payer : %d FCFA\n\n", total);

        //Confirmation de la commande
        printf("\nVouslez-vous confirmer la commande (Oui/Non) ?\n");
        scanf("%4s", conf);

        if (strcasecmp(conf, "Oui") != 0)
        {
            printf("\nMerci et au revoir !!!\n");
        }
        else 
        {
            printf("\nMerci de patienter, votre commande sera traiter !\n");
        }
        
    return 0;
} */
    






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

    // Quantité
    printf("Combien d unites de %s voulez-vous acheter ? ", noms[choix - 1]);
    scanf("%d", &quantite);

    // Calcul du total
    total = prix[choix - 1] * quantite;

    // Facture
    printf("\n===== Facture =====\n");
    printf("Produit : %s\n", noms[choix - 1]);
    printf("Quantite : %d\n", quantite);
    printf("Prix unitaire : %d FCFA\n", prix[choix - 1]);
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
    