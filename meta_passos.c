#include <stdio.h> 
int main() {
    // ---------- Declaracao das variaveis ----------
    int passos;         
    int total = 0;      
    int horas = 0;      
 
    printf("=== META DIARIA: 10000 PASSOS ===\n\n");
 
    // ---------- Laco principal ----------
    while (total < 10000) {
        horas++;  
 
        // Le os passos dados nesta hora
        printf("Digite a quantidade de passos da hora %d: ", horas);
        scanf("%d", &passos);
 
        // Soma os passos da hora ao total
        total += passos;
 
        // Mostra o progresso parcial
        printf("Total acumulado: %d passos\n\n", total);
    }
 
    // ---------- Resultado final ----------
    printf("Meta atingida! Voce deu %d passos.\n", total);
    printf("Horas necessarias: %d\n", horas);
 
    return 0; 
}
 
