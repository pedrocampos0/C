#include <stdio.h>

void procedure (char *palavra){
    int cont, x=0, cont2;
    char letra;

    for (cont=0; cont<strlen(palavra); cont++){
        letra=palavra[cont];
        for (cont2=0; cont2<strlen(palavra); cont2++){
            if(letra==palavra[cont2]){
                x++;
            }
        }
        printf ("\nocorrencias da letra %c = %d", letra, x); 
        x=0;

    }
}

int main()
{   int N,i;
    scanf ("%d", &N);
    char str_char;
    scanf("%[^\n]", str_char);
    procedure(str_char);
    return 0;
}
