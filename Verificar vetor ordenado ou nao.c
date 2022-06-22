/*
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.
*/
#include <stdio.h>
#define TAM 10
#define TRUE 1
#define FALSE 0;

vordenadocres(int vetor[], int tamanho)
{
	int i, j;
	
	for (i = 0, j = 1; j < tamanho;i++, j++)
	{
		if (vetor[i] > vetor[j])
		{
			return FALSE;
		}	
			
	}
	
	return TRUE;
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
	int v2[5] = {1, 4, 6, 7, 9};
	
	preencheraleatorio(v, TAM);
	exibir (v, TAM);
	
	
	if (vordenadocres(v, TAM) == TRUE)
	{
		printf ("Esta ordenado:\n");
	}
	else
		{
			printf ("NAo esta ordenado");
		}
		exibir (v2, 5);
	
	if (vordenadocres(v2, 5) == TRUE)
	{
		printf ("VEtor esta ordenado");
	}
	else
		{
			printf ("NAo esta");
		}
	
	
}



