/*
QUESTÃO 08:
	Dados um vetor de reais (cujos elementos estão ordenados crescentemente) e um
	número x, retornar a posição da primeira ocorrência de x (caso encontre-se no 
	vetor) ou a posição na qual deveria estar (caso contrário).
	*/
	//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 20

//protótipos das funções
int questao08 (int vetor[], int quantidade, int x);

void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vetor[TAM];
	int numero, pos;
	
	//preenchendo o vetor com números aleatórios (em ordem crescente)
	preencherAleatorioCrescente (vetor, TAM);
	
	//exibindo o vetor
	exibir (vetor, TAM);
	
	//lendo o valor a ser buscado
	printf ("\n\nEntre com o valor a ser buscado: ");
	scanf ("%d", &numero);
	
	//chamando a função
	pos = questao08 (vetor, TAM, numero);
	
	//exibindo a posição retornada
	printf ("\nPosicao retornada: %d", pos);
}

//implementação das funções
int questao08 (int vetor[], int quantidade, int x)
{
	//declaração de variáveis
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
	
	//se chegou aqui, significa que 'x' é maior do que todos os elementos do vetor
	return quantidade;
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

void preencherAleatorioCrescente (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	vetor[0] = rand()%5;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%10;
	}	
}
