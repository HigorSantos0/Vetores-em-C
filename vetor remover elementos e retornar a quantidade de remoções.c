/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC
	Turma B
	Data: 22/06/2022
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 07:
	Desenvolver uma fun��o que remova determinado elemento (todas as suas
	ocorr�ncias) de um vetor de float. Ao final, retornar o n�mero de remo��es 
	realizadas.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 20

//prot�tipos das fun��es
int questao07 (int vetor[], int *quantidade, int numero);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	int valor, cont, quant = TAM;
		
	//preenchendo o vetor aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor
	exibir (v, quant);
	
	//lendo o valor a ser removido
	printf ("\n\nEntre com o valor a ser removido: ");
	scanf ("%d", &valor);
	
	//chamando a fun��o 
	cont = questao07 (v, &quant, valor);
	
	//exibindo o vetor ap�s as altera��es
	exibir (v, quant);
	
	printf ("\nForam realizadas %d remocoes do valor %d", cont, valor);
}

//implementa��o das fun��es
int questao07 (int vetor[], int *quantidade, int numero)
{
	//declara��o de vari�veis
	int i, pos, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<*quantidade;i++)
	{
		//verificando se o n�mero foi encontrado
		if (vetor[i] == numero)
		{
			//deslocando os demais elementos uma posi��o para a esquerda
			for (pos=i+1;pos<*quantidade;pos++)
			{
				vetor[pos-1] = vetor[pos];
			}
			
			//atualizando a quantidade de elementos no vetor
			(*quantidade)--;
			
			//atualizando a quantidade de remo��es realizadas
			cont++;
			
			i--;
		}
	}
	
	//retornando a quantidade de remo��es realizadas
	return cont;
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
		vetor[i] = rand ()%5;
	}	
}
