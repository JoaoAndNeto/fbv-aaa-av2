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

   // Ordenacao do vetor na tecnica selectionsort;
	for (int i = 1; i < 100; i++) {
		
		int i_menor = i;
		for (int j = i + 1; j < 100; j++)
			if (vetor[j] < vetor[i_menor])
				i_menor = j;
		
		int aux = vetor[i];
		vetor[i] = vetor[i_menor];
		vetor[i_menor] = aux;
	
	}		


   // Mostra vetor ordenado em selectionsort
   printf("\n\n ====== Ordenacao selectionsort ======");
    printf("\n ======================================\n\n");

   for(i = 1 ;i < 100;i++) 
      printf("%3d ", vetor[i]);
      printf("\n\nForam Realizadas %d Trocas.\n\n", trocas);
      system("pause");

}

