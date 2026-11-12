#include <stdio.h>   
 
int main() {
    int numeros[10];     
    int procurado;     
    int quantidade = 0;  
 
    // Leitura dos 10 numeros inteiros
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);  
    }
 
    // Leitura do numero a ser pesquisado
    printf("Digite um numero para pesquisar: ");
    scanf("%d", &procurado);
 
    // Primeira passada: conta quantas vezes o numero aparece
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == procurado) {
            quantidade++;   
        }
    }
 
    // Resultado
    if (quantidade == 0) {
        printf("O numero %d nao foi encontrado.\n", procurado);
    } else {
        printf("O numero %d foi encontrado %d vezes.\n", procurado, quantidade);
 
        // Mostra as posicoes onde o numero foi encontrado
        
        printf("Posicoes: ");
        int primeiro = 1;   
        for (int i = 0; i < 10; i++) {
            if (numeros[i] == procurado) {
                if (!primeiro) {
                    printf(", ");  
                }
                printf("%d", i);
                primeiro = 0;
            }
        }
        printf("\n");
    }
 
    return 0; 
}
