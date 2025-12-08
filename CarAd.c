#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct P //Structure d'un contact
{
    char nom[30];
    char telephone[20];
    char email[40];
}P;

void ajoutercontact(P contact[], int *totalContacts) //Fonction pour ajouter un contact
{
    printf("\n\n======= Ajout d'un nouveau contact =======\n\n");
    
    printf("Nom : ");
    scanf(" %[^\n]" ,contact[*totalContacts].nom);

    printf("Telephone : (+227) ");
    scanf(" %[^\n]", contact[*totalContacts].telephone);

    printf("Email : ");
    scanf(" %[^\n]", contact[*totalContacts].email);

    (*totalContacts)++;

     printf("\n\n=== Nouveu contact ajouter avec succee ! ===\n\n");
}

void affichecontacts(P contact[], int totalContacts) //Fonction pour afficher tous les contacts
{
    if(totalContacts == 0) //Si aucun contact n'est encore enregistré
    {
        printf("\n\n===Aucun contact enregistrer pour le moment.===");
        return;
    }
    printf("\n\n=== Liste de tous les contact ===\n\n");
    printf("\n%d contact(s) touvees\n", totalContacts);
    for (int i = 0; i < totalContacts; i++)
    {
        printf("\n\nConatact %d\n", i+1);
        printf("Nom : %s\n", contact[i].nom);
        printf("Telephone : (+227) %s\n", contact[i].telephone);
        printf("Email : %s\n\n", contact[i].email);
    }
    
}

void recherche(P contact[], int totalContacts) //Recherche un contact dans la liste
{
    if(totalContacts == 0) //Si aucun contact n'est encore enregistré
    {
        printf("\n\n===Aucun contact enregistrer pour le moment.===");
        return;
    }

    char nomrechercher[30];
    int trouve = 0;

    printf("\n==== Rechercher un contact ===\n");
    printf("\nEntrez le nom du contact a rechercher : ");
    scanf("%29s", nomrechercher);

    for (int i = 0; i < totalContacts; i++)
    {
        if (_stricmp(contact[i].nom, nomrechercher) == 0)
        {
            printf("\n\n=== Contact  trouve ! ====\n\n");
            printf("\nNom : %s", contact[i].nom);
            printf("\nTelephone : %s", contact[i].telephone);
            printf("\nEmail : %s", contact[i].email);

            trouve = 1;
            break;
        }
        
    }

    if (!trouve)
    {
        printf("\n\nAucun conatact du nom %s n'a ete trouve.\n\n", nomrechercher);
    }
}

void supprimerContact(P contact[], int *totalContacts) //Fonction pour supprimer un contact
{
    if (*totalContacts == 0) {
        printf("\n\n=== Aucun contact enregistre pour le moment. ===\n");
        return;
    }

    char nomSupprimer[30];
    int trouve = -1;

    printf("\n==== Supprimer un contact ===\n");
    printf("Entrez le nom du contact à supprimer : ");
    scanf("%29s", nomSupprimer);

    // Recherche du contact
    for (int i = 0; i < *totalContacts; i++) {
        if (_stricmp(contact[i].nom, nomSupprimer) == 0) { // insensible à la casse
            trouve = i;
            break;
        }
    }

    if (trouve == -1) {
        printf("\nAucun contact du nom %s n a ete trouve.\n", nomSupprimer);
        return;
    }

    // Décalage des contacts suivants
    for (int i = trouve; i < *totalContacts - 1; i++) {
        contact[i] = contact[i + 1];
    }

    (*totalContacts)--; // décrémenter le compteur
    printf("\nContact supprimé avec succès !\n");
}

void sauvegarde(P contact[], int totalContacts)
{
    FILE *moncahier;

    moncahier = fopen("mes_contacts.csv", "a");

    if (moncahier == NULL)
    {
        printf("===\n Errreur lors de la sauvegarde du contact ===\n");
    }
    
    fprintf(moncahier, "Nom; Telephone; Email");

    for (int i = 0; i < totalContacts; i++)
    {
        fprintf(moncahier, "\n%s; %s; %s\n", contact[i].nom, contact[i].telephone, contact[i].email);
    }

    fclose(moncahier);

    //printf("\n\n==== Contact(s) Sauvegarder avec succee ! ====\n\n");
    
    
}

int main(void) //Fonction principale
{
    P contact[100]; //Tableau pouvant contenir jusqu'a 100 contancts
    int totalContacts = 0; //Compteur du nombres de contacts ajoutés

    int option;

    do //Boucle pour afficher le menu et recupere le choix de l'utilisateeur et l'execute
    {
        printf("\n\n=== MENU CARNET D'ADRESSES===\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Supprimer un contact\n");
        printf("5. Quitter\n");

        printf("\nFaites votre choix : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            ajoutercontact(contact, &totalContacts );
            sauvegarde(contact, totalContacts);
            break;
        case 2:
            affichecontacts(contact, totalContacts );
            break;
         case 3:
            recherche(contact, totalContacts );
            break;
        case 4:
            supprimerContact(contact, &totalContacts );
            break;
        case 5:
            
            break;
       
        
        default:
            printf("\n\nOption invalide ! Veuillez choisir entre 1 et  5.");
            break;
        }
    } while (option != 5);

    

    
    return 0;
}