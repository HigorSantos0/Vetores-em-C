/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC
	Turma B
	Data: 22/06/2022
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 04:
	Fazer uma fun��o que armazene em um vetor os 50 primeiros termos da seguinte 
	sequ�ncia:

						S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1, entre o 
	2� e 3� � igual a 2, entre o 3� e o 4� � igual a 3, e assim sucessivamente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 50

#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
void questao04 (int vetor[], int tamanho);

void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
		
	//chamando a fun��o
	questao04 (v, TAM);

	//exibindo o vetor v
	exibir (v, TAM);
}

//implementa��o das fun��es
void questao04 (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, j = 1;
	
	vetor[0] = 1;
	
	//preenchendo as demais posi��es do vetor
	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1]+j;
		j++;
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
