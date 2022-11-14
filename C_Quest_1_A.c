#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Definicao de variaveis usadas no programa
    int i, j, aux, trocas, tam = 100, igual;
    int vetor[tam];

    printf("\n ====== Vetor original ======");
    printf("\n ============================\n\n");
    srand(time(NULL));

    for (i = 1; i < 100; i++) {
       vetor[i] = rand() % 1000;
       printf("%d ", rand() % 1000);

    
    }

    /* bugando o sistema inteiro
    do
    {
        
        for (i = 1; i < 100; i++)
        {
            vetor[i] = rand() % 1000;
            if (vetor[j] == vetor[i])
                
                printf("%d ", rand() % 1000);
            }
    }
    while (i < 100); */
    

    trocas = 0;

    // Ordenacao do vetor na tecnica BubbleSort
    for (i = 1; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if (vetor[j] <= vetor[i])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                trocas++;
            }
        }
    }

    // Mostra vetor ordenado em BubbleSort
    printf("\n\n ====== Ordenacao BubbleSort ======");
    printf("\n ====================================\n\n");

    for (i = 1; i < 100; i++)
        printf("%3d ", vetor[i]);
        printf("\n\nForam Realizadas %d Trocas.\n\n", trocas);
        system("pause");
}