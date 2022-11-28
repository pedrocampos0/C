#include <stdio.h>
#include <string.h>

void print_same_Xs(char*string){
    if(*string!='x' && *string!='\0'){
        printf("%c",string[0]);
        if(string+1!='\0'){
            print_same_Xs(string+1);
        }
    }
    if(*string=='x'){
        if(string+1!='\0'){
            print_same_Xs(string+1);
        }
    }
    else{
        return;
    }

}

int qtd_Xs(char*string){
    int counter=0;
    if(*string=='x'){
        counter++;
        return counter+ qtd_Xs(string+1);
    }
    else{
        if(*string=='\0'){
            return 0;
        }
        return qtd_Xs(string+1);
    }
}

int print_Xs(int qtd){
    if(qtd>0){
        printf("%c",'x');
        return print_Xs(qtd-1);
    }
    if(qtd==0){
        return 0;
    }
}


int main(){
    char xx[110];
    scanf("%s",xx);
    int c_Xs= qtd_Xs(xx);
    print_same_Xs(xx);
    print_Xs(c_Xs);
    printf("\n");

}