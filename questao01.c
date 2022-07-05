#include <stdio.h>

int numerodeocorrencias (int valor, int vetor[], int tamanho)
{
	int i, cont = 0;
	
	for (i = 0; i < tamanho; i++)
	{
		if (vetor[i] == valor)
		{
			cont++;
		}
	}
	return cont;
}

void main()
{
	int vet[10] = {1, 2, 3, 5, 2, 5, 6, 2, 1, 9};
	int val = 1, quant; 
	
	quant = numerodeocorrencias (val, vet, 10);
	
	printf ("O valor: %d se repete: %d vezes\n", val, quant);
	
	
}
