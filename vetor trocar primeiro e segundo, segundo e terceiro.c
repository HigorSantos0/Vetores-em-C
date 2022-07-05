/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC
	Turma B
	Data: 22/06/2022
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 02:
	Implementar uma fun��o que, dado um vetor de reais, troque o 1� e o 2� elementos, 
	em seguida o 3� e o 4� elementos e assim sucessivamente, at� se chegar ao final 
	do vetor.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 9

//prot�tipos das fun��es
void questao02 (int vetor[], int tamanho);
void trocarelementos(int vet[], int i, int j);
void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	//preenchendo o vetor aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor antes das trocas
	exibir (v, TAM);
	
	//chamando a fun��o
	questao02 (v, TAM);
	
	//exibindo o vetor depois das trocas
	exibir (v, TAM);
}

//implementa��o das fun��es
void questao02 (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, j, aux;
	
	for (i=0,j=1;j<tamanho;i=i+2,j=j+2)
	{
		//trocar os elementos das posi��es 'i' e 'j'
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
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i;
	
	//garantindo que as sequ�ncias ser�o distintas a cada execu��o
	srand (time(NULL));

	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		vetor[i] = rand ()%30;
	}	
}
