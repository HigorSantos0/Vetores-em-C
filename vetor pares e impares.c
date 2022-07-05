/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC
	Turma B
	Data: 22/06/2022
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 05:
	Elaborar uma fun��o que, dado um conjunto de 300 valores inteiros, distribua-os 
	em 2 vetores conforme forem pares ou �mpares.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 300

//prot�tipos das fun��es
void questao05 (int vetor[], int tamanho, int vetPar[], int *tamPar, int vetImpar[], int *tamImpar);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int v[TAM], vetP[TAM], vetI[TAM];
	int quantP, quantI;
	
	//preenchendo o vetor aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor
	exibir (v, TAM);
	
	//chamando a fun��o 
	questao05 (v, TAM, vetP, &quantP, vetI, &quantI);
	
	//exibindo o vetor de pares
	printf ("\nPares (%d elementos):\n", quantP);
	exibir (vetP, quantP);
	
	//exibindo o vetor de �mpares
	printf ("\nImpares (%d elementos):\n", quantI);
	exibir (vetI, quantI);
}

//implementa��o das fun��es
void questao05 (int vetor[], int tamanho, int vetPar[], int *tamPar, int vetImpar[], int *tamImpar)
{
	//declara��o de vari�veis
	int i, j = 0, k = 0;
	
	//varrendo o vetor original
	for (i=0;i<tamanho;i++)	
	{
		//verificando se o elemento da posi��o 'i' � par ou �mpar
		if (vetor[i] % 2 == 0)
		{
			vetPar[j] = vetor[i];
			j++;
		}
		else
		{
			vetImpar[k] = vetor[i];
			k++;
		}
	}
	
	//armazenando nos par�metros tamPar e tamImpar a quantidade de pares e impares, respectivamente
	*tamPar = j;
	*tamImpar = k;
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
