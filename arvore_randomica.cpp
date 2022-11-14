/* Árvore preenchida randomicamente e percorrida em ordem*/
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
 
typedef struct no 
{ 
	int valor; 
	struct no *esquerda, *direita; 
} node, *arvore; 
 
arvore root = NULL;
 
void inserir(arvore *, int);
void imprimir(arvore, int);
void percorre_emordem(node *); 
 
int main(void) 
{ 
	int x, y, opcao, tam=100;
	int vet[tam];
 
	do
	{ 
		printf("\nEntre com a opcao:"); 
		printf("\n ---1:inserir"); 
		printf("\n ---2:imprimir a arvore"); 
		printf("\n ---3:percorrer"); 
		printf("\n ---4:sair do programa\n"); 
		printf("\n-> "); 
		fflush(stdin); 
		scanf("%d", &opcao); 
		switch(opcao) 
		{
			case 1: 
			{
				//printf("\n Informe o valor ->"); 
				//scanf("%d", &x);
				int i;
				for (i = 1; i < 100; i++) 
				{
					vet[i] = rand() % 1000;
		        	//printf("%d ", rand() % 1000);
		        	inserir(&root, x);
				}				 
				break; 
			} 
			case 2: 
			{ 
				imprimir(root, 0); 
				break; 
			}
			case 3: 
			{ 
				printf("\nPercorrendo em ordem ->"); 
				percorre_emordem(root); 
				break; 
			}
		} 
	} while(opcao!=4); 
}
 
void inserir(arvore *p, int chave)
{ 
	if( *p == NULL ) 
	{ 
		*p = (arvore) malloc(sizeof(node)); 
		(*p)->valor = chave; 
		(*p)->esquerda = NULL; 
		(*p)->direita = NULL; 
	} 
	else if((*p)->valor < chave) 
	{ 
		inserir(&((*p)->direita), chave); 
	} 
	else 
	{ 
		inserir(&((*p)->esquerda), chave); 
	} 
	return; 
}
 
void imprimir(arvore v, int nivel) 
{ 
	int i; 
 
	if( v != NULL ) 
	{ 
		imprimir(v->esquerda, nivel+1); 
		for(i=0; i<nivel; i++) 
		{ 
			printf(" "); 
		} 
		printf("%d\n", v->valor); 
		imprimir(v->direita, nivel+1); 
	} 
	return; 
}

/* percorrer a árvore utilizando o modo em-ordem */ 
void percorre_emordem(node * arvore) 
{ 
	if( arvore == NULL ) 
	{ 
		return; 
	} 
	
	percorre_emordem(arvore->esquerda); 
	printf(" %d", arvore->valor); 
	percorre_emordem(arvore->direita); 
	
	return; 
}