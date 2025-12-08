#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
/*
    int n_b1, n_b2, S, D, P;
    float Q, M;
    //Saisie de données
    printf("Entrez le premier nombre : \n");
    scanf("%d", &n_b1);
    printf("Entrez le deuxieme nombres : \n");
    scanf("%d", &n_b2);

    //Calcule des operations
    S = n_b1 + n_b2;
    D = n_b1 - n_b2;
    P = n_b1 * n_b2;
    Q = n_b1 / n_b2;
    M = n_b1 % n_b2;

    //Affichage de resultats
    printf("Resultats de %d et %d:\nSsomme : %d\nDifference : %d\nProduit : %d\nQuotient : %.2f\nModulo : %.2f",n_b1,n_b2, S, P, D, Q, M);
    */


/*
    int temp, Fah;
    float Kel;

    printf("Entrez la temperature en Celsius :\n");
    scanf("%d", &temp);

    Fah = (temp * 9/5) + 32;
    Kel =  temp + 273.15;

    printf("%d  Celcuis = %d  F\n%d  Celcuis = %.2f K\n",temp, Fah, temp, Kel);
    */


/*
    float note1, note2, NC; 
    float M, MAX, MIN;

    // Saisie sécurisée des trois notes
    do {
        printf("Entrez la premiere note : ");
        scanf("%f", &note1);
        if (note1 < 0 || note1 > 20)
            printf("Note invalide. Entrez une note sur 20.\n");
    } while (note1 < 0 || note1 > 20);

    do {
        printf("Entrez la deuxieme note : ");
        scanf("%f", &note2);
        if (note2 < 0 || note2 > 20)
            printf("Note invalide. Entrez une note sur 20\n");
    } while (note2 < 0 || note2 > 20);

    do {
        printf("Entrez la troisieme note : ");
        scanf("%f", &NC);
        if (NC < 0 || NC > 20)
            printf("Note invalide. Entrez une note sur 20.\n");
    } while (NC < 0 || NC > 20);

    M = (note1+note2+NC)/2;

    MAX =note1;
    if (note2 > MAX)  MAX = note2;
    if (NC > MAX)  MAX = NC;

    MIN = note1;
    if (note2 < MIN)  MIN = note2;
    if (NC < MIN)  MIN = NC;

    printf("- Moyenne : %.2f\n- Note la plus elevee : %.2f\n- Note la plus basse : %.2f\n", M, MAX, MIN);
    */


/*
     float note;

    // Saisie sécurisée des trois notes
    do {
        printf("Entrez la note : ");
        scanf("%f", &note);
        if (note < 0 || note > 20)
            printf("Note invalide. Entrez une note sur 20.\n\n");
    } while (note < 0 || note > 20);

    // Attribution de la mention
    if (note >= 16)
        printf("Vous avez obtenu la mention : Tres bien\n");
    else if (note >= 14)
         printf("Vous avez obtenu la mention : bien\n");
     else if (note >= 12)
         printf("Vous avez obtenu la mention : Assez bien\n");
     else if (note >= 10)
         printf("Vous avez obtenu la mention : Passable\n");
     else
         printf("Vous avez obtenu la mention : Insufisant\n");
    */

/*
    int age;
    char nat[30], caju[30];

    printf("\n\n===Veuillez remplir le formulaire pour passer au vote===\n\n");
    printf("Queslle est votre age : \n");
    scanf("%d", &age);
    printf("Votre nationnalite : \n");
    scanf("%29s", nat);
    printf("Avez vous un casier judiciaire ?\n");
    scanf("%29s", caju);


    //Verification d'informations d'eligiblité
    int erreur = 0;

    if (age < 18)
    {
        printf("Desole vous devez avoir au moins 18 pour voter\n");
            erreur = 1;
    }
    if (strcasecmp(nat, "Nigerienne") != 0 && (nat, "Nigerien") != 0)
    {
        printf("Vous devez etre de nationalite 'Nigerienne\n'");
              erreur = 1;
    }
     if (strcasecmp(caju, "Oui" ) != 0)
     {
        printf("Vous devez disposer d'un casier judiciare pour voter!\n\n");
            erreur = 1;
     }
    
    
     //Affichage du message de confirmation si toutes les conditions remplises
     if (erreur == 0)
     {
        printf("\n\n===Felicitation vous pouvez participer au vote==\n\n");
     }
    */

/*
    //Initialisation des variables
    int nb1, nb2, op, result;

    //Collect de données
    printf("Veuillez saisir le premier nombre : \n");
    scanf("%d", &nb1);
    printf("Veuillez saisir le deuxieme nombre : \n");
    scanf("%d", &nb2);
    printf("Veuillez choisir l'operation a effectuer : \n1.Addition\n2.Soustraction\n3.Produit\n4.Quotient\n");
    scanf("%d", &op);

    //Operation sur les données collectés
    switch (op)
    {
    case 1:
        result = nb1 + nb2;
        break;
    case 2:
        result = nb1 - nb2;
        break;
    case 3:
        result = nb1 * nb2;
        break;
    case 4:
        result = nb1 / nb2;
        break;
    }

    printf("Le resultat est : %d", result);
    */


