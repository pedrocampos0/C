#include <stdio.h>

int main()
{
    int N,i;
    int soma = 0;
    scanf ("%d", &N);
    int C[N];
    
    for (i = 0; i < N; i++)
    {
        scanf ("%d", &C[i]);
        soma = soma + C[i];
        
    }

    printf("%d", soma);

    return 0;
}
