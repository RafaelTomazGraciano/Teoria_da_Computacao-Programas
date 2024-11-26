//  L={w#wr | w é uma palavra do alfabeto {a,b} e wr é o reverso de w}

#include <stdio.h>
#include <string.h>

int main(){
    char entrada[] = "aab#baa";
    int tamanho = strlen(entrada);
    int i = 0;


reconhece:
    if (i < tamanho) {
        if (entrada[i] != entrada[tamanho - 1 - i]) {
            printf("A palavra nao pertence a linguagem L.\n");
            goto fim;
        }
        i++;
        goto reconhece;
    }

    // Se passou pela validação
    printf("A palavra pertence a linguagem L.\n");    

fim:
    return 0;
}