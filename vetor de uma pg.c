/*Implementar uma função que, dado um vetor
de inteiros, determine se os seus elementos
formam uma Progressão Geométrica (PG).
*/

#include <stdio.h>
#define TAM 5

int funcaovetorempg(int vetor[], int tamanho)
{

    int i;
    int razao;
    int contador = 0;
    
    razao = vetor[1] / vetor[0];
	
    i=0;
    while(i<tamanho)
    {
        if(vetor[i+1] == vetor[i] * razao)
        {
            contador++;
        }
        i++;
        
    }
    
    if(contador == tamanho - 1)
    {
        return 0;
        
    }
    else
        {
            return 1;
        }
        
}
void main()
{
    int vetorA[TAM];
    int resultado;
    int i;
	
    for (i = 0; i < TAM; i++)
    {
        printf ("Entre com os elementos do vetor: ");
        scanf ("%d", &vetorA[i]);
    }

    resultado = funcaovetorempg(vetorA, TAM);
    
    if (resultado == 0)
    {
        printf ("O vetor consiste em uma PG.\n");
    }
    else
        {
            printf ("Vetor nao consiste em uma PG.\n");
        }

}
