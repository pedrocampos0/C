#include <stdio.h>

int main()
{
    int N,i;
    while (1){
        scanf ("%d", &N);
        if (N == 0){break;}
        int alice=0,beto=0;
        int num[N];
        for (i = 0; i < N; i++)
        {
            scanf("%d", &num[i]);
            if (num[i] == 0){alice = alice + 1;}
            else{beto = beto + 1;}
        }
        if (N!=0) {printf("Alice ganhou %d e beto ganhou %d \n", alice, beto);}
    }
    return 0;
}
