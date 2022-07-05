/*Implementar uma fun��o com a seguinte assinatura e
objetivo:
void questao04 (float v[], int quant, int pos);
onde:
v: vetor de reais;
quant: quantidade de elementos no vetor v;
pos: uma posi��o qualquer do vetor.
Objetivo da fun��o:
? encontrar o menor elemento do vetor da posi��o
pos ao final e identificar a sua posi��o p;
? caso p seja diferente de pos, trocar os conte�dos
destas duas posi��es.
*/
#include <Stdio.h>
#define TAM 7

int encontrarelementos(float vetor[], int quant, int pos)
{
	int i, menornumero = 100, p, aux;
	
	for (i = 0; i < quant;i++)
	{
		if (i > pos)
		{
			if (vetor[i] < menornumero)
			{
				menornumero = vetor[i];
				p = i;
				
			}

		}
	}
	if(vetor[p]!=vetor[pos])
    {
        aux=vetor[pos];
        vetor[pos]=vetor[p];
        vetor[p]=aux;
    }
		

}
int questao08 (int vetor[], int quantidade, int x)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		
		if (vetor[i] >= x)
		{
			return i;
		}
	}
	
	//se chegou aqui, significa que 'x' � maior do que todos os elementos do vetor
	return quantidade;
}


void exibir (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%.2f ", vetor[i]);
	}
	
	printf ("\n\n");
}

void main()
{
	float vetor[TAM] = {1, 2, 10, 5, 3, 9, 20};
	int pos, resp, menor;
	
	
	exibir (vetor, TAM);
	
	printf ("Entre com a posicao:\n");
	scanf ("%d", &pos);
	
	encontrarelementos(vetor, TAM, pos);
	
	exibir (vetor, TAM);
	
	//exibir (vetor, TAM);
	
}
