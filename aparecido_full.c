int main(int argc, char const *argv[])
{   
    int N;
    int i;
    int soma = 0;
    int T;

    scanf ("%d", &N);

    int C[N];
    
    for (i = 0; i <= N; i++)
    {   
        if (i-N == 0)
        {
            scanf ("%d", &T);
        }
        else
        {
            scanf ("%d", &C[i]);
            soma = soma + C[i];
        }
    }

    if (T==soma)
    {
        printf("Acertou");
    }
    else
    {
        printf("Errou");
    }

    return 0;
}

