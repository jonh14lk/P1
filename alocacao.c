// alocando arrays e matrizes dinamicamente usando malloc
// usando memset para por em todas as posicoes de uma matriz/array um determinado valor
// uso do free para desalocar memoria
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{ 
   // Parte 1 - Alocando um array dinamicamente
   // utilidade: Quando temos que criar um array muito gigante e que nao eh possivel declarar ele do jeito normal, podemos alocar ele

   int n , i , j ;
   printf("Digite o tamanho do array\n");
   scanf("%d", &n); // lendo o tamanho do array 

   int *v = (int *) malloc(n * sizeof(int)); // criando o meu array de inteiros e de tamanho n 
   memset(v , 0 , sizeof(v)); // inicializando todo o array com 0 em todas as posicoes

   printf("Inicializando tudo com 0\n") ; // imprimindo o meu array v apos incializar tudo com 0 
   for (i = 0 ; i < n ; i++) 
   {
      printf("%d ", v[i]) ;
   }
   printf("\n"); 

   printf("Agora digite os n valores pra leitura do array\n");
   for (i = 0 ; i < n ; i++) // agora vou ler o meu array v
   {
      scanf("%d", &v[i]);
   }

   printf("Imprimindo apos a leitura\n") ;  // imprimindo o meu array v apos a leitura
   for (i = 0 ; i < n ; i++)
   {
      printf("%d ", v[i]) ;
   }
   printf("\n\n"); 
  
   // Parte 2 - Alocando uma matriz dinamicamente

   int n2 , m2 ;
   printf("Digite o numero de linhas e de colunas da matriz\n");
   scanf("%d%d", &n2 , &m2); // lendo o numero de linhas e de colunas da matriz ;
  
   int **v2 = (int **) malloc(n2 * sizeof(int *)); // alocando as linhas da minha matriz de inteiros v2, como iremos alocar uma matriz, iremos trabalhar com **
    
   for (i = 0 ; i < n2 ; i++) // agora irei alocar cada coluna da matriz, para cada linha que eu ja aloquei, eu aloco uma coluna de tamanho m2 na posiçao v2[i]
   {
      v2[i] = (int *) malloc(m2 * sizeof(int));
      memset(v2[i] , 0 , sizeof(v2[i])); // inicializando toda a coluna com 0
   }

   printf("Inicializando tudo com 0\n") ; // imprimindo a matriz inicializada com 0
   for (int i = 0 ; i < n2 ; i++)
   {
      for (int j = 0 ; j < m2 ; j++)
      {
         printf("%d ", v2[i][j]);
      }

      printf("\n");
   }

   printf("Digite os n * m valores para a leitura da matriz\n") ; // lendo a matriz
   for (int i = 0 ; i < n2 ; i++)
   {
      for (int j = 0 ; j < m2 ; j++)
      {
         scanf("%d", &v2[i][j]);
      }
   }

   printf("imprimindo a matriz lida\n") ; // imprimindo a matriz lida
   for (int i = 0 ; i < n2 ; i++)
   {
      for (int j = 0 ; j < m2 ; j++)
      {
         printf("%d ", v2[i][j]);
      }

      printf("\n");
   }

   // Parte 3: Agora iremos liberar a memoria do que foi alocado
   // a funcao free desaloca o que foi alocado


   free(v); // desalocando o array 
   printf("Array desalocado\n");

   for (i = 0 ; i < n2 ; i++)
   {
      free(v2[i]); // desalocando cada coluna da matriz 
   }

   free(v2); // por ultimo libero oq sobrou das linhas da matriz
   printf("Matriz desalocada\n");
   return 0 ;
} 
