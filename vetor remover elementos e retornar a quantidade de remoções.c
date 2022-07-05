/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computação - FAC
	Turma B
	Data: 22/06/2022
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 07:
	Desenvolver uma função que remova determinado elemento (todas as suas
	ocorrências) de um vetor de float. Ao final, retornar o número de remoções 
	realizadas.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 20

//protótipos das funções
int questao07 (int vetor[], int *quantidade, int numero);

void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	int valor, cont, quant = TAM;
		
	//preenchendo o vetor aleatoriamente
	preencherAleatorio (v, TAM);

	//exibindo o vetor
	exibir (v, quant);
	
	//lendo o valor a ser removido
	printf ("\n\nEntre com o valor a ser removido: ");
	scanf ("%d", &valor);
	
	//chamando a função 
	cont = questao07 (v, &quant, valor);
	
	//exibindo o vetor após as alterações
	exibir (v, quant);
	
	printf ("\nForam realizadas %d remocoes do valor %d", cont, valor);
}

//implementação das funções
int questao07 (int vetor[], int *quantidade, int numero)
{
	//declaração de variáveis
	int i, pos, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<*quantidade;i++)
	{
		//verificando se o número foi encontrado
		if (vetor[i] == numero)
		{
			//deslocando os demais elementos uma posição para a esquerda
			for (pos=i+1;pos<*quantidade;pos++)
			{
				vetor[pos-1] = vetor[pos];
			}
			
			//atualizando a quantidade de elementos no vetor
			(*quantidade)--;
			
			//atualizando a quantidade de remoções realizadas
			cont++;
			
			i--;
		}
	}
	
	//retornando a quantidade de remoções realizadas
	return cont;
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

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		vetor[i] = rand ()%5;
	}	
}
