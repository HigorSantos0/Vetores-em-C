/*
Fazer um função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.
*/

#include <stdio.h>
#define CAP1 10
#define CAP2 6


int vetconjuntos(int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC)
{
	int i, j, k;
	
	//copiando os elementos de B para C. Poderia ser também de A para C
	
	for (i = 0; i < quantB; i++)
	{
		vetC[i] = vetB[i];
	}
	
	//copiando os elementos de A que nao estejam em B
	
	for (j = 0; j < quantA; j++)
	{
		if (busca (vetB, quantB, vetA[j]) == -1)
		{
			//inserindo vetA[j] no vetor vetC
			vetC[i] = vetA[j];
			i++;
		}
	}
	//retornando tamanho do vetor união
	
	*quantC = i;
	
}
void exibir(int vet[], int tamanho)
{
	int i;
	
	for (i = 0; i < tamanho; i++)
	{
		printf ("%d ", vet[i]);
	}
	printf ("\n\n");
}
int busca(int vet[], int quant, int x)
{
	int i;
	
	for (i = 0; i < quant; i++)
	{
		if (vet[i] == x)
		{
			return i;
		}
					
	}
	return -1;
	
	
}
void main()
{
	int vetorA[CAP1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
	int vetorB[CAP2] = {10, 5, 20, 35, 67, 1};
	int vetorC[CAP1 + CAP2];
	int tamanho;
	
	printf ("Primeiro vetor:\n");
	exibir(vetorA, CAP1);
	
	printf ("Segundo Vetor:\n");
	exibir(vetorB, CAP2);
	
	vetconjuntos(vetorA, CAP1, vetorB, CAP2, vetorC, &tamanho);
	
	printf ("Uniao dos vetores com excessao dos iguais:\n");
	exibir(vetorC, tamanho);
	
}
