//  L={w#wr | w é uma palavra do alfabeto {a,b} e wr é o reverso de w}

#include <stdio.h>
#include <string.h>

int reconhecedor(char entrada[], int tamanho, int contador);

int main(){
    char entrada[] = "aab#baa";
    int tamanho = strlen(entrada);

    if(reconhecedor(entrada, tamanho, 0)){
        printf("A palavra pertence a linguagem L.\n");   
    }
    else{
        printf("A palavra nao pertence a linguagem L.\n");  
    }

    return 0;
}

int reconhecedor(char entrada[], int tamanho, int contador){
    if (contador >= tamanho) {
        return 1; // Pertence a linguagem
    }

    if (entrada[contador] != entrada[tamanho - 1 - contador]) {
        return 0; // Nao pertence a linguagem
    }

    return reconhecedor(entrada, tamanho, contador + 1);
}