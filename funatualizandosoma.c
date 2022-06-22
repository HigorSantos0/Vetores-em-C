#include <stdio.h>
#define TAM 50

/*Fazer uma função que armazene em um vetor
os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...
*/

void funvetatualizandosoma(int vet[], int tamanho)
{
	int i, j = 1;
	
	vet[0] = 1;
	
	for (i = 1; i < tamanho; i++)
	{
		vet[i] = vet[i - 1]+j;
		j++;
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
void main ()
{
	int v[TAM];
	
	
	funvetatualizandosoma(v, TAM);
	exibir (v, TAM);
}
