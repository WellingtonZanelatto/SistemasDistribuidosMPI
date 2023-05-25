#include<stdio.h>
#include<stdlib.h>
#include <omp.h>

/** Vetor com 10 elementos numericos inteiros digitados
Calcular a soma destes elementos e exibir o vetor e a soma
*/

int main(){  
  //declaração das variaveis
  int tam=1000000, A[tam], i;
  double soma=0, start, end, duracao;
    
  //entrada dos valores digitados
  for(i=0; i<tam; i++){
    A[i] = 324323424;
  }
    
  start = omp_get_wtime();
 
  //calculo da soma
  for(i=0; i<tam; i++){
    soma=soma+A[i];
  }
  
  end = omp_get_wtime();
  duracao = end - start;  

  /* imprime o tempo obtido */
  printf("\n Tempo: %lf\n", duracao);
  /* imprime a soma do vetor */
  printf(" Soma: %10.2lf\n\n", soma);
}
