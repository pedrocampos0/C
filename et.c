#include <stdio.h>

_Bool str_equality(char *s1, char *s2) {
    int i = 0;

    while(s1[i]==s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0') {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int number, marte=0;
    char s1[30];

    while (scanf("%s", s1) == 1) 
    {
        //scanf("%s", s1);
        if (str_equality(s1, "marte") == 1) {
            marte=marte+1;
        } else {
            
        }
    }
    if (marte == 0) {
        printf("none\n");
    } else {
        for (int i = 0; i < marte; i++) {
        printf("Leonardo Cicero Marciano\n");
    }
    }
    return 0;


}
