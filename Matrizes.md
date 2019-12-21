# Matrizes na linguagem C

Definição: Matriz é a uma estrutura de dados com duas ou mais dimensões, cujo os itens de uma matriz tem que ser todos do mesmo tipo de dado.

Sempre que declaramos uma matriz, declaramos ela assim:

```c
Tipo_de_dado Nome_da_matriz [Quantidade de linhas][Quantidade de colunas] ;
```

Exemplos:

```c
int matriz[10][10] ; // crio uma matriz que armazena inteiros que possui 10 linhas e 10 colunas
double matriz2 [200][10] ; // crio a matriz2 que armazena valores de ponto flutuante (double) e que possui 200 linhas e 10 colunas 
```

Assim como nos arrays, as matrizes também possui suas linhas e colunas numeradas de 0 até n - 1.

Para acessar cada uma das posições da matriz, podemos fazer assim:

```c
int m[10][10] // declarando a minha matriz 10 por 10

m[0][1] = 1 ; // a minha matriz na posição 0,1 recebe 1 
scanf("%d", &m[4][2]); // lendo a matriz na posição 4,2
printf("%d\n", m[1][5]); // printando o valor da matriz na posição 1,5
```
Exemplo de uma matriz 3 por 5:

![GitHub Logo](https://cdn.discordapp.com/attachments/630216934192840723/655459226382106635/cpp_Multidimensional_Array.png)

fonte da imagem: https://beginnersbook.com/2017/08/cpp-multidimensional-arrays/


Já para que possamos ler todas as posições da matriz em uma entrada, podemos fazer uma função recursiva para isto.

```c
// Função recursiva para ler uma matriz
// n - o numero de linhas
// m - o numero de colunas
// i - um contador para as linhas 
// j - um contador para as colunas 
// Sendo : int matriz[][n] , uma matriz de inteiros (PRECISO SEMPRE PASSAR O NÚMERO DE COLUNAS NOS PARÂMETROS ANTES DE DECLARAR A MATRIZ)

void ler_matriz (int n , int m , int i , int j , int matriz[][m])
{
    if (i == n) // se eu li todas as linhas, missão cumprida
    {
        return ;
    }
    else if (j < m) // lendo a linha atual
    {
        scanf("%d", &matriz [i][j]);
        ler_matriz(n , m , i , j + 1 , matriz);
    }
    else if (j == m) // se eu terminei de ler a minha linha atual, pulo pra próxima linha 
    {
        ler_matriz(n , m , i + 1 , 0 , matriz);
    }
}
```

Também podemos fazer uma função recursiva para imprimir uma matriz.

```c
// Função recursiva para imprimir uma matriz
// n - o numero de linhas
// m - o numero de colunas
// i - um contador para as linhas 
// j - um contador para as colunas 
// Sendo : int matriz[][n] , uma matriz de inteiros (PRECISO SEMPRE PASSAR O NÚMERO DE COLUNAS NOS PARÂMETROS ANTES DE DECLARAR A MATRIZ)

void imp_matriz (int n , int m , int i , int j , int matriz[][m])
{
    if (i == n) // se eu imprimi todas as linhas, missão cumprida
    {
        return ;
    }
    else if (j < m) // imprimindo a linha atual
    {
        if (j == 0) printf("%d", matriz [i][j]);
        else if (j != m - 1) printf(" %d", matriz [i][j]);
        else printf(" %d\n", matriz [i][j]);
        imp_matriz(n , m , i , j + 1 , matriz);
    }
    else if (j == m) // se eu terminei de imprimir a minha linha atual, pulo pra próxima linha 
    {
        imp_matriz(n , m , i + 1 , 0 , matriz);
    }
}
```

Bons estudos :)
