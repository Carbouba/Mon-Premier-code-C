#include <stdio.h>

int main(void)

{ 
    int a = 8, b = 2;
    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    float quotient = a / b;
    int modulo = a % b;
    
    printf("%d\n", somme);
    printf("%d\n", difference);
    printf("%d\n", produit);
    printf("%.2f\n", quotient);
    printf("%d\n", modulo);
    
    return  0;

}