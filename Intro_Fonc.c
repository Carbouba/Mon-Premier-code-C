#include <stdio.h>
#include <stdlib.h>


/*
//Declaration de la fonction muliti ade type enntier avec argument "a" et "b".
void multi(int a, int b){

    //Insctruction : permet d'afficher le nombre "a" "b" fois.
    for(int i = 1; i <= b; i++){
        printf("%d%s ", a, i < b ? "," : "");
    }

   
}

int main(void)

{
    //Declaration des variables pour stocker les valeurs de "a" et de "b".
   int a, b;

   //Lecture et ecriture des valeurs "A" et "b".
    printf("\nVeuillez saisir la valeur de a :");
    scanf("%d", &a);
    printf("Veuillez saisir la valeur de b :");
    scanf("%d", &b);

    //Recupere les valeurs de "a" et "b" saisi par l'utiliisateur.
   multi(a, b);
  
   








    return 0;
}
    */




/**
//Fonction global qui sera utiliser pour afficher le resultat dans toutes le options de conversions
float R = 0;

//Foction pour convertir le Kl
float convekil(float Kl){
    printf("\n== Conversion du Kilometres --> Miles ==\n");
    printf("Veuillez entrez la valeur : ");
    scanf("%f", &Kl);
    R = Kl * 0.621371;
    printf("\n%.0f Km vaut %.2f Mi\n\n", Kl, R);

    return R;
}

//Foction pour convertir le Kg
float convekg(float Kg){
    printf("\n== Conversiont du Kilogrammes --> Livres ==\n");
    printf("Veuillez entrez la valeur : ");
    scanf("%f", &Kg);
    R = Kg * 2.20462;
    printf("\n%.0f Kg vaut %.2f Ib\n\n", Kg, R);

    return R;
}

//Foction pour convertir le Celcuis
float convecl(float C){
    printf("\n== Conversiont du Celsius --> Fahrenheit ==\n");
    printf("Veuillez entrez la valeur : ");
    scanf("%f", &C);
    R = C * 1.8 + 32;
    printf("\n%.0f degres Celsius font %.2f degres Fahrenheit\n\n", C, R);

    return R;
}



int main(void)
{

    int option;
    do
{
    printf("=== Convertisseur ==\n");
    printf("\n1. Kilometres --> Miles\n2. Kilogrammes --> Livres\n3. Celsius --> Fahrenheit\n4. Quitter\n\nVeuillez choisir une option : ");
    scanf("%d", &option);

switch (option)
{
case 1:
   convekil(R);
    break;
case 2:
   convekg(R);
    break;
case 3:
    convecl(R);
    break;

default:
    break;
}
} while (option >= 1 && option <= 3 );

printf("\n\nVous avez quiter !\n\n");





    return 0;
}
    */

float convedev(int montant){

    
    float R;
 
  
    R = montant / 655.0;

    return R;
}

int main(void)
{
    int cfa;
    float conveuro;

    printf("\n== Conversion du CFA --> EURO ==\n");
    printf("Veuillez entrez le montant en CFA : ");
    scanf("%d", &cfa);
 

    conveuro = convedev(cfa);
    
    printf("%d Cfa vaut %.2f Euros", cfa, conveuro);
    return 0;
}

