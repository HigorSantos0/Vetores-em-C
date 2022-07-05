/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC
	Turma B
	Data: 22/06/2022
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 06:
	Fa�a uma fun��o que, dado um vetor de reais, altere todas as ocorr�ncias do 
	n�mero A pelo n�mero B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 10

//prot�tipos das fun��es
void questao06 (int vetor[], int tamanho, int A, int B);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
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
		
	//chamando a fun��o 
	questao06 (v, TAM, valor1, valor2);
	
	//exibindo o vetor ap�s as altera��es
	exibir (v, TAM);
}

//implementa��o das fun��es
void questao06 (int vetor[], int tamanho, int A, int B)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o valor 'A' est� na posi��o 'i' do vetor
		if (vetor[i] == A)
		{
			vetor[i] = B;
		}
	}
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
