# Estruturas de decisão


 Estruturas de decisão são utilizadas para verificar se uma determinada condição é verdadeira, e caso seja, a parte do código que está atrelada a essa condição é executada.

# O que é uma condição?

Nada mais é do que uma expressão lógica que pode ser considerada como verdadeira ou falsa.

E para essa finalidade, existem alguns operadores relacionais para que possamos escrever essas expressões lógicas.

### Igualdade

o operador relacional de igualdade (==) serve para comparar duas entidades (números inteiros, números decimais, etc) e dizer se ambas são iguais ou não.

Exemplos:

(2 == 2) -> Verdadeiro

(2 == 5) -> Falso

### Diferente

O operador relacional de diferença (!=) serve para comparar duas entidades e dizer se ambas são diferentes ou não.

Exemplos:

(2 != 2) -> Falso

(2 != 3) -> Verdadeiro

### Maior, menor, maior ou igual e menor ou igual

São os operadores (>), (<), (>=) e (<=) respectivamente, e servem para comparar a entidade da esquerda em relação a entidade da direita.

Exemplos:

(3 > 1) -> Verdadeiro

(3 > 3) -> Falso

(3 < 4) -> Verdadeiro

(4 < 4) -> Falso

(3 <= 3) -> Verdadeiro

(4 >= 4) -> Verdadeiro

(5 >= 4) -> Verdadeiro


Além desses, existem alguns operadores lógicos para conectar duas expressões.


### Ou

O operador ou (||) é considerado verdadeiro quando a expressão da esquerda é verdade ou a expressão da direita é verdade.

Exemplos:

((2 > 1) || (3 < 7)) -> Verdadeiro

((5 != 5) || (4== 6)) -> Falso

### E

O operador e (&&) é considerado verdadeiro quando ambas as expressões são verdadeiras.

((5 == 5) && (3 > 2)) -> Verdadeiro

((4 != 4) && (3 > 2)) -> Falso


# Comandos de decisão

Como dito acima, a parte do código que estiver atrelada a uma condição, será executada somente se essa condição for verdadeira.

### Comando IF

possui a seguinte sintaxe:

```c
if (condição)
{
  //código a ser executado se a condição for verdadeira
}
```

Exemplos:

```c
// como a expressão é verdadeira,
// as mensagens serão exibidas na saída

if (3 > 2)
{
  printf("3 eh maior do que 2\n"); 
  printf("hello if\n");
}
```

```c
// nesse caso a expressão é falsa,
// logo a mensagem não será exibida

if (3 == 4)
{
	printf("3 eh igual a 4\n");
}
```

### Comando ELSE IF

Para o caso no qual uma condição anterior é falsa, podemos usar o comando else if para fazer uma nova expressão lógica.

Exemplos:

```c
// nesse caso como as duas primeiras expressões
// são falsas e a terceira é verdadeira, apenas
// o que está dentro da terceira condição sera executado

if (3 == 4)
{
	printf("3 eh igual a 4\n");
}
else if (3 == 5)
{
	printf("3 eh igual a 5\n);
}
else if (3 == 3)
{
	printf("3 eh igual a 3\n");
    printf("hello else if\n");
}
```

```c
// nesse caso como a segunda expressão
// é verdadeira, a terceira expressão 
// mesmo sendo verdadeira não é executada,
// apenas a segunda será nesse caso

if (3 == 4)
{
	printf("3 eh igual a 4\n");
}
else if (3 == 3)
{
	printf("3 eh igual a 3\n");
}
else if (3 == 3)
{
	printf("3 eh igual a 3 again\n");
}
```

### Comando ELSE

Para o caso no qual todas as condições anteriores são falsas, o comando else será necessariamente executado quando isso acontecer.

Exemplo:

```c
// nesse caso como todas as 
// expressões antes do else são 
// falsas, o else será executado

if (3 == 4)
{
	printf("3 eh igual a 4\n");
}
else if (3 == 5)
{
	printf("3 eh igual a 5\n");
}
else 
{
	printf("hello else\n");
}
```

# Vamos a prática

É essencial praticar todos os conteúdos quando vistos e o máximo de vezes que for possível.

Fica algumas questõeszinhas para treino :)

https://www.thehuxley.com/problem/1062?locale=pt_BR

https://www.thehuxley.com/problem/841?locale=pt_BR

https://www.thehuxley.com/problem/922?locale=pt_BR

https://www.thehuxley.com/problem/1315?locale=pt_BR

https://www.thehuxley.com/problem/1169?locale=pt_BR

