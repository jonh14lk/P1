# Strings na linguagem C

O termo string serve para identificar uma sequência de caracteres.

Na prática, as strings são usadas para representar textos.

Em linguagem C, ao contrário de outras linguagens, não existe um tipo de dados string nativo.

Para representar uma string em C, devemos criar um vetor de caracteres, ou seja um array de char


```c
char string [256]; // declarando a string str, que armazena 256 caracteres no máximo
```
Uma importante observação sobre strings é a de que, o final da string é determinado sempre pelo caractere nulo '\0', ou seja,
as strings podem ter tamanho menor ou igual do que o tamanho do array em que ela está contida.

```c
char string [256] = "Ola" ; // declarando a string str, que tem tamanho 4
```
No exemplo, a string tem tamanho 4, pois ela tem os caracteres 'o' , 'l' , 'a' e o caractere que indica o final da string '\0'.

Para as strings, existem várias funções importantes que existem na biblioteca string.h

```c
#include <string.h> // declarando a bibiloteca string.h
```
