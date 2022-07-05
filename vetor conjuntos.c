/*
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 10:
	Fazer um função que, dados dois vetores A e B com números inteiros, gerar o 
	vetor C que consiste na união dos dois primeiros.
	
	Nota: considerar que não existe repetição no conjunto A, nem no conjunto B.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define CAP1 20
#define CAP2 15

//protótipos das funções
void questao10 (int vetA[], int tamA, int vetB[], int tamB, int vetC[], int *tamC);

int buscar (int vetor[], int tamanho, int numero);
void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int A[CAP1], B[CAP2], U[CAP1+CAP2];
	int tamanho;
	
	//preenchendo os vetores A e B com valores aleatórios
	preencherAleatorioCrescente (A, CAP1);
	sleep (2);
	preencherAleatorioCrescente (B, CAP2);
	
	//exibindo os elementos dos vetores A e B
	exibir (A, CAP1);
	exibir (B, CAP2);
	
	//chamando a função união
	questao10 (A, CAP1, B, CAP2, U, &tamanho);
	
	//exibindo o vetor união
	exibir (U, tamanho);
}

//implementação das funções
void questao10 (int vetA[], int tamA, int vetB[], int tamB, int vetC[], int *tamC)
{
	//declaração de variáveis
	int i, j;
	
	//copiando todos os elementos de B para C
	for (i=0;i<tamB;i++)
	{
		vetC[i] = vetB[i];
	}
	
	//copiando para C apenas os elementos de A que não estejam em B
	for (j=0;j<tamA;j++)
	{
		//verificando se o elemento vetA[j] não existe no vetor vetB
		if (buscar (vetB, tamB, vetA[j]) == -1)
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
