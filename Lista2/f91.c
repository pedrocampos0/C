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
    /* code */
    return 0;
}
