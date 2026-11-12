#include <stdio.h>  
 
// Funcao que exibe a tabuada de 1 a 10 do numero recebido
void mostrarTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
 
int main() {
    int n;
 
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
 
    printf("\nTabuada do %d:\n", n);
    mostrarTabuada(n);   
 
    return 0;
}
