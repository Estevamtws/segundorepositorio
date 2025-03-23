#include <stdio.h>

const char* VitoriasJogador(int SaldoJogador) {
    if (SaldoJogador < 11) return "ferro";
    else if (SaldoJogador <= 20) return "bronze";
    else if (SaldoJogador <= 30) return "prata";
    else if (SaldoJogador <= 40) return "ouro";
    else if (SaldoJogador <= 50) return "platina";
    else if (SaldoJogador <= 60) return "diamante";
    else if (SaldoJogador <= 70) return "lendario";
    else return "imortal";
}
int main (){
    int vitorias, derrotas, SaldoJogador;
    printf("Digite o numero de vitorias:");
    scanf("%d", &vitorias);
    printf("Digite o numero de derrotas:");
    scanf("%d", &derrotas);
    SaldoJogador = vitorias - derrotas;
    printf("O heroi tem saldo de %d e esta no nivel de %s\n", SaldoJogador, VitoriasJogador(SaldoJogador));
    
    return 0;
    
    
}

