//  L={w#wr | w é uma palavra do alfabeto {a,b} e wr é o reverso de w}

#include <stdio.h>
#include <string.h>

int main(){
    char entrada[] = "aab#baa";
    int tamanho = strlen(entrada);

    for(int i = 0; i < tamanho; i++){
        if (entrada[i] != entrada[tamanho - 1 - i]) {
            printf("A palavra nao pertence a linguagem L.\n");
            return 0;
        }
    }

    // Se passou pela validação
    printf("A palavra pertence a linguagem L.\n");    

    return 0;
}