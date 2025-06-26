
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int posicao_valida(char letra, int numero) {
    return (letra >= 'a' && letra <= 'h') && (numero >= 1 && numero <= 8);
}

int main() {
    char origem_col, destino_col;
    int origem_lin, destino_lin;

    printf("Digite a posição de origem (ex: b1): ");
    scanf(" %c%d", &origem_col, &origem_lin);

    printf("Digite a posição de destino (ex: c3): ");
    scanf(" %c%d", &destino_col, &destino_lin);

    origem_col = tolower(origem_col);
    destino_col = tolower(destino_col);

    if (!posicao_valida(origem_col, origem_lin) || !posicao_valida(destino_col, destino_lin)) {
        printf("Posição inválida.\n");
        return 1;
    }

    int dx = abs(destino_col - origem_col);
    int dy = abs(destino_lin - origem_lin);

    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
        printf("SIM, o cavalo pode se mover para essa posição.\n");
    } else {
        printf("NÃO, o cavalo NÃO pode se mover para essa posição em um único lance.\n");
    }

    return 0;
}
