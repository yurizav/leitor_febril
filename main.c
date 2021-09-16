#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  float temp;
  setlocale (LC_ALL,"Portuguese");

  printf("\nSeja bem vindo ao Leitor de Temperatura em Linguagem C !\n");
  printf("\nUse '.' para separar as casas decimais, ex: '35.6', '37.8'!\n\n");
  printf("Digite a temperatura indicada no termômetro: \n");
  scanf("%f",&temp);

    if (temp >= 35.5 && temp < 37){
      printf("A temperatura está saudável !");
    }
    else if( temp >= 37 && temp < 37.8){
      printf("A temperatura está elevada, porém dentro do esperado !");
    }
    else if(temp >= 37.8 && temp < 39){
      printf("Sua temperatura é febril, consulte um médico !");
    }
    else if(temp >= 39){
      printf("Febra alta, há risco de vida !\nVisite um médico com urgência !");
    }
    else{
      printf("A temperatura está abaixo dos padrões esperados, consulte um médico!");
      system("pause");
      return 0;
    }
}