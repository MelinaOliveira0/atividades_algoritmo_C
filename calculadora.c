#include <stdio.h>  
 
float adicao(float a, float b)        { return a + b; }
float subtracao(float a, float b)     { return a - b; }
float multiplicacao(float a, float b) { return a * b; }
float divisao(float a, float b)       { return a / b; }  
 
int main() {
    float n1, n2;
    int opcao;
 
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
 
    // Menu de operacoes
    printf("\nEscolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
 
    // switch chama a funcao correspondente a opcao escolhida
    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", adicao(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtracao(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicacao(n1, n2));
            break;
        case 4:
            // Verifica se o divisor eh diferente de zero antes de dividir
            if (n2 != 0) {
                printf("Resultado: %.2f\n", divisao(n1, n2));
            } else {
                printf("Erro: nao eh possivel dividir por zero.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");  
    }
 
    return 0; 
}
