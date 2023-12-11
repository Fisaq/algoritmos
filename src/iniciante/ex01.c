#include <stdio.h>

typedef struct aluno{
  double notaA1;
  double notaA2;
}Aluno;

void receberNotas(Aluno aluno[], int *tam){

  for(int c = 0; c < *tam; c++){
    
    printf("\nAluno %d:\n", c + 1);
    
    printf("\nInforme a nota A1: ");
    scanf("%lf", &aluno[c].notaA1);

    printf("\nInforme a nota A2: ");
    scanf("%lf", &aluno[c].notaA2);
  }
}

int calcularMedia(Aluno aluno[], int *tam){

  double media = 0.0;
  
  for(int c = 0; c < *tam; c++){
    
    media = (0.4 * aluno[c].notaA1) + (0.6 * aluno[c].notaA2);
    
    printf("\nAluno %d:\n", c + 1);
    printf("\nNota A1: %.1lf", aluno[c].notaA1);
    printf("\nNota A2: %.1lf", aluno[c].notaA2);
    printf("\nMédia: %.1lf\n", media);

  }
  return 0;
}

int main(){

  Aluno aluno[2];
  int tam = 2;

  receberNotas(aluno, &tam);
  calcularMedia(aluno, &tam);
  
  return 0;
}
