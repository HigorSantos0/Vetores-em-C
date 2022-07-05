/*
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 10:
	Fazer um fun��o que, dados dois vetores A e B com n�meros inteiros, gerar o 
	vetor C que consiste na uni�o dos dois primeiros.
	
	Nota: considerar que n�o existe repeti��o no conjunto A, nem no conjunto B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define CAP1 20
#define CAP2 15

//prot�tipos das fun��es
void questao10 (int vetA[], int tamA, int vetB[], int tamB, int vetC[], int *tamC);

int buscar (int vetor[], int tamanho, int numero);
void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int A[CAP1], B[CAP2], U[CAP1+CAP2];
	int tamanho;
	
	//preenchendo os vetores A e B com valores aleat�rios
	preencherAleatorioCrescente (A, CAP1);
	sleep (2);
	preencherAleatorioCrescente (B, CAP2);
	
	//exibindo os elementos dos vetores A e B
	exibir (A, CAP1);
	exibir (B, CAP2);
	
	//chamando a fun��o uni�o
	questao10 (A, CAP1, B, CAP2, U, &tamanho);
	
	//exibindo o vetor uni�o
	exibir (U, tamanho);
}

//implementa��o das fun��es
void questao10 (int vetA[], int tamA, int vetB[], int tamB, int vetC[], int *tamC)
{
	//declara��o de vari�veis
	int i, j;
	
	//copiando todos os elementos de B para C
	for (i=0;i<tamB;i++)
	{
		vetC[i] = vetB[i];
	}
	
	//copiando para C apenas os elementos de A que n�o estejam em B
	for (j=0;j<tamA;j++)
	{
		//verificando se o elemento vetA[j] n�o existe no vetor vetB
		if (buscar (vetB, tamB, vetA[j]) == -1)
		{
			//inserindo o elemento vetA[j] no vetor vetC
			vetC[i] = vetA[j];
			i++;
		}
	}
	
	//'retornando' o tamanho do vetor uni�o
	*tamC = i;
}

int buscar (int vetor[], int tamanho, int numero)
{
	//declara��o de vari�veis
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
	
	//elemento n�o encontrado
	return -1;
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
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%5 + 1;
	}	
}
