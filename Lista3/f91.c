#include <stdio.h>

int f91(int N){
     if (N==0) {
        return;
     }
     else if (N>=101){
        return N-10;
     }
     else if (N<=100){
        return f91(f91(N+11));
     }
}


int main()
{
    int N=0, M=0;
    while (scanf("%d",&N) != 0){
        if (N==0){break;} 
        M=f91(N);
        printf("f91(%d) = %d\n", N, M);
        }
    return 0;
}
