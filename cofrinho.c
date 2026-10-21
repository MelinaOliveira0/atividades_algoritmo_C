include <stdio.h> 
int main() {
    // ---------- Declaracao das variaveis ----------
    int opcao;        
    float total = 0;     
 
    printf("=== COFRINHO DIGITAL ===\n");
 
    // ---------- Laco principal ----------
    do {
        printf("\nQual moeda deseja adicionar?\n");
        printf("1 - R$ 0,50\n");
        printf("2 - R$ 1,00\n");
        printf("3 - R$ 2,00\n");
        printf("0 - Parar e ver o total\n");
        printf("Opcao: ");
        scanf("%d", &opcao); 
 
        // Verifica a opcao e soma o valor da moeda ao total
        if (opcao == 1) {
            total += 0.50; 
            printf("Moeda de R$ 0,50 adicionada!\n");
        } else if (opcao == 2) {
            total += 1.00;
            printf("Moeda de R$ 1,00 adicionada!\n");
        } else if (opcao == 3) {
            total += 2.00;
            printf("Moeda de R$ 2,00 adicionada!\n");
        } else if (opcao != 0) {
            // Se nao foi 1, 2, 3 nem 0, a opcao e invalida
            printf("Opcao invalida! Escolha 1, 2, 3 ou 0.\n");
        }
 
        // Mostra o saldo parcial apos cada escolha (menos ao parar)
        if (opcao != 0) {
            printf("Saldo atual: R$ %.2f\n", total);
        }
 
    } while (opcao != 0); 
 
    // ---------- Resultado final ----------
    printf("\nTotal acumulado no cofrinho: R$ %.2f\n", total);
 
    return 0;
}
 
