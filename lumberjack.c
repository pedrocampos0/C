#include<stdio.h>

void init_bordas()
{  
    for (int i = 0; i < 11; i++)
    {
        printf("~");
    }
}

void init_galhos()
{  
    for (int i = 0; i < 3; i++)
    {
        printf("-");
    }
}

void init_lenhador()
{  
    printf("L");
}

void init_tronco(int troca_tronco)
{  
    if(troca_tronco == '1'){printf(">");}
    else{for (int i = 0; i < 3; i++){printf("|");}}
}

void init_vazio(int qtd)
{  
    for (int i = 0; i < qtd; i++)
    {
        printf(" ");
    }
}

void quebra_linha(int qtd)
{
    for (int i = 0; i < qtd; i++)
    {
        printf("\n");
    }
}

int main ()
{   //t -> troca de lado, b-> bate na arvore
    //se o tronco mais proximo for '|', ele vira o caractere '>'.. 
    //..se for na coluna 7 ele vira '<'
    //se o caractere ja for '<' ou '>' a linha da arvore eh... 
    //..derrubada
    //caso a linha de cima tenha galhos no mesmo lado do lenhador...
    //.. é game over

    int L, G, G_linha; 
    char L_lado, Comandos[2000], G_lado;
    scanf("%d", &L);
    scanf("%d", &G);
    char num_G_lado[G];
    int num_G_linha[G];
    for (int i = 0; i <= G; i++)
    {
        scanf("%c %d", &G_lado, &G_linha);
        num_G_lado[i] = G_lado;
        printf("%c", num_G_lado[i]);
        num_G_linha[i] = G_linha;
        printf(" %d\n", num_G_linha[i]);
    }
    scanf("%c", &L_lado);
    scanf("%s", Comandos);
    for (int i = 0; i < L; i++)
    {   
        if (i==0) {init_bordas();quebra_linha(2);}
        if (num_G_linha[i] == i)
        {
            if (num_G_lado[i] == "D" && L_lado == "E" && i-L==1)
            {
              init_vazio(2);init_lenhador();init_vazio(1);init_tronco(0);init_vazio(1);init_galhos();quebra_linha(1);  
            }
            else if (num_G_lado[i] == "D")
            {
              init_vazio(4);init_tronco(0);init_vazio(1);init_galhos();quebra_linha(1); 
            }
            else if (num_G_lado[i] == "E" && L_lado == "D" && i-L==1)
            {
              init_vazio(2);init_lenhador();init_vazio(1);init_tronco(0);init_vazio(1);init_galhos();quebra_linha(1);  
            }
            else if (num_G_lado[i] == "E")
            {
              init_vazio(4);init_tronco(0);init_vazio(1);init_galhos();quebra_linha(1); 
            }             
        }
        else if (i-L==1 && L_lado == "E"){
           init_vazio(2);init_lenhador();init_vazio(1);init_tronco(0);init_vazio(4);quebra_linha(1); 
        }
        else if (i-L==1 && L_lado == "D"){
           init_vazio(4); init_tronco(0);init_vazio(2);init_lenhador();init_vazio(1);quebra_linha(1); 
        }
        if (i-L==1) {quebra_linha(1);init_bordas();}
    }


    return 0;
}