#include <stdio.h>
#include <string.h>
void limpar_entrada()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF)
  {
  }
}
void ler(char *buffer, int length)
{
  fgets(buffer, length, stdin);
  strtok(buffer, "\n");
}

int main () {

  int x, soma;
  
  soma = 0;

  printf("Digite o primeiro numero: ");
  scanf("%d", &x); 

  while (x != 0){
    soma = soma + x;
    printf("Digite um numero: ");
    scanf("%d", &x);
  }

  printf("Soma dos numeros igual:%d\n ", soma);


  return 0;
}