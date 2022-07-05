/*
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 11:
	Fazer um função que, dados dois vetores A e B com números inteiros, gerar o 
	vetor C que consiste na intersecção dos dois primeiros.
	
	Nota: considerar que não existe repetição no conjunto A, nem no conjunto B.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define CAP1 20
#define CAP2 15

//protótipos das funções
void questao11 (int vetA[], int tamA, int vetB[], int tamB, int vetC[], int *tamC);

int buscar (int vetor[], int tamanho, int numero);
void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int A[CAP1], B[CAP2], I[CAP2];
	int tamanho;
	
	//preenchendo os vetores A e B com valores aleatórios
	preencherAleatorioCrescente (A, CAP1);
	sleep (2);
	preencherAleatorioCrescente (B, CAP2);
	
	//exibindo os elementos dos vetores A e B
	exibir (A, CAP1);
	exibir (B, CAP2);
	
	//chamando a função interseção
	questao11 (A, CAP1, B, CAP2, I, &tamanho);
	
	//exibindo o vetor interseção
	exibir (I, tamanho);
}

//implementação das funções
void questao11 (int vetA[], int tamA, int vetB[], int tamB, int vetC[], int *tamC)
{
	//declaração de variáveis
	int i = 0, j;
	
	//percorrendo o vetor A para criar o vetor de interseção
	for (j=0;j<tamA;j++)
	{
		//verificando se o elemento vetA[j] existe no vetor vetB
		if (buscar (vetB, tamB, vetA[j]) != -1)
		{
			//inserindo o elemento vetA[j] no vetor vetC
			vetC[i] = vetA[j];
			i++;
		}
	}
	
	//'retornando' o tamanho do vetor união
	*tamC = i;
}

int buscar (int vetor[], int tamanho, int numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o valor buscado foi encontrado
		if (vetor[i] == numero)
		{
			return i;
		}
	}
	
	//elemento não encontrado
	return -1;
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
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%5 + 1;
	}	
}
