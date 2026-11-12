#include <stdio.h>   
 
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}
 
void verificarSituacao(float media) {
    if (media >= 7.0) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}
 
int main() {
    float nota1, nota2, nota3, media;
 
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
 
    media = calcularMedia(nota1, nota2, nota3);  
    printf("Media: %.2f\n", media);
 
    verificarSituacao(media);                   
 
    return 0;  
}
 
