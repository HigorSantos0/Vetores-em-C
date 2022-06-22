#include <stdio.h>
#define TAM 5

void exibir(int v[], int t);
void vetorespareseimpares(int vetor[], int tamanho);
void trocarelementos(int v[], int i, int j);
void preencheraleatorio(int v[], int tamanho);

void main()
{
	int vet[TAM];
	
	preencheraleatorio(vet, TAM);
	printf ("Vetor inicial:\n");
	exibir(vet, TAM);
	vetorespareseimpares(vet, TAM);
	
	printf ("Valores trocados com pares no inicio:\n");
	exibir(vet, TAM);
}
void preencheraleatorio(int v[], int tamanho)
{
    int i; 
    
    srand(time(NULL));
    
    for (i = 0; i < tamanho; i++)
    {
        v[i] = rand() % 10;
    }
}

void exibir(int v[], int t)
{
	int i;
	
	for (i = 0; i < t; i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n");
}

void trocarelementos(int v[], int i, int j)
{
	int aux;
	
	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
	
}
void vetorespareseimpares(int vetor[], int tamanho)
{
	int i = 0;
	int j = tamanho - 1;
	
	while(i < j)
	{
		if (vetor[i] % 2 == 0)
		{
			i++;
		}
		else
			{
				if (vetor[j] % 2 != 0)
				{		
					j--;
				}
				else
					{
						trocarelementos(vetor, i, j);
						i++;
						j--;
					}		
			}
		
	}
}


