/*
Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).
*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define CAP 6

int inserir(int vet[], int capacidade, int *quant, int x)
{
	int i;
	int capaci, pos;
	
	if (*quant == capacidade)
	{
		return FALSE;
	}
	else
		{
			pos = vetocorrenciax(vet, *quant, x);
			
			for (i = *quant-1;i >=pos;i--)
			{
				vet[i+1] = vet[i];
			}
			vet[pos] = x;
			
			(*quant)++;
			
			return TRUE;
		}
}

int vetocorrenciax(int vet[], int quant, int x)
{
	int i;
	
	for (i = 0; i < quant; i++)
	{
		if (vet[i] >= x)
		{
			return i;
		}
	}
	
	//X maior que todos os elementos do vetor
	return quant;
	
	
}
void exibir(int vet[], int tamanho)
{
	int i;
	
	for (i = 0; i < tamanho; i++)
	{
		printf ("%d ", vet[i]);
	}
	printf ("\n\n");
}

void main()
{
	int vet[CAP] = {1, 3, 4, 5, 6, 7};
	int x, pos, quant, resultado;
	
	quant = CAP - 3;
	
	exibir(vet, quant);
	
	do
	{
		printf ("Entre com o valor a ser inserido: ");
		scanf ("%d", &x);	
		
		resultado = inserir(vet, CAP, &quant, x);
		
		if (resultado == TRUE)
		{
			exibir(vet, quant);
		}
		else
			{
				printf ("Vetor cheio!");
			}
		
	}while(resultado == TRUE);
	

}
