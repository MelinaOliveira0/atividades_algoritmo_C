#include <stdio.h>   
 
int main() {
    int estoque[10];          
    int acima20 = 0;          
    int maior;                
    int posMaior = 0;         
 
    // Leitura da quantidade de cada produto
    for (int i = 0; i < 10; i++) {
        printf("Quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }
 
    // Mostrar a quantidade de cada produto
    printf("\n--- Quantidade de cada produto ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Produto %d: %d unidades\n", i + 1, estoque[i]);
    }
 
    // Informar os produtos com estoque baixo 
    printf("\n--- Estoque baixo (menos de 5) ---\n");
    for (int i = 0; i < 10; i++) {
        if (estoque[i] < 5) {
            printf("Produto %d (%d unidades)\n", i + 1, estoque[i]);
        }
    }
 
    // Informar os produtos esgotados 
    printf("\n--- Produtos esgotados ---\n");
    for (int i = 0; i < 10; i++) {
        if (estoque[i] == 0) {
            printf("Produto %d\n", i + 1);
        }
    }
 
    // Contar quantos produtos possuem mais de 20 unidades
    for (int i = 0; i < 10; i++) {
        if (estoque[i] > 20) {
            acima20++;   
        }
    }
    printf("\nProdutos com mais de 20 unidades: %d\n", acima20);
 
    // Descobrir o produto com a maior quantidade em estoque
    maior = estoque[0];  
    for (int i = 1; i < 10; i++) {
        if (estoque[i] > maior) {
            maior = estoque[i];   
            posMaior = i;         
        }
    }
    printf("Maior estoque: produto %d com %d unidades\n", posMaior + 1, maior);
 
    return 0;
}
 