/*
    //Il s'agit du programme IA
    char motDePasse[20];
    int tentatives = 3;
    int autorise = 0; // 0 = refusé, 1 = accepté

    while (tentatives > 0) {
        printf("Entrez le mot de passe : ");
        scanf("%s", motDePasse);

        if (strcmp(motDePasse, "Secret123") == 0) {
            autorise = 1;
            break;
        } else {
            tentatives--;
            if (tentatives > 0)
                printf("Incorrect. Il vous reste %d tentative%s.\n", tentatives, tentatives == 1 ? "" : "s");
            else
                printf("\nAcces refuse.\n");
        }
    }

    if (autorise)
        printf("\nAcces autorise !\n");
    

    //Il s'agit de mon propre programme
    int autorise = 0,  tentatives = 3;
    char pin[10];

    while (tentatives > 0)
    {
        printf("\nVeuillez saisir votre code PIN (votre PIN doit contenir au moins 4 chiffres) : \n");
        scanf("%9s", pin);

        if (strcmp(pin, "4321") == 0) {
            autorise = 1;
            break;
        }
        else{
            tentatives --;
            if(tentatives > 0){
                printf("\nIncorrect. Il vous reste %d tentative%s\n", tentatives, tentatives == 1 ? "" : "s");
            }
        else{
            printf("\nAccee refuse\n");
        } 
            
        }
    }

    if (autorise ==1)
        {
            printf("\nAccees autorise. Bienvenue !\n");
        }
    */


/*
    int accee = 0, tentatives = 3;
    char ID[10], MDP[10];

    while (tentatives > 0)
    {
        //Demande et recupere l'identifiant et le mote passe
        printf("\nVeuillez saisir votre identifiant : ");
        scanf("%9s", ID);
        printf("\nVeuillez saisir votre mot de passe : ");
        scanf("%9s", MDP);

        //Compare l'identifiant et le mot de passe
        if (strcmp(ID, "admin") == 0 && (strcmp(MDP, "code") == 0))
        {
            accee = 1;
            break;   
        }
        
        //Affiche le message si identifiant ou mot de passe incorect
        else
        {
            //Enleve 1 a la valeur "tentatives"
            tentatives--;
            
            if(tentatives > 0)
                 printf("\nIdentifiant ou mot de passe incorrect.\nIl vous reste %d tentative%s.\n", tentatives, tentatives ==1 ? "": "s");     
             //Affiche message si trop de tentaives
            else 
                printf("\nTrop de tentatives. Acces bloque.\n");
        }
    }
    //Affiche message si identifiant et mot de pasee correcte
    if (accee == 1)
    {
        printf("\nConnexion reussie !\n");
    }
    */


/* 



int N, S = 0;

printf("Veuillez saisir un nombre : ");
scanf("%d", &N);

int i = 0;

while (i < N)
{
    i++;
    printf("%d %s ", i, i < N ? "+" : "" );  
    
    S += i;
}

/*for (int  i = 1; i <= N; i++)
{
    
    printf("%d %s ", i, i < N ? "+" : "" );  
    S += i;
}

printf("= %d", S);

*/


/*
int option = 0;
float R = 0, Kl, kg, C;

do
{
    printf("=== Convertisseur ==\n");
    printf("\n1. Kilometres --> Miles\n2. Kilogrammes --> Livres\n3. Celsius --> Fahrenheit\n4. Quitter\n\nVeuillez choisir une option : ");
    scanf("%d", &option);

switch (option)
{
case 1:
    printf("\n== Conversiont du Kilometres --> Miles ==\n");
    printf("Veuillez entrez la valeur : ");
    scanf("%f", &Kl);
    R = Kl * 0.621371;
    printf("\n%.0f Km vaut %.2f Mi\n\n", Kl, R);
    break;
case 2:
    printf("\n== Conversiont du Kilogrammes --> Livres ==\n");
    printf("Veuillez entrez la valeur : ");
    scanf("%f", &kg);
    R = kg * 2.20462;
    printf("\n%.0f Kg vaut %.2f Ib\n\n", kg, R);
    break;
case 3:
    printf("\n== Conversiont du Celsius --> Fahrenheit ==\n");
    printf("Veuillez entrez la valeur : ");
    scanf("%f", &C);
    R = C * 1.8 + 32;
    printf("\n%.0f degres Celsius font %.2f degres Fahrenheit\n\n", C, R);
    break;

default:
    break;
}
} while (option <= 3);

printf("\n\nVous avez quiter !\n\n");
    
*/


int N, T;


printf("Veuillez saisir un nombre pour afficher sa table : ");
scanf("%d", &N);

for (int i = 0; i <= 10; i++)
{
    T = N * i; 
    printf("%d x %d = %d\n", N, i, T);
}

    return 0;
}