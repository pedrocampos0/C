/*
https://www.brunoribas.com.br/apostila-eda/ordenacao-elementar.html
Algoritmo de ordenação 
typedef Item (tipo do item)
#define key(A) (A)
#define less(A,B) (key(A)<key(B))
caso a key seja do tipo char
#define less(A,B) (strcmp(key(A),key(B)<0)) //strcmp = String Compare
#define exch(A,B) {item tt=A;\
                        A=B;\
                        B=tt;\
                        }
*/
typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A)<key(B))
//caso key for string #define less(A,B) (strcmp(key(A),key(B)<0))
#define exch(A,B) {Item tt=A;\
                        A=B;\
                        B=tt;\
                        }

// a funcao selectionsort separa os menores valores dos maiores, alocando os menores
// à esquerda do vetor.
void selectionsort(Item *v, int l, int r){
    for (int i=l; i<r; i++)
    {
        int min = i;
        for (int j=i+1; j<=r; j++)
        {
            if (less(v[j],v[min]))
            {
                min=j;
            }
        }
        exch(v[i],v[min]);
    }
}

//    
void bubblesort(Item *v, int l, int r) {
    for(int i=l; i<r; i++) {
        for(int j=l; j<r; j++) {
            if(less(v[j+1], v[j])){
                exch(v[j+1], v[j]);
            }
        }
    }
}
