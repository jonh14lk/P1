# Formato padrão de uma função em C :

```c
tipo_da_função  nome_da_função  (int parametro1 , char parametro2 , float parametro3)
{
    // linhas de códigos
    // retorno da função
}
```

```c
funcao_que_ira_ser_chamada(parametro1 , parametro2 , parametro3);
```

Tipo de uma função : Define qual será o tipo do retorno daquela função, como por exemplo a função pode retornar um inteiro, um 
número de ponto flutuante, um valor booleano (true ou false) , apenas retornar (void), etc.

Nome de uma função : A função será identificada por esse nome, seja pra ser chamadas em outras funções ou para ser chamada por 
ela mesma (recursão).

Parametros : Variaveis, Arrays, Matrizes, etc que irão ser passadas na chamada de uma funçao para a execução desta.

Retorno da função : Quando uma função retorna, é o fim daquela chamada que foi realizada, logo após a seu retorno será executado
os comandos/ funções que estiverem abaixo para serem executadas.


# Ponteiros

Ponteiros são variáveis que armazenam o endereço de memória de outras variáveis, logo quando você faz uma chamada de uma função 
passando alguma variável desta função por ponteiro, ela poderá ter o seu valor alterado caso ele seja alterado na nova função.

Implementação do uso de ponteiros em C :

1 - Na chamada da função passando o ponteiro (usa-se '&' para passar uma variável como ponteiro)

```c
funcao_a_ser_chamada(parametro1 , parametro2 , &ponteiro);
```

2 - Para a manipulação do ponteiro na função (usa-se '*' para manipular um ponteiro)
```c
void funcao (int parametro1 , char parametro2 , int *ponteiro)
{
    *ponteiro = 10 ; // atribui 10 ao ponteiro , logo ele altera o valor dele aqui e na função em que houve a chamada desta função
    return ;
}
```

# Funções Recursivas 

São aquelas cujo existe uma chamada desta mesma função dentro dela, realizando assim uma espécie de repetição

 Exemplo de função recursiva que exibe um número 10 vezes  :
 
1 - Na chamada a partir de outra função

```c
funcao (0 , numero);
```

2 - Na função recursiva
```c
int funcao (int i , int numero)
{
  if (i == 10) // se eu tiver printado 10 vezes
  {
        return 0 ; // retorno 0 ;
  }
  else // se não
  {
        printf("%d\n", numero); // printo o número
        return funcao (i + 1 , numero ); // chamo a mesma função novamente incrementando +1 na variável i
  }
  
}

```
Exemplo de uma função que calcula o n-ésimo termo da sequência de Fibonacci (https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci):

```c
int fibonacci(int num)
{
   if(num == 1 || num == 2)
   {
        return 1 ;
   }
   else
   {
       return fibonacci(num - 1) + fibonacci(num - 2); // Fn = Fn-1 + Fn-2 
   }
}
```
Exemplo de uma função que calcula o fatorial de um número :
```c
int fatorial (int a)
{
    if (a <= 1)
    {
        return 1 ;
    }
    else
    {
        return a * fatorial (a - 1); // Fatorial = N * N-1 * ... * 1 
    }
}
```
Exemplo de uma função que imprime os 100 primeiros números naturais

```c
int naturais (int num)
{
    if (num == 100)
    {
        return 0 ;
    }
    else 
    {
        printf("%d\n", num);
        return naturais (num + 1);
    }
}
```

# Questões para treino

2089- Strong Number:

https://www.thehuxley.com/problem/2074

Um número é dito Strong Number quando a soma dos fatoriais de cada um de seus números é igual a ele mesmo.

145: 1! + 4! + 5! = 1 + 24 + 120 = 145. Logo 145 é um Strong Number.

Exemplo de função para resolver a questão:

```c
int strongnumber (int a , int soma , int primeiroa)
{
	if (a == 0)
	{
		if (soma != primeiroa)
		{
			printf("N\n");
			printf("%d\n", soma);
			return 0 ;
		}
		else 
		{
			printf("S\n");
			return 0 ;
		}
	}
	else 
	{
		int y ,z  ;
                y = a % 10 ;
		z = fat (y);
	        soma = soma + z ;
		return strongnumber (a / 10 , soma , primeiroa);
	}
	
}
```

407 - 3n + 1 

https://www.thehuxley.com/problem/407

Considere o seguinte algoritmo para gerar uma sequência de números. Comece com um inteiro n. Se n for par, divida por 2. Se n for ímpar, multiplique por 3 e some 1. Repita esse processo com o novo valor de n, terminando quando n = 1. Por exemplo, a seguinte sequência de números será gerada quando n é 22:

22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

Exemplo de função para resolver a questão:

```c
int fun (int num , int i)
{
    if (num <= 1)
    {
        return i ;
    }
    else 
    {
        if(num % 2 == 0)
	{
	    return fun (num / 2 , i + 1) ;
	}
	else
	{
	    return fun (3 * num + 1 , i + 1);
	}
    }
}
```
