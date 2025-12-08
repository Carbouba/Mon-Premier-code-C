#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float temperature;

    printf("Entrez les degres en Celsius : ");
    scanf("%f", &temperature);
    printf("%.2f degres Celsius font %.2f degres Fahrenheit\n", 
           temperature, temperature * 1.8 + 32);

    return 0;
}