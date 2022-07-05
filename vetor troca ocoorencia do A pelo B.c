/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computação - FAC
	Turma B
	Data: 22/06/2022
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 06:
	Faça uma função que, dado um vetor de reais, altere todas as ocorrências do 
	número A pelo número B.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 10

//protótipos das funções
void questao06 (int vetor[], int tamanho, int A, int B);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	int valor1, valor2;
		
	//preenchendo o vetor aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor
	exibir (v, TAM);
	
	//lendo os valores
	printf ("\n\nEntre com o valor a ser alterado: ");
	scanf ("%d", &valor1);
	
	printf ("\n\nEntre com o novo valor: ");
	scanf ("%d", &valor2);
		
	//chamando a função 
	questao06 (v, TAM, valor1, valor2);
	
	//exibindo o vetor após as alterações
	exibir (v, TAM);
}

//implementação das funções
void questao06 (int vetor[], int tamanho, int A, int B)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o valor 'A' está na posição 'i' do vetor
		if (vetor[i] == A)
		{
			vetor[i] = B;
		}
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
