#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMANHO 10
int vetor [TAMANHO];

void preenche(int limite);
void ordena();
void ordenadesc();
void escreve();

main(){
  srand(time(NULL));
  preenche(101);
  escreve();
  ordena();
  escreve();
  ordenadesc();
  escreve();
}

void preenche(int limite){
  int x;
  for(x = 0; x < TAMANHO; x++){
    vetor[x] = rand() % limite;
  }
}

void ordena(){
  int fx, faux;
  for(fx = 0; fx < TAMANHO - 1; fx++){
    if(vetor[fx] > vetor[fx + 1]){
      faux = vetor[fx + 1];
      vetor[fx + 1] = vetor[fx];
      vetor[fx] = faux;
      fx = -1;
    }
  }
}
void ordenadesc(){
  int fx, faux;
  for(fx = 0; fx < TAMANHO - 1; fx++){
    if(vetor[fx] < vetor[fx + 1]){
      faux = vetor[fx + 1];
      vetor[fx + 1] = vetor[fx];
      vetor[fx] = faux;
      fx = -1;
    }
  }
}

void escreve(){
  int fx;
  for(fx = 0; fx < TAMANHO; fx++){
    if(fx == TAMANHO - 1){
      printf("%i\n", vetor[fx]);
    }
    else{
      printf("%i - ", vetor[fx]);
    }
  }
}