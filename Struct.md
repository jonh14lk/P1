# Structs na linguagem C

Structs, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado.

A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável. 
Por exemplo, se for preciso armazenar a altura, o peso e a idade de uma pessoa, pode-se criar uma struct chamada Pessoa e agrupar os dados em um único tipo de dado, 
conforme o exemplo a seguir.

```c
struct pessoa
{
    float Peso;   
    int Idade;    
    float Altura; 
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
ler_struct (struct pessoa p [], int i , int n)
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
imp_struct (struct pessoa p [], int i , int n)
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
