#include <stdio.h>
#define TAM 10
/*
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.
*/

int contnumocorrencias (int vet[], int tamanho, int valor)
{
	int i, cont = 0;
	
	for (i = 0; i < tamanho; i++)
	{
		if (vet[i] == valor)
		{
			cont++;
		}
	}
	
	return cont;	
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

void main()
{
	
	int vetor[TAM];
	int valor, quantidade;
	
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%d", &valor);
	
	preencheraleatorio (vetor, TAM);
	exibir (vetor, TAM);
	
	quantidade = contnumocorrencias (vetor, TAM, valor);
	printf ("Numero de numeros iguais ao valor x = %d\n", quantidade);
	
}
