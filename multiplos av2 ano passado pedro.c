#include <stdio.h>

void main()
{
    
    int a, b, n, maior, i, tamanho, cont;
    
    printf("Digite A: ");
    scanf("%d", &a);
    
    printf("Digite B: ");
    scanf("%d", &b);
    
    printf("Digite N: ");
    scanf("%d", &n);
    
    if(a<b)
    {
        maior = b;
    }
    else
    {
        maior = a;
    }
    
   
    i = 0;
    
    do
    {
        if(i%a==0 & i%b==0)
        {
        	
            printf("%d ", i);
            cont++;
        }
        
            i++;
            
            
    }
    while(i < n);
    
}
