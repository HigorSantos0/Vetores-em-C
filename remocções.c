/*
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.
*/
#include <stdio.h>
#define TAM 10

vetremoveelementos(int vet[], int *quant, int valor)
{
	int i, j, cont = 0;;
	
	for (i = 0; i < *quant; i++)
	{
		if (vet[i] == valor)
		{
			for (j = i+1; j < *quant; j++)
			{
				vet[j - 1] = vet[j];
			}
			//atualizando quantidade de elementos no vetor
			(*quant)--;
			
			//atualizando a quantidade de remoções realizadas
			cont++;
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
	int val, cont, quant = TAM;
	int v[TAM];
	
	exibir (v, quant);
	
	printf ("Entre com o valor a ser removido:\n");
	scanf ("%d", val);
	
	cont = vetremoveelementos(v, &quant, val);
	
	exibir (v, quant);
	
	printf ("quantidade de remocoes no vetor = %d\n", cont);
}
