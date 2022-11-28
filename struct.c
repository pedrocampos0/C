#include <stdio.h>

struct alunos_st
    {   
        int anonasc;
        char nome[101]; //101bytes para o char nome
        int matr; //4 bytes para idade e matr
        unsigned char idade; //1 byte para idade
        //total da variavel alunos_st => 106 bytes
    };

int datanasc(struct alunos_st *aluno) {
    aluno[0].anonasc = 2022 - aluno->idade;
    return aluno[0].anonasc;
}

int main(void)
{

    struct alunos_st pedro;
    pedro.idade=20;
    pedro.matr=200059904;
    //strcpy(pedro.nome,"Pedro Campos");
    strncpy(pedro.nome, "Pedro Campos Borges", 101);
    struct alunos_st eda1[130];
    eda1[0].idade = pedro.idade;
    eda1[0].matr = pedro.matr;
    strcpy(eda1[0].nome, pedro.nome);
    int i = 0;

    while(scanf("%d %hhd %[^\n]", &eda1[i].matr, &eda1[i].idade, eda1[i].nome)==3) {
        i++;
    }

    int anonasc = datanasc(eda1[0].idade);
    printf("%d", anonasc);

}
