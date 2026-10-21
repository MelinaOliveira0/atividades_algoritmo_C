#include <stdio.h>  
 
int main() {
    // ---------- Declaracao das variaveis ----------
    float consumo;      
    float soma = 0;      
    float media;        
    int i;             
 
    // ---------- Leitura e analise de cada morador ----------
    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo mensal do morador %d (em m3): ", i);
        scanf("%f", &consumo);  
 
       
        if (consumo <= 20) {
            
            printf("Morador %d: consumo DENTRO da media (ate 20 m3).\n\n", i);
        } else {
          
            printf("Morador %d: consumo ACIMA da media (mais de 20 m3).\n\n", i);
        }
 
        // Soma o consumo deste morador ao total
        soma += consumo;
    }
 
    // ---------- Calculo da media geral ----------
    media = soma / 5;
 
    // ---------- Resultado final ----------
    printf("Consumo medio geral: %.2f m3\n", media);
 
    return 0;  
}
