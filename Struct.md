# Structs na linguagem C

Structs, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado.

A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável. 
Por exemplo, se for preciso armazenar a altura, o peso e a idade de uma pessoa, pode-se criar uma struct chamada Pessoa e agrupar os dados em um único tipo de dado, 
conforme o exemplo a seguir.

```c
struct pessoa
{
    double Peso;   
    int Idade;    
    double Altura; 
};
```

Ainda nesse contexto, se quisermos armazenar várias pessoas nesre exemplo, podemos armazenar criando arrays de struct.

```c
int main ()
{
    int n = 1000;
    struct pessoa p [n]; // criando um array de struct com o nome p e do tipo pessoa de tamanho 1000
    return 0 ;
}
```

Para ler os elementos da struct, podemos fazer uma função para isto.

```c
void ler_struct (struct pessoa p [], int i , int n)
{
    if (i == n)
    {
        return ;
    }
    else
    {
        scanf("%lf", &p[i].Peso);
        scanf("%d", &p[i].Idade);
        scanf("%lf", &p[i].Altura);
        ler_struct(p , i + 1 , n);
    }
    
}
```
E para imprimir também.

```c
void imp_struct (struct pessoa p [], int i , int n)
{
    if (i == n)
    {
        return ;
    }
    else
    {
        printf("Peso: %.2lf\n", p[i].Peso);
        printf("Idade: %d\n", p[i].Idade);
        printf("Altura: %.2lf\n", p[i].Altura);
        imp_struct(p , i + 1 , n);
    }
    
}
```
Código do exemplo completo:
```c
#include <stdio.h>

struct pessoa
{
    double Peso;   
    int Idade;    
    double Altura; 
};
void imp_struct (struct pessoa p [], int i , int n)
{
    if (i == n)
    {
        return ;
    }
    else
    {
        printf("Peso: %.2lf\n", p[i].Peso);
        printf("Idade: %d\n", p[i].Idade);
        printf("Altura: %.2lf\n", p[i].Altura);
        imp_struct(p , i + 1 , n);
    }
    
}
void ler_struct (struct pessoa p [], int i , int n)
{
    if (i == n)
    {
        return ;
    }
    else
    {
        scanf("%lf", &p[i].Peso);
        scanf("%d", &p[i].Idade);
        scanf("%lf", &p[i].Altura);
        ler_struct(p , i + 1 , n);
    }
    
}
int main ()
{
    int n;
    scanf("%d", &n);
    struct pessoa p [n];
    ler_struct(p , 0 , n);
    imp_struct(p , 0 , n);
    return 0 ;
}
```

Questões para treino:

Banco de dados: https://www.thehuxley.com/problem/331?quizId=4285
Ambrosio Bus company: https://www.thehuxley.com/problem/268?quizId=4285
Banco dos inimigos: https://www.thehuxley.com/problem/476?quizId=4285
Características Físicas:https://www.thehuxley.com/problem/73?quizId=4285
Escolhendo a vocação: https://www.thehuxley.com/problem/477?quizId=4285
Lanchonete da ambrosina: https://www.thehuxley.com/problem/12?quizId=4285
Olimpíadas: https://www.thehuxley.com/problem/58?quizId=4285
