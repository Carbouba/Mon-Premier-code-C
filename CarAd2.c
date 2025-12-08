#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact //Structure d'un contact
{
    char nom[40];
    char telephone[30];
    char email[20];
}P;

void ajoutercontact(P contact[], int *totalcontacts)
{
    printf("\n\n=== Ajout d'un nouveau contact ===\n\n");
    
    printf("Nom : ");
    scanf(" %[^\n]", contact[*totalcontacts].nom);
    
    printf("Telephone : ");
    scanf(" %[^\n]", contact[*totalcontacts].telephone);
    
    printf("Email : ");
    scanf(" %[^\n]", contact[*totalcontacts].email);

    printf("\n\n=== Le contact %s a ete ajouter avec succe ===\n\n", contact[*totalcontacts].nom);

    (*totalcontacts)++;
}

void affichercontact(P contact[], int totalcontacts)
{
    if (totalcontacts == 0)
    {
        printf("\n\n=== Aucun contact ajouter pour le moment ! ===\n\n");
        return;
    }

        printf("\n=== %d contact(s) trouves ===\n", totalcontacts);

    for (int i = 0; i < totalcontacts; i++)
    {
        printf("\n----------------\n");
        printf("Nom : %s\n", contact[i].nom);
        printf("Telephne : %s\n", contact[i].telephone);
        printf("Email : %s\n", contact[i].email);
        printf("----------------");
    }
}

recherchecontact(P contact[], int totalcontacts)
{
    char nomrechercher;
    int trouve = 0; 

    printf("\n\n=== Rechercher un contact ===\n");
    printf("\nEntrez le nom du contact a rechercher : ");
    scanf(" %[^\n]", nomrechercher);

    if (totalcontacts == 0)
    {
        printf("\n\n=== Aucun contact ajouter pour le moment ! ===\n\n");
        return;
    }
    
     for (int i = 0; i < totalcontacts; i++)
     {
        if (_stricmp(contact[i].nom, nomrechercher) == 0)
        {
           printf("");
        }
        
     }
     
}



int main(void)
{
    int option;
    int totalcontacts = 0; //Total des contacts
    P contact[100]; //Tableaux pouvatn contenir 100 contacts

    do
    {
    printf("\n\n=== MENU CARNET D'ADRESSES ===\n\n");
    printf("========================\n");
    printf("1. Ajouter un contact");
    printf("\n2. Afficher tous les contacts");
    printf("\n3. Rechercher un contact");
    printf("\n4. Supprimer un contact");
    printf("\n5. Quitter");
    printf("\n========================");
    printf("\n\nFaites votre choix : ");
    scanf("%d", &option);

  //  switch (option)
    {
    case 1:
        ajoutercontact(contact, &totalcontacts);
        break;
    case 2:
        affichercontact(contact, totalcontacts);
        break;
    
    default:
        break;
    }
    } while (option != 4);

return 0;     
   
}
