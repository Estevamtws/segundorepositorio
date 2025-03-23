#include <stdio.h>

int main() {
    char nome[50];  
    int xp;         

    // Entrada de dados
    printf("Digite o nome do herói: ");
    scanf("%49s", nome);  

    printf("Digite a quantidade de XP: ");
    scanf("%d", &xp);  

    
    char nivel[20];

    if (xp < 1000) {
        sprintf(nivel, "Ferro");
    } else if (xp <= 2000) {
        sprintf(nivel, "Bronze");
    } else if (xp <= 5000) {
        sprintf(nivel, "Prata");
    } else if (xp <= 7000) {
        sprintf(nivel, "Ouro");
    } else if (xp <= 8000) {
        sprintf(nivel, "Platina");
    } else if (xp <= 9000) {
        sprintf(nivel, "Ascendente");
    } else if (xp <= 10000) {
        sprintf(nivel, "Imortal");
    } else {
        sprintf(nivel, "Radiante");
    }

    
    printf("O Herói de nome %s está no nível de %s\n", nome, nivel);

    return 0;
}