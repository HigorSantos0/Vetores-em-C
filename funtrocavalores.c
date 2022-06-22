/*Implementar uma função que, dado um vetor
de reais, troque o 1? e o 2? elementos, em
seguida o 3? e o 4? elementos e assim
sucessivamente, até se chegar ao final do vetor.
*/

#include <stdio.h>
#define TAM 10

void trocarvalores(int vetor[], int tamanho)
{
	int i, j, aux;
	
	for (i = 0, j = 1; j < tamanho;i = i + 2, j = j + 2)
	{
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
}
void exibir (int v[], int tamanho)
{
	int i;
	
	printf ("\n\nElementos do vetor:\n");
	
	for (i = 0; i < tamanho; i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n");
}
void preencheraleatorio(int v[], int tamanho)
{
	int i; 
	
	srand(time(NULL));
	
	for (i = 0; i < tamanho; i++)
	{
		v[i] = rand() % 10;
	}
	
	
}
void main ()
{
	int v[TAM];
	
	exibir (v, TAM);
	preencheraleatorio(v, TAM);
	trocarvalores (v, TAM);
	exibir (v, TAM);
	
	
	
}
