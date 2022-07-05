/*
Fazer uma função que, dado um vetor com quant
números reais, determine:
i. O maior valor das posições pares;
ii. A quantidade de números positivos nas posições
ímpares.
*/
#include <stdio.h>
#define TAM 5
int vetormaiorval(int vetor[], int tamanho, int *maiorvalor, int *quant)
{
	int i, maior = -1, quantidade = 0;
	
	for (i = 0; i < tamanho; i++)
	{
		if(i % 2 == 0)
		{
			if (vetor[i] > maior)
			{	
				maior = vetor[i];
			}	
		}
		else
			{
				if (i % 2 != 0)
				{
					quantidade++;
				}
			}
	}

	
	
	*maiorvalor = maior;
	*quant = quantidade;
	
	
}
void preencherAleatorioCrescente (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%5;
	}	
}
void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
void main()
{
	int vetor[TAM], maior, quant, resp;
	
	preencherAleatorioCrescente (vetor, TAM);
	exibir (vetor, TAM);
	resp = vetormaiorval(vetor, TAM, &maior, &quant);
	
	printf ("Maior valor entre os pares:%d\n", maior);
	
	printf ("quantidade de positivos na posicao impar:%d\n", quant);
	
	
}
