#include <stdio.h>

int rumo9s(int num) {
    int cont = 0;
    if (num < 10)
        return 1;
    else{
        num = soma(num);
        return rumo9s(num)+1;
    }
}

int soma(int n) {
    if (n/10 == 0)
        return n;
    else {
        return soma(n/10) + n%10;
    }
}

int soma_str(char *string) {
    int soma=0;
    if (*string == '\0'){
        return *string;
    }
    else{
        soma = (*string) - '0' + soma_str(string+1) ;
        return soma;
    }
}

int main() {
    char string[1000];
    int num;
    while (scanf ("%s", string) && soma_str(string) != 0) {
        num = rumo9s(soma_str(string));
        if(num == 0)
            break;
        if(soma_str(string)==9)
            num = 1;
        if (soma_str(string) % 9 == 0){
            printf ("%s is a multiple of 9 and has 9-degree %i.\n", string, num);
        }
        else{
            printf ("%s is not a multiple of 9.\n", string);
        }
    }


    return 0;
}