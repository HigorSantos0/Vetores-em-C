/*
Dados um vetor de reais (cujos elementos
est�o ordenados crescentemente) e um
n�mero x, retornar a posi��o da primeira
ocorr�ncia de x (caso encontre-se no vetor) ou
a posi��o na qual deveria estar (caso contr�rio).
*/

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
	int vet[6] = {1, 3, 4, 5};
	int x, pos;
	
	
	exibir(vet, 6);
	
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%d", &x);
	
	pos = vetocorrenciax(vet, 6, x);
	
	printf ("Posicao do vetor = %d\n", pos);
}

