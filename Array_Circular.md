# Array Circular

## Definição 

Um array é chamado de circular se considerarmos o primeiro elemento como o próximo do último elemento e o anterior do
primeiro elemento como o último elemento.

![GitHub Logo](http://www.mathcs.emory.edu/~cheung/Courses/171/Syllabus/8-List/FIGS/queue04.gif)

## Para Percorrer o array circular 

Exemplo: 


suponha que n pessoas estejam sentadas em uma mesa circular com os nomes A,B,C,D,E,F Dado um nome, precisamos imprimir todas as n pessoas (em ordem) começando pelo nome , por exemplo , se começarmos a imprimir a partir da pessoa E , deveremos imprimir E,F,A,B,C,D .

```bash
void print(char a[] , int n , int ind , int i) 
{ 
    if (i == 6) // se eu ja fiz 6 impressões , trabalho concluido
    {
        return ;
    }
    else
    {
        printf("%c", a[ind % n]); // fazendo resto com o tamanho do meu array , eu garanto que ele nunca 
        // vai imprimir uma posição que não exista.
        
        print (a , n , ind + 1 , i + 1) ;
    }
} 
int main() 
{ 
    char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' }; // criando o array
    int n = 6 ; // tamanho do meu array 
    print(a, n, 5 , 0); // função para printar a partir da letra E
    return 0; 
} 
```

## Matriz circular 

1001 - Ixats vs Rebus
https://www.thehuxley.com/problem/1001?locale=pt_BR

... uma bomba dos ixats destrói uma area em formato de X, ou seja , se a posição (x, y) é atacada, todas as suas 4 diagonais mais próximas também são destruídas em seguida com a propagação da bomba: (x+1, y+1), (x+1, y-1), (x-1, y-1), (x-1, y+1)...


... A propagação das bombas em formato de X também obedecem as regras dos buracos de minhoca, ou seja, a linha anterior a primeira linha é a ultima linha assim que nem a posterior a ultima linha é a primeira linha. Isso também é válido para as colunas da matriz.

Exemplo de Implementação:

```bash
void bomb (int n , int m , int matriz [][m] , int i)
{
    matriz[i % n][j % m] = 0 ;
    matriz[(i + 1) % n][(j + 1) % m] = 0 ;
    matriz[(i - 1) % n][(j + 1) % m] = 0 ;
    matriz[(i + 1) % n][(j - 1) % m] = 0 ;
    matriz[(i - 1) % n][(j - 1) % m] = 0 ;
}
```
