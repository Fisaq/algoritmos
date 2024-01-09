#include <stdio.h>

typedef struct contato{
  char nome[45];
  char telefone[13];
} Contato;

void listaContatos(Contato contatinho[], int total){

  for(int c = 0; c < total; c++){
    
    printf("\n\nContato %d: ", c + 1);
    
    printf("\nNome: ");
    scanf("%s", contatinho[c].nome);

    printf("Telefone: ");
    scanf("%s", contatinho[c].telefone);
  }
}

void imprimeLista(Contato contatinho[], int total){

  printf("\n\n---- LISTA CONTATOS ----\n\n");

  for(int c = 0; c < total; c++){
    printf("\n%s - (%s)", contatinho[c].nome, contatinho[c].telefone);
  }
  
}

int main(){

  int total;
  Contato contatinho[total];
  
  printf("\nQuantos contatos deseja cadastrar?");
  printf("\nR: ");
  scanf("%d", &total);

  listaContatos(contatinho, total);
  imprimeLista(contatinho, total);
    
  return 0;
}
