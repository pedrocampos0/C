#include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    int i;
    /* int soma, sub, div, mul; */
    int sub;
    scanf("%d", &parcelas);
    int C[parcelas];
    int sub[parcelas];
    if (op == '-')
    {
        for (i = 0; i < parcelas; i++)
        {
            scanf ("%d", &C[i]);
            sub = C[i];
        }
        
    }
    return 0;
}

int main() {
    int n = faz_conta_direito(4, '-');
    scanf("%d", n);
    printf("%d", n);
    return 0;
}