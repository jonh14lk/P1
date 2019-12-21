# Arrays na linguagem C

Definição: O array é uma estrutura de dados indexada, que pode armazenar uma determinada quantidade de valores do mesmo tipo.

Sempre que declaramos um array, declaramos ele assim:

```c
Tipo_de_dado Nome_do_array [Quantidade de elementos] ;
```

Exemplos:

```c
int a[10]; // crio o array a que armazena inteiros que possui tamanho 10
double b[200]; // crio o array b que armazena valores de ponto flutuante (double) de tamanho 200
char c[256]; // crio o array c que armazena caracteres e que possui tamanho 256
```

Um array de tamanho n, sempre podera ser acessado nos índices de 0 ate n-1.

Como por exemplo:

```c
int a[10]; // possui posições que são numeradas do 0 até o 9, totalizando 10 posições
double b[200]; // possui posições que são numeradas do 0 até o 199, totalizando 200 posições
char c[256]; // possui posições que são numeradas do 0 até o 255, totalizando 256 posições
```

Para acessar cada uma das posições do array, podemos fazer assim:

```c
int array [10] // declarando o meu array de inteiros de tamanho 10

a[0] = 1 ; // o meu array na posição 0 está recebendo o inteiro '1' para armazenar
a[1] = 44 // o meu array na posição 0 está recebendo o inteiro '44' para armazenar

scanf("%d", &a[2]); // pondo o valor que irá ser digitado na entrada para ser recebido na posição 2 do array
:
printf("%d\n", a[0]); // printando o valor do array na posição 0, neste caso o inteiro 1.
```

Já para que possamos ler todas as posições do array em uma entrada, podemos fazer uma função recursiva para isto.

```c
// Função recursiva para ler um array
// Sendo : a[], um array de inteiros (não preciso por o tamanho dele nos parametros da função)
// n - o tamanho do meu array 
// i - um contador de loops que irá percorrer de 0 ate n (tamanho do array) ;

void ler_array (int a[], int i, int n)
{
  if (i == n)
  {
     return ;
  }
  else
  {
     scanf("%d", &a[i]);  // lendo o array na posição i , seguido de uma quebra de linha
     ler_array(a, i + 1 , n);
  }
}
int main ()
{
  int n ;
  scanf("%d", &n);
  int a[n] ; // criando o array de tamanho n 
  ler_array(a, 0 , n); // chamando a função para ler o array recursivamente, passando o meu array a , o meu contador que irá iniciar de 0 e o tamanho do meu array
  return 0 ;
}
```

Já para que possamos imprimir todas as posições do array em uma entrada, também podemos fazer uma função recursiva para isto.

```c
// Função recursiva para imprimir um array
// Sendo : a[], um array de inteiros (não preciso por o tamanho dele nos parametros da função)
// n - o tamanho do meu array 
// i - um contador de loops que irá percorrer de 0 ate n (tamanho do array) ;

void imp_array (int a[], int i, int n)
{
  if (i == n)
  {
     return ;
  }
  else
  {
     printf("%d\n", a[i]);  // imprimindo o array na posição i , seguido de uma quebra de linha
     imp_array(a, i + 1 , n);
  }
}
int main ()
{
  int n ;
  scanf("%d", &n);
  int a[n] ; // criando o array de tamanho n 
  imp_array(a, 0 , n); // chamando a função para imprimir o array 
  return 0 ;
}

```

Por último, aqui está um exemplo de implementação para poder ordenar um array de forma crescente, <br />
sendo o menor elemento na posição [0] e o maior na posição [n - 1].
<br />
<br />
Existem infinitas maneiras de ordenar, esta é apenas uma delas
<br />
```c
void swap (int *a , int *b)
{
    if (*a < *b)
    {
        int aux ;
        aux = *a ;
        *a = *b ;
        *b = aux ;
        return ;
    }
    else
    {
        return ;
    }
}
void ordenar (int array [] , int n , int cont)
{
    if (n == 1)
    {
        return ;
    }
    else 
    {
        if (cont == n )
        {
            ordenar(array , n - 1 , 1 );
        }
        else 
        {
            swap (&array[cont] , &array[cont - 1]);
            ordenar (array , n , cont + 1 );
        }
    }
}

```

Link com implementação completa: https://github.com/jonh14lk/The-Huxley/blob/master/ordenar_array.c <br />
<br />
<br />

**Questões boas para treinar array no thehuxley, em ordem crescente de dificuldade:**
<br />
<br />

152  - Brincando com arrays : https://www.thehuxley.com/problem/152?locale=pt_BR


2086 - 1000 Números do Tio willy : https://www.thehuxley.com/problem/2086?locale=pt_BR


2412 - Ambrósio Romântico : https://www.thehuxley.com/problem/2412?locale=pt_BR


2197 - Ambrósio Desastrado : https://www.thehuxley.com/problem/2197?locale=pt_BR


362 - Copa do Mundo : https://www.thehuxley.com/problem/362?locale=pt_BR



**Desafio - 2392 - A grande estreia : https://www.thehuxley.com/problem/2392?locale=pt_BR** <br />
<br />
<br />



Bons estudos :)
