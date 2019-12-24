# Strings na linguagem C

O termo string serve para identificar uma sequência de caracteres.

Na prática, as strings são usadas para representar textos.

Em linguagem C, ao contrário de outras linguagens, não existe um tipo de dados string nativo.

Para representar uma string em C, devemos criar um vetor de caracteres, ou seja um array de char


```c
char string [256]; // declarando a string str, que armazena 256 caracteres no máximo
```
Uma importante observação sobre strings é a de que, o final da string é determinado sempre pelo caractere nulo '\0', ou seja,
as strings podem ter tamanho menor do que o tamanho do array de chars em que ela está contida.
