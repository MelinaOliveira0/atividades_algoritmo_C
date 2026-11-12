#include <stdio.h>  
 
void mostrarSaudacao();
 
int main() {
    // Chamando a mesma funcao tres vezes
    mostrarSaudacao();   
    mostrarSaudacao();   
    mostrarSaudacao(); 
 
    return 0;  
}

void mostrarSaudacao() {
    printf("Bem-vindo ao mundo das funcoes em C!\n");
}
