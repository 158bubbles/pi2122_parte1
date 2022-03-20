#include <stdio.h>
#include <stdlib.h>

int main(){
  int max, smax, n;
  
  scanf("%d", &n);
  max = n;
  smax = n;
  
  while(n != 0){
    if(n > max){
      max = n;
      smax = max;
    }
    else {
      smax = n;
    }
  
    scanf("%d", &n);
  }
  
  printf("O segundo maior elemento é: %d", smax);


  return 0;
}
