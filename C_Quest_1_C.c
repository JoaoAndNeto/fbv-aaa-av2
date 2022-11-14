#include  <stdio.h>
#include  <conio.h>
#include  <stdlib.h>
#include  <time.h>

int main()
{
  // Definicao de variaveis usadas no programa
   int i, j, aux, trocas, tam=100, igual;
   int vetor[tam];
   
  printf("\n ====== Vetor original ======");
  printf("\n ============================\n\n");
  srand(time(NULL));
  
   for (i = 1; i < 100; i++) {
     vetor[i] = rand() % 1000;
     printf("%d ", rand() % 1000);
   }

   // Ordenacao do vetor na tecnica insertion sort;
   for (i = 1; i < 100; i++)
   {
     
     while (i > 0 && vetor[i - 1] > vetor[i])
     {
       aux = vetor[i];
       vetor[i] = vetor[i - 1];
       vetor[i - 1] = aux;
       i--;
     }
   }

   // Mostra vetor ordenado em insertion sort
   printf("\n\n ====== Ordenacao insertion sort ======");
    printf("\n ======================================\n\n");

   for(i = 1 ;i < 100;i++) 
      printf("%3d ", vetor[i]);
      printf("\n\nForam Realizadas %3d Trocas.\n\n", trocas);
      system("pause");

}

