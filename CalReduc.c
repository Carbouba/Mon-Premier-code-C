#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{

double revenu = 0, reduction = 0;

printf("\nEntrez votre revenu annuel : ");
scanf("%lf", &revenu);
if (revenu <= 30000)
{
    reduction = revenu * 0.1;
}
else if (revenu > 30000 && revenu <= 70000)
{
    reduction = revenu * 0.2;
}
else 
{
    reduction = revenu * 0.3;
}

printf("\nVotre reduction est de : %f\n\n", reduction);

    return 0;
}