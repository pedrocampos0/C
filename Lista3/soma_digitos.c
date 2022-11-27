#include <stdio.h>

long long int soma(long long int num){
    if (num==0) {
        return num/10;
    }
    return num % 10 + soma(num/10);
}

int main()
{
    long long int num;
    scanf("%lld", &num);
    printf("%d\n", soma(num));
    return 0;
}
