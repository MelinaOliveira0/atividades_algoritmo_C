#include <stdio.h>   

int calcularTotalEstoque(int estoque[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += estoque[i];
    }
    return total;
}
 
// Retorna quantos produtos tem menos de cinco unidades
int contarEstoqueBaixo(int estoque[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (estoque[i] < 5) {
            contador++;
        }
    }
    return contador;
}
 
// Recebe o vetor e o codigo do produto 
int buscarProduto(int estoque[], int n, int codigo) {

    if (codigo >= 1 && codigo <= n) {
        return codigo - 1;  
    }
    return -1;              
}
 
int main() {
    int estoque[PRODUTOS];
    int codigo, pos;
 
    // Leitura das quantidades em estoque
    for (int i = 0; i < PRODUTOS; i++) {
        printf("Quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }
 
    // Resultados das funcoes de calculo
    printf("\nTotal em estoque: %d\n", calcularTotalEstoque(estoque, PRODUTOS));
    printf("Produtos com estoque baixo (< 5): %d\n", contarEstoqueBaixo(estoque, PRODUTOS));
 
    // Busca de um produto pelo codigo
    printf("\nDigite o codigo do produto para buscar: ");
    scanf("%d", &codigo);
 
    pos = buscarProduto(estoque, PRODUTOS, codigo);
 
    if (pos == -1) {
        printf("Produto nao encontrado.\n");
    } else {
        printf("Produto %d esta na posicao %d do vetor e tem %d unidades.\n",
               codigo, pos, estoque[pos]);
    }
 
    return 0;  
}
