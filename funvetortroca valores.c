/*Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.
*/
#include <stdio.h>
#define TAM 10

vettrocaposi(int vet[], int tamanho, int valorA, int valorB)
{
	int i, aux;
	
	for (i = 0; i < tamanho; i++)
	{
		if (vet[i] == valorA)
		{
			vet[i] = valorB;
		}
		
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
	int valA, valB;
	
	preencheraleatorio(v, TAM);
	exibir (v, TAM);
	
	
	printf ("ENtre com o valor do B:\n");
	scanf ("%d", &valB);
	
	preencheraleatorio(v, TAM);
	
	exibir (v, TAM);
	
}
