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

Por padrão, uma string é lida até ser encontrado um espaço ou uma quebra de linha, mas se quisermos ler todos os espaços e parar a leitura da string apenas na quebra de linha, basta ler apenas usando o seguinte:

```c
scanf(" %[^\n]s", string); // lendo a string enquanto o caractere lido for diferente de '\n'
```

Assim como qualquer array de outro tipo, também é possível manipular cada caractere da string.

```c
string[10] = 'a' ; // a string na posição 10 recebe o caractere 'a' 

scanf(" %c", &string[14]); // lendo apenas a posição 14 da string
printf("%c\n", string[3]); // imprimindo o caractere da posição 3 da string
```

Para as strings, existem várias funções importantes que estão na biblioteca string.h

```c
#include <string.h> // declarando a bibiloteca string.h
```

Entre as várias existentes, as principais sao:

```c

```

Vale ressaltar que existem várias outras funções na string.h

A explicação sobre outras funções estão disponiveis na referência do site cplusplus : http://www.cplusplus.com/reference/cstring/?kw=string.h
