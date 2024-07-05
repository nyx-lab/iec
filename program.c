#include<stdio.h>

int main()
{
  int i, j, l, total, contaColuna, contaLinhas, soma = 1;

  while(total < 1 || total > 8){
    printf("Digite um numero entre 1-8: ");
    scanf("%d", &total);
  }

  //Cria as pirâmides do mario baseado no input do usuário
  for(i=0;i<total;i++)
  {
    contaLinhas = total;
    contaLinhas = contaLinhas - i;
    for(j=0;j<total;j++)
    {
      contaColuna = contaLinhas - 1;
      if(contaColuna > 0)
      {
          printf(" ");
      }
      else
      {
          printf("#");
      }
      contaLinhas--;
    }
    printf("  ");
    for(l = 0; l < soma; l++){
      printf("#");
    }
    soma++;
    printf("\n");

  }

  return 0;
  }
