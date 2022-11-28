#include <stdio.h>

int diferenca (int n1, int n2){
    return (n1 - n2);
}

int main() {
    int n, j, z, i, teste, resultado[100];
    teste = 1;
    scanf("%d", &n);
    while(n != 0){
         for (i = 1; i <= n; i++){
              scanf("%d %d", &j, &z);
              resultado[i] = diferenca(j, z);
              if (i > 1)
                resultado[i] += resultado[i - 1];
            }
            printf("Teste %d\n", teste);
            for (i = 1; i <= n; i++){
                printf("%d\n", resultado[i]);
            }
            teste++;
            scanf("%d", &n);
        }
    return 0;
}