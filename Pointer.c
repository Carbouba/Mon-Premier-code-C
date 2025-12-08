
#include <stdio.h>


/*
void echange(int *a, int *b) {
    // 1. Sauvegarde la valeur de 'a' dans une variable temporaire 'temp'
    int temp = *a;

    // (Rappel : la valeur de a, c'est *a)
    
    // 2. Mets la valeur de 'b' dans 'a'
    *a = *b;
    
    // 3. Mets la valeur de 'temp' (la vieille valeur de a) dans 'b'
    *b = temp;
    
}

int main() {
    int a;
    int b;

    printf("Veuillllez saisir la valeur de a : ");
    scanf("%d", &a);
    printf("Veuillllez saisir la valeur de b : ");
    scanf("%d", &b);
    
    printf("Avant : a = %d, b = %d\n", a, b);

    // J'envoie les adresses de x et y
    echange(&a, &b);

    printf("Apres : a = %d, b = %d\n", a, b);
    return 0;
}*/



void afficherTableau(int notes[], int taille){

    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", notes[i]);
    }
    
}

float CalculeMoyenne(int notes[], int taille){

    float Resultat;
    int Somme = 0;

    for(int i = 0; i < taille; i++){
        Somme += notes[i];
    }

    Resultat = (float)Somme / taille;

    return Resultat;
}


int main(void){

    float Resultat;

    int notes[] = {10, 20, 19, 12, 5};
    afficherTableau(notes, 5);
    Resultat = CalculeMoyenne(notes, 5);

    printf("\nLa moyenne des tableaux est = %.2f\n", Resultat);

    return 0;
}
    





