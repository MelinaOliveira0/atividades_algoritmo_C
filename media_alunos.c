#include <stdio.h>   
 
int main() {
   
    float notas[3][4];
 
    // Laco externo
    for (int i = 0; i < 3; i++) {
        float soma = 0;  
 
        // Laco interno
        for (int j = 0; j < 3; j++) {
            printf("Aluno %d - nota %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);   
            soma += notas[i][j];         
        }
 
        
        notas[i][3] = soma / 3;
    }
 
    // Exibe o cabecalho da tabela
    printf("\n         nota1  nota2  nota3  media\n");
 
    // Laco externo
    for (int i = 0; i < 3; i++) {
        printf("Aluno%d ", i + 1);    
 
        // Laco interno
        for (int j = 0; j < 4; j++) {
            printf("%6.1f ", notas[i][j]); 
        }
 
        printf("\n");  
    }
 
    return 0; 
}
