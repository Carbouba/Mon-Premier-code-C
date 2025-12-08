#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
    
    const char *ID[3] = {"admin", "boubacar", "invite"};
    const char *MDP[3] = {"code2025", "niger2025", "guest"};
    char id[20], mdp[20];
    int autorise = 0, tentatives = 3;

    while (tentatives > 0)
    {
    
        printf("\nVeuillez saisir votre identifiant : ");
        scanf("%19s", id);
        printf("\nVeuillez saisir votre mot de passe : ");
        scanf("%19s", mdp);

    
        for(int i = 0; i < 3; i++)
    {
        if(strcmp(id, ID[i]) == 0 && strcmp(mdp, MDP[i]) == 0)
        { 
            autorise = 1;
            break;
        }
    }
        if(autorise)
        {
            printf("\nConnexion reussie ! Bienvenue %s.\n", id);
            break;
        }

    
        
        else   {
             tentatives--;
            if (tentatives > 0)
            {
                 printf("\nIdentifiant ou mot de passe incorrect.\nIl vous reste %d tentative%s.", tentatives, tentatives == 1 ? "" : "s");
            }
            else
            {
                printf("\nTrop de tentatives. Acces bloque.\n");
            }
        }
        

    }   








    return 0;
}