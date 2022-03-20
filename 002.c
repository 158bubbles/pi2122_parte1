#include <stdio.h>
#include <stdlib.h>

int main(){
  int soma = 0, count = 0, n;
  float media = 0.0;
  
  scanf("%d", &n);
  
  while(n != 0){
    soma += n;
    count++;
    scanf("%d", &n);
  }
  
  media = soma/count;
  printf("O valor da média é: %d", media);


  return 0;
}
