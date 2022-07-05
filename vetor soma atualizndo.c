/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computação - FAC
	Turma B
	Data: 22/06/2022
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 04:
	Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte 
	sequência:

						S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 
	2º e 3º é igual a 2, entre o 3º e o 4º é igual a 3, e assim sucessivamente.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 50

#define TRUE 1
#define FALSE 0

//protótipos das funções
void questao04 (int vetor[], int tamanho);

void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
		
	//chamando a função
	questao04 (v, TAM);

	//exibindo o vetor v
	exibir (v, TAM);
}

//implementação das funções
void questao04 (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j = 1;
	
	vetor[0] = 1;
	
	//preenchendo as demais posições do vetor
	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1]+j;
		j++;
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
