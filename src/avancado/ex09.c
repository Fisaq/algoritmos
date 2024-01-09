#include <stdio.h>
#include <string.h>

typedef struct matric{
  char matricula[20];
  char email[60];
} Matricula;

void cadastrarMat(Matricula novaMat[], int total){

  for(int c = 0; c < total; c++){

    printf("\n\nAluno %d: ", c + 1);

    printf("\nMatricula: ");
    scanf("%s", novaMat[c].matricula);

    printf("Email: ");
    scanf("%s", novaMat[c].email);
  }
}

void localizarMat(Matricula novaMat[], char matricula[20], int total){

  int encontrou = 0;
  
  for (int c = 0; c < total; c++){
    if (strcmp(novaMat[c].matricula, matricula) == 0){
      printf("\nEsta matrícula corresponde a: %s", novaMat[c].email);
      encontrou += 1;
    }
  }
  if(encontrou == 0){
    printf("\nMatricula não encontrada!");
  }
}


int exA09(){

  int total;

  printf("\nQuantas matrículas deseja realizar?");
  printf("\nR: ");
  scanf("%d", &total);

  Matricula novaMat[total];

  cadastrarMat(novaMat, total);

  char consulta[20];
  int op;

  int cont = 0;

  while (cont < 1){
    printf("\n\nDeseja consultar uma matrícula?");
    printf("\n\n[1] S\n[2] Ñ\n\nR: ");
    scanf("%d", &op);

    if(op == 1){
      printf("\nInforme o número da matricula: ");
      scanf("%s", consulta);
      localizarMat(novaMat,consulta,total);
      cont += 1;
    }
    else if (op == 2){
      printf("\nAté a próxima!");
      cont += 1;
    }
    else{
      printf("\nOpção inválida.");
    }
  }

  printf("\n\nAté a próxima!");

  return 0;
}
