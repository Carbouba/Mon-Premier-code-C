#include <stdio.h>

int main(void)
{
    int annee;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    // Test des conditions pour savoir si l'année est bissextile
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
    {
        printf("L'annee %d est bissextile.\n", annee);
    }
    else
    {
        printf("L'annee %d n'est pas bissextile.\n", annee);
    }

    return 0;
}