# Teoria da Computação - Programas


[![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](http://unlicense.org/)
![C Language](https://img.shields.io/badge/language-C-blue.svg)

Este repositório contém implementações de reconhecedores para a linguagem formal L = { w#wᵣ | w é uma palavra do alfabeto {a, b} e wᵣ é o reverso de w }, desenvolvidos para a disciplina de Teoria da Computação na [UENP](https://uenp.edu.br/).

## Descrição dos Programas

O objetivo dos programas é verificar se uma palavra de entrada pertence à linguagem L, ou seja, se ela possui a forma `w#wr`, onde `w` é uma sequência de caracteres do alfabeto `{a, b}` e `wr` é o reverso de `w`.

### Arquivos

- **recursivo.c**: Implementação recursiva do reconhecedor.
- **iterativo.c**: Implementação iterativa utilizando laço `for`.
- **monolitico.c**: Implementação monolítica utilizando `goto` para controle de fluxo.

Cada programa lê uma string de teste e imprime se ela pertence ou não à linguagem L.

## Como Executar

1. Compile o arquivo desejado com um compilador C, por exemplo:
   ```sh
   gcc recursivo.c -o recursivo.exe
   gcc iterativo.c -o iterativo.exe
   gcc monolitico.c -o monolitico.exe
   ```
2. Execute o programa:
   ```sh
   ./recursivo.exe
   ./iterativo.exe
   ./monolitico.exe
   ```

## Exemplo de Entrada

A string de teste utilizada nos programas é:

```
aab#baa
```

Saída esperada:

```
A palavra pertence a linguagem L.
```

Se a string não estiver no formato correto, a saída será:

```
A palavra nao pertence a linguagem L.
```

## Licença

Este projeto está licenciado sob a Unlicense. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.
