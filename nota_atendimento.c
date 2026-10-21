#include <stdio.h> 
int main() {
    // ---------- Declaracao das variaveis ----------
    float nota;         
    float soma = 0;     
    float media;   
    int i;        
 
    // ---------- Leitura das notas ----------
    for (i = 1; i <= 10; i++) {
 
        // Repete a leitura enquanto a nota estiver fora do intervalo 0 a 10
        do {
            printf("Digite a nota de atendimento do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);
 
            if (nota < 0 || nota > 10) {
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            }
        } while (nota < 0 || nota > 10);
 
        // Soma a nota valida ao total
        soma += nota;
    }
 
    // ---------- Calculo da media geral ----------
    media = soma / 10;
 
    // ---------- Resultado final ----------
    printf("\nNota media do atendimento: %.2f\n", media);
 
    // Se a media for menor que 7, exibe a mensagem de alerta
    if (media < 7) {
        printf("ALERTA: a media esta abaixo de 7! O atendimento precisa melhorar.\n");
    }
 
    return 0; 
}
