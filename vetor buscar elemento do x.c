/*
QUEST�O 08:
	Dados um vetor de reais (cujos elementos est�o ordenados crescentemente) e um
	n�mero x, retornar a posi��o da primeira ocorr�ncia de x (caso encontre-se no 
	vetor) ou a posi��o na qual deveria estar (caso contr�rio).
	*/
	//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 20

//prot�tipos das fun��es
int questao08 (int vetor[], int quantidade, int x);

void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vetor[TAM];
	int numero, pos;
	
	//preenchendo o vetor com n�meros aleat�rios (em ordem crescente)
	preencherAleatorioCrescente (vetor, TAM);
	
	//exibindo o vetor
	exibir (vetor, TAM);
	
	//lendo o valor a ser buscado
	printf ("\n\nEntre com o valor a ser buscado: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	pos = questao08 (vetor, TAM, numero);
	
	//exibindo a posi��o retornada
	printf ("\nPosicao retornada: %d", pos);
}

//implementa��o das fun��es
int questao08 (int vetor[], int quantidade, int x)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		/*//verificando se o elemento foi encontrado
		if (vetor[i] == x)
		{
			return i;
		}
		else
		{
			//verificando se um elemento maior do que x foi encontrado
			if (vetor[i] > x)
			{
				return i;
			}
		}*/
		
		if (vetor[i] >= x)
		{
			return i;
		}
	}
	
	//se chegou aqui, significa que 'x' � maior do que todos os elementos do vetor
	return quantidade;
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

void preencherAleatorioCrescente (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que as sequ�ncias ser�o distintas a cada execu��o
	srand (time(NULL));

	//varrendo o vetor
	vetor[0] = rand()%5;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%10;
	}	
}
