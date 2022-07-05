/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computação - FAC
	Turma B
	Data: 22/06/2022
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 02:
	Implementar uma função que, dado um vetor de reais, troque o 1º e o 2º elementos, 
	em seguida o 3º e o 4º elementos e assim sucessivamente, até se chegar ao final 
	do vetor.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 9

//protótipos das funções
void questao02 (int vetor[], int tamanho);
void trocarelementos(int vet[], int i, int j);
void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	
	//preenchendo o vetor aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor antes das trocas
	exibir (v, TAM);
	
	//chamando a função
	questao02 (v, TAM);
	
	//exibindo o vetor depois das trocas
	exibir (v, TAM);
}

//implementação das funções
void questao02 (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j, aux;
	
	for (i=0,j=1;j<tamanho;i=i+2,j=j+2)
	{
		//trocar os elementos das posições 'i' e 'j'
		/*aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		*/
		trocarelementos(vetor, i, j);
	}
}
void trocarelementos(int vet[], int i, int j)
{
	int aux = vet[i];
	
	vet[i] = vet[j];
	vet[j] = aux;
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
