#include <stdio.h>
#define CAP 10

void funcaoSomaVetor(int vetor1[], int vetor2[], int vetor3[], int *tamanho)
{
    int soma;
    
    soma = vetor1[0]+ vetor2[0];
    
    vetor3[0] = soma;
    
    *tamanho++;
    

    
}
void exibir (int v1[],int v2[], int v3[],  int tamanho)
{
    
    printf(" %d\n\n", v1[0]);
    printf("+\n\n");
    printf(" %d\n\n", v2[0]);
    printf("------------\n\n");
    printf(" %d", v3[0]);
    
}

void main()
{
    int vet1[CAP], vet2[CAP], vet3[CAP], tamanho3;
    
    printf("Entre com o numero no vetor: ");
    scanf("%d", &vet1[0]);
    
    printf("Entre com o numero no segundo vetor:");
    scanf("%d", &vet2[0]);
    
    funcaoSomaVetor(vet1,vet2, vet3, &tamanho3);
    
     exibir (vet1, vet2, vet3, tamanho3);
    
    
    
    
}

