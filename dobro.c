#include <stdio.h>  
 

int calcularDobro(int numero) {
    return numero * 2;   
}
 
int main() {
    int n, dobro;
 
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);               
 
    dobro = calcularDobro(n);      
    printf("O dobro de %d eh %d\n", n, dobro);
 
    return 0;  
}
 
