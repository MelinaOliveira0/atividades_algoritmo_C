#include <stdio.h>  
 

float calcularTotal(float vendas[], int dias) {
    float total = 0;
    for (int i = 0; i < dias; i++) {
        total += vendas[i];  
    }
    return total;
}
 
// Retorna a media diaria 
float calcularMedia(float total, int dias) {
    return total / dias;
}
 
// Retorna quantos dias tiveram vendas acima da media
int contarVendasAcimaDaMedia(float vendas[], int dias, float media) {
    int contador = 0;
    for (int i = 0; i < dias; i++) {
        if (vendas[i] > media) {
            contador++;   
        }
    }
    return contador;
}
 
int main() {
    float vendas[DIAS];
    float total, media;
    int acima;
 
    // Leitura das vendas de cada dia
    for (int i = 0; i < DIAS; i++) {
        printf("Venda do dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }
 
    // Chamadas das tres funcoes
    total = calcularTotal(vendas, DIAS);
    media = calcularMedia(total, DIAS);
    acima = contarVendasAcimaDaMedia(vendas, DIAS, media);
 
    // Resultados finais
    printf("\nTotal vendido: %.2f\n", total);
    printf("Media diaria: %.2f\n", media);
    printf("Dias acima da media: %d\n", acima);
 
    return 0;  
}
