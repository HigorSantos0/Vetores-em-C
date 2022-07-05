/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computação - FAC
	Turma B
	Data: 22/06/2022
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 03:
	Pede-se a implementação de uma função que, dado um vetor contendo números reais,
	determine se o mesmo encontra-se ordenado de forma crescente.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 10

#define TRUE 1
#define FALSE 0

//protótipos das funções
int questao03 (int vetor[], int tamanho);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	int v2[5] = {1,4,6,7,9};
	
	//preenchendo o vetor v aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor v
	exibir (v, TAM);
	
	//chamando a função para o vetor v
	if (questao03 (v, TAM) == TRUE)
	{
		printf ("\n\nO vetor v esta ordenado!");
	}
	else
	{
		printf ("\n\nO vetor v NAO esta ordenado!");
	}
	
	//exibindo o vetor v2
	exibir (v2, 5);
	
	//chamando a função para o vetor v2
	if (questao03 (v2, 5) == TRUE)
	{
		printf ("\n\nO vetor v2 esta ordenado!");
	}
	else
	{
		printf ("\n\nO vetor v2 NAO esta ordenado!");
	}
	
}

//implementação das funções
int questao03 (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j;
	
	//varrendo o vetor
	for (i=0,j=1;j<tamanho;i++,j++)
	{
		//comparando os elementos das posições 'i' e 'j'
		if (vetor[i] > vetor[j])
		{
			return FALSE;
		}		
	}
	
	return TRUE;
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

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		vetor[i] = rand ()%30;
	}	
}
