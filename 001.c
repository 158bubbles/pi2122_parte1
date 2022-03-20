#include <stdio.h>
#include <stdlib.h>

int main(){
  int max = 0, n;
  
  scanf("%d", &n);  //é inserido o primeiro número
  
  while(n != 0){
    if (n > max) max = n;
    
    scanf("%d", &n);
  }
  
  printf("O número máximo é: "%d", max);
  
  return 0;
}  
