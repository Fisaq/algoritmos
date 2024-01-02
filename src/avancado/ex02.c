#include <stdio.h>
#include <stdlib.h>

void mediaAlunos(){

  int notas[5];
  int nota;

  int c = 0;
  int cont = 0;

  while(cont != 1){
    
    printf("\nAluno %d: ", c + 1);
    scanf("%d", &nota);
    if(nota > 10){
      printf("\nFavor inserir notas no intervalo (0 - 10).\n");
      c = (c + 1) - 1;
    }
    else{
      notas[c] = nota;
      c++;
    }

    if(c >= 5){
      cont = 1;
    }
  }

  float somaNotas = 0;

  for(int c = 0; c < 5; c++){
    somaNotas += notas[c];
  }

  float media = somaNotas/5;

  printf("\nA média da turma é %.1f.", media);

  int abaixo = 0;
  int acima = 0;

  for(int c = 0; c < 5; c++){
    if(notas[c] < media){
      abaixo++;
    }
    else{
      acima++;
    }
  }

  printf("\n\nAlunos acima da média: %d", acima);
  printf("\nAlunos abaixo da média: %d", abaixo);

}

int main(){

  mediaAlunos();
  
  return 0;
}
