#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int matriz[3][3],matriz2[3][3], somalinha1[3], soma, somacoluna1[3];
    int valores[3];
    int i, j;

    printf("\n");
    //Para gerar a matriz
    printf("Indique a matriz 1 :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Indique o local: LINHA[%d] - COLUNA[%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("Indique a matriz 2 :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Indique o local: LINHA[%d] - COLUNA[%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    printf("\n");
    printf("Indique os valores a serem multiplicados, em linha:\n");
    for(j = 0; j < 3; j++)
        {
            printf("Indique o valor [%d]:",j+1);
            scanf("%d", &valores[j]);
        }
    //Para somar linha
    for(i = 0; i < 3; i++)
    {
        soma = 0;
        for(j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
        somalinha1[i] = soma;
    }
    //Para somar coluna
    for(j = 0; j < 3; j++)
    {
        soma = 0;
        for(i = 0; i < 3; i++)
        {
            soma += matriz[i][j];
        }
        somacoluna1[j] = soma;
    }
    //Para mostrar a matriz 1 sem alteração.
    printf("\n");
    printf("Matriz 1:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d |", matriz[i][j]);
        }
        printf("\n");
    }
    //Para mostrar a matriz 2 sem alteração.
    printf("\n");
    printf("Matriz 2:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d |", matriz2[i][j]);
        }
        printf("\n");
    }
    //Para ver se as duas matrizes são iguais
    printf("\n");
    printf("Comparando as matrizes:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matriz[i][j] == matriz2[i][j])
            {
                printf("1 |");
            }
            else
            {
                printf("0 |");
            }
        }
        printf("\n");
    }
    //Calculo depois pra multiplicar a matriz 1:
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matriz[i][j] *= valores[i];
        }
    }
    printf("\n");
    printf("Matriz 1 multiplicada:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d |", matriz[i][j]);
        }
        printf("%d", valores[i]);
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 3; i++)
    {
        printf("\n Resultado da soma da linha matriz 1: [%d]: %d", i+1, somalinha1[i]);
    }
    for(i = 0; i < 3; i++)
    {
        printf("\n Resultado da soma da coluna matriz 1: [%d]: %d", i+1, somacoluna1[i]);
    }
}

