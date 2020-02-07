#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

bool verify_0 (int n , int matriz [][n] , int l , int c , int b)
{
   // a ideia eh ir descendo as linhas e verificando se existe um triangulo valido de 0
   // por exemplo se eu começo da posição [i][j] , devo ir verificando entre o intervalo [i + 1] [j - 1] ate [i + 1] [j + 1] (base 3)
   // depois pro intervalo [i + 2][j - 2] ate [i + 2][j + 2] (base 5)

   //                                        [i][j]
   //                   [i + 1] [j - 1] ,  [i + 1][j] ,  [i + 1][j + 1]   // base 3
   // [i + 2][i - 2] , [i + 2] [j - 1] ,  [i + 2][j] ,  [i + 2][j + 1] , [i + 2][j + 2] // base 5
   //                                          ...

   // e assim vou descendo de linha em linha e verificando gradativamente ate chegar no tamanho da base desejada

   int pos_left = c - 1 ;  // crio o contador para o inicio do intervalo
   int pos_left_backup = pos_left ; // crio o contador para salvar onde eu estava inicialmente, pois no final irei precisar
   int pos_right = c + 1 ; // crio o contador para o fim do intervalo 
   int pos_linha = l + 1 ; // crio o contador da linha que estou

   while (true)
   {
      pos_left_backup = pos_left ; // salvo o meu pos_left inicial

      if (pos_right >= n || pos_left < 0 || pos_linha >= n) // verifico se passei dos limites da matriz
      {
         return false ; // se sim retorno falso ;
      }

      int base_atual = 0 ; // contador para base atual do triangulo 

      while (pos_left <= pos_right) // enquanto eu nao cheguei no final do intervalo daquela linha
      {
         if (matriz[pos_linha][pos_left] == 1) // se eu achei um 1 no meio do triangulo que estou verificando
         {
            return false ; // ja posso retornar falso
         }
         else if (matriz[pos_linha][pos_left] == 0) // se eu achei um 0 no meio do triangulo que estou verificando
         {
            base_atual++ ; // posso continuar
         }

         pos_left++ ; // incremento meu pos_left
      }

      if (base_atual == b) // se eu fui percorrendo e cheguei num triangulo da base que a questao pede
      {
         return true ; // retorno verdadeiro pois ali existe um triangulo
      }

      pos_left = pos_left_backup ; // retorno o valor de pos_left inicial que eu salvei no backup

      pos_left--  ; // faço os incrementos descendo mais uma linha e aumentando o tamanho da base 
      pos_right++ ;
      pos_linha++ ;

   }
}
bool verify_1 (int n , int matriz [][n] , int l , int c , int b)
{
   // a ideia eh ir descendo as linhas e verificando se existe um triangulo valido de 1
   // por exemplo se eu começo da posição [i][j] , devo ir verificando entre o intervalo [i + 1] [j - 1] ate [i + 1] [j + 1] (base 3)
   // depois pro intervalo [i + 2][j - 2] ate [i + 2][j + 2] (base 5)

   //                                        [i][j]
   //                   [i + 1] [j - 1] ,  [i + 1][j] ,  [i + 1][j + 1]   // base 3
   // [i + 2][i - 2] , [i + 2] [j - 1] ,  [i + 2][j] ,  [i + 2][j + 1] , [i + 2][j + 2] // base 5
   //                                          ...

   // e assim vou descendo de linha em linha e verificando gradativamente ate chegar no tamanho da base desejada

   int pos_left = c - 1 ;  // crio o contador para o inicio do intervalo
   int pos_left_backup = pos_left ; // crio o contador para salvar onde eu estava inicialmente, pois no final irei precisar
   int pos_right = c + 1 ; // crio o contador para o fim do intervalo 
   int pos_linha = l + 1 ; // crio o contador da linha que estou

   while (true)
   {
      pos_left_backup = pos_left ; // salvo o meu pos_left inicial

      if (pos_right >= n || pos_left < 0 || pos_linha >= n) // verifico se passei dos limites da matriz
      {
         return false ; // se sim retorno falso ;
      }

      int base_atual = 0 ; // contador para base atual do triangulo 

      while (pos_left <= pos_right) // enquanto eu nao cheguei no final do intervalo daquela linha
      {
         if (matriz[pos_linha][pos_left] == 0) // se eu achei um 0 no meio do triangulo que estou verificando
         {
            return false ; // ja posso retornar falso
         }
         else if (matriz[pos_linha][pos_left] == 1) // se eu achei um 1 no meio do triangulo que estou verificando
         {
            base_atual++ ; // posso continuar
         }

         pos_left++ ; // incremento meu pos_left
      }

      if (base_atual == b) // se eu fui percorrendo e cheguei num triangulo da base que a questao pede
      {
         return true ; // retorno verdadeiro pois ali existe um triangulo
      }

      pos_left = pos_left_backup ; // retorno o valor de pos_left inicial que eu salvei no backup

      pos_left--  ; // faço os incrementos descendo mais uma linha e aumentando o tamanho da base 
      pos_right++ ;
      pos_linha++ ;

   }
}
int main() 
{ 
   int t , num_case = 1 ;
   scanf("%d", &t); // lendo a quantidade de casos testes 

   while (t--) // para cada caso teste
   {
      int b , n , i , j ;
      scanf("%d%d", &b , &n); // lendo o tamanho da base e a dimens�o da matriz
      int c1 = 0 , c0 = 0 ; // inicalizando o contador de triangulos de 1 e de 0
      int matriz [n][n] ; // criando a matriz

      for (i = 0 ; i < n ; i++) // lendo a matriz 
      {
         for (j = 0 ; j < n ; j++)
         {
            scanf("%d", &matriz[i][j]) ;
         }
      }

      for (i = 0 ; i < n ; i++) // percorrendo a matriz 
      {
         for (j = 0 ; j < n ; j++)
         {
            if (matriz[i][j] == 1) // se achei um 1, chamo a funcao de verificar triangulo de 1
            {
               if (verify_1(n , matriz , i , j , b)) // se achei um triangulo e a funcao me retorna verdadeiro
               {
                  c1 ++ ;
               }
            }
            else if (matriz[i][j] == 0) // se achei um 0, chamo a funcao de verificar triangulo de 0
            {
               if (verify_0(n , matriz , i , j , b)) // se achei um triangulo e a funcao me retorna verdadeiro
               {
                  c0 ++ ;
               }
            }
         }
      }

      printf("Caso %d:\n", num_case); // printando o numero do caso
      printf("%d triangulos formados por 1\n", c1); // printando a quantidade de triangulos de 1
      printf("%d triangulos formados por 0\n", c0); // printando a quantidade de triangulos de 0

      num_case++ ; // incremento meu contador do numero do caso
   }

   return 0 ;
} 
