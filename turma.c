#include <stdio.h> 

float calcularMediaTurma(float notas[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    return soma / n;
}
 
// Retorna a maior nota registrada
float encontrarMaiorNota(float notas[], int n) {
    float maior = notas[0];       
    for (int i = 1; i < n; i++) {
        if (notas[i] > maior) {
            maior = notas[i];       
        }
    }
    return maior;
}
 
// Retorna quantos alunos tem nota maior ou igual a 7,0
int contarAprovados(float notas[], int n) {
    int aprovados = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 7.0) {
            aprovados++;
        }
    }
    return aprovados;
}
 
// Unica funcao que imprime: apresenta os resultados ja calculados
void exibirResultados(float media, float maior, int aprovados) {
    printf("\n--- Resultados da turma ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Alunos aprovados: %d\n", aprovados);
}
 
int main() {
    float notas[ALUNOS];
 
    // Leitura das notas
    for (int i = 0; i < ALUNOS; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
 
    // Calculos feitos pelas funcoes, que apenas retornam os valores
    float media = calcularMediaTurma(notas, ALUNOS);
    float maior = encontrarMaiorNota(notas, ALUNOS);
    int aprovados = contarAprovados(notas, ALUNOS);
 
    // Exibe tudo de uma vez
    exibirResultados(media, maior, aprovados);
 
    return 0; 
}
