#include <stdio.h>
#define TAM 300
/*
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.
*/

questaovetorparimpar(int vetor[], int tamanho, int vetpar[], int *tamPAr, int vetImpar[], int *tamImpar)
{
	int i, j = 0, k = 0;
	
	for (i = 0; i < tamanho; i++)
	{
		if (vetor[i] % 2 == 0)
		{
			vetpar[j] = vetor[i];
			j++;
		}
		else
			{
				vetImpar[k] = vetor[i];
				k++;
			}
	}
	
	*tamPAr = j;
	*tamImpar = k; 
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
		v[i] = rand() % 100;
	}
	
	
}


void main ()
{
	int v[TAM];
	int vetpar[TAM];
	int vetimpar[TAM];
	int quantpar, quantimpar;
	
	preencheraleatorio(v, TAM);
	exibir (v, TAM);
	
	questaovetorparimpar(v, TAM, vetpar, &quantpar, vetimpar, &quantimpar);
	
	printf ("PAres.");
	exibir (vetpar, quantpar);
	
	printf ("Impares.");
	exibir (vetimpar, quantimpar);
	
	
	
	
}
