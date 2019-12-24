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
No exemplo, a string tem tamanho 4, pois ela tem os caracteres 'O' , 'l' , 'a' e o caractere que indica o final da string '\0'.

Uma outra observação importante também é que para a leitura e impressão de strings não é necessário ler de caractere por caractere ou imprimir de caractere em caractere, o tipo de dado %s nos permite ler a string em apenas um scanf e imprimir a string em apenas um printf.

```c
char string [256]; 
scanf(" %s", string); // lendo a string, note que nao é necessario usar o '&' na leitura da string
printf("%s\n", string); // imprimido a string que foi lida anteriormente
```

Para as strings, existem várias funções importantes que existem na biblioteca string.h

```c
#include <string.h> // declarando a bibiloteca string.h
```
