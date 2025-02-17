#include <stdio.h>

#define TAM 10

int main()
{
    int tabuleiro[TAM][TAM] = {0};
    int escolha, x, y;

    printf("Escolha uma opcao:\n");
    printf("1 - Aplicar habilidade Cone\n");
    printf("2 - Aplicar habilidade Cruz\n");
    printf("3 - Aplicar habilidade Octaedro\n");
    printf("4 - Mostrar tabuleiro zerado\n");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= 3)
    {
        printf("Digite as coordenadas [x] e [y] (0-%d): ", TAM - 1);
        scanf("%d  %d", &x, &y);

    }
    switch (escolha)
    {
    case 1:
        if (x >= 2 && y >= 1 && y < TAM - 1)
        {
            tabuleiro[x][y] = 1;
            tabuleiro[x - 1][y - 1] = 1;
            tabuleiro[x - 1][y] = 1;
            tabuleiro[x - 1][y + 1] = 1;
            tabuleiro[x - 2][y] = 1;
        }
        break;
    case 2:
        if (x > 0 && x < TAM - 1 && y > 0 && y < TAM - 1)
        {
            tabuleiro[x][y] = 1;
            tabuleiro[x - 1][y] = 1;
            tabuleiro[x + 1][y] = 1;
            tabuleiro[x][y - 1] = 1;
            tabuleiro[x][y + 1] = 1;
        }
        break;
    case 3:
        if (x > 0 && x < TAM - 1 && y > 0 && y < TAM - 1)
        {
            tabuleiro[x][y] = 1;
            tabuleiro[x - 1][y] = 1;
            tabuleiro[x + 1][y] = 1;
            tabuleiro[x][y - 1] = 1;
            tabuleiro[x][y + 1] = 1;
            if (x > 1)
                tabuleiro[x - 2][y] = 1;
            if (x < TAM - 2)
                tabuleiro[x + 2][y] = 1;
            if (y > 1)
                tabuleiro[x][y - 2] = 1;
            if (y < TAM - 2)
                tabuleiro[x][y + 2] = 1;
        }
        break;
    case 4:

        break;
    default:
        printf("Opcao invalida!\n");
        return 1;
    }
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
