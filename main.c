int main()
{
    while (1)
    {
        int N;
        scanf("%d", &N);
        if (N == 0)
        {
            break;
        }
        int i=0;
        int joao[N], ze[N];
        for (i = 0; i <N; i++)
        {
            scanf("%d %d", &joao[i], &ze[i]);
        }
        for (i = 0; i<N; i++)
        {
            int sub[N];
            sub[i] = joao[i] - ze[i];
            if (i==0)
            {   
                printf("Teste %d\n", i+1);
                printf("%d\n", sub[i]);
            }
            else if(i!=0)
            {   
                printf("%d\n", sub[i]+sub[i-1]);
            }
        }

    }
    return 0;
}
