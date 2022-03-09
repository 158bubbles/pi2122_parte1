float multInt1 (int n, float m){
    
    float r = 0;
    while (n != 0){
        
        r = r+m;
        
        if(n<0){
            n++;
        } else {
            n--;
        }
    }
    
    return r;
}


float multInt2 (int n, float m){
    
    float r = 0;
    
    while(n != 0){
        
        if(n%2 == 1){
        r = r+m;
        }
        
        n = n/2;
        m = m*2;
    }
    
    return r;
}




int mdc1 (int a, int b){

    int d;  //o numero onde começamos a testar se é divisor
    if (a<b){
        d = a;
    } else {
        d = b;
    }
    
    while ((a%d != 0 || b%d != 0) && d != 0){
        d--;
    }
    
    return d;
}



int mdc2 (int a, int b){
    
    int d;
    
    if(a > b){
        d = mdc2(a-b,b);
    } else if(a < b) {
        d = mdc2(a, b-a);        
    } else {
        d = a;
    }
    
    return d;
}



int fib (int n){
    
    int f;
    if(n < 3){
        f = 1;
    } else {
        f = fib(n-1) + fib(n-2);
    }
    
    return f;
}




int fastfib (int n){  //é a soma dos dois numeros anteriores 
    
    if (n < 3) return 1;
    else {
        int i = 3;    //indice que acaba quando chega ao n
        int numero1 = 1;  //pela sequencia de fibonacci
        int numero2 = 1;
        int aux;    //para fixar os numeros 1 e 2 em memoria
        
        while (i != n){
            
            aux = numero2;      //indice é fixado no numero 2 
            numero2 = numero2 + numero1;   //o novo numero 2 vai ser o do indice + o n1
            numero1 = aux;     //e o novo numero1 agora é onde ta o indice
            
            
            i++;
        }
        
        return numero1 + numero2;
    }
    
}




#include <stdio.h>

float multInt1 (int n, float m);
float multInt2 (int n, float m);
float multInt3 (int n, float m, int *count);

int mdc1 (int a, int b);
int mdc2 (int a, int b);
int mdc3 (int a, int b, int *count);
int mdc4 (int a, int b, int *count);

int fib (int n);
int fastfib (int n);

int main()
{  int a,b,r1,r2,r3,r4, 
       c1=0, c2=0;
   float f, f1, f2, f3;
    
   printf ("Introduza dois números para input das funções de multiplicação: ");
   scanf ("%d", &a); scanf ("%f", &f);
   f1 = multInt1 (a,f);
   f2 = multInt2 (a,f);
   
   printf ("Resultados das multiplicações: %f, %f (%d)\n", f1, f2, c1);
   
   printf ("Introduza dois números para input das funções de multiplicaç~ão: ");
   scanf ("%d", &a); scanf ("%d", &b);

   r1 = mdc1 (a,b);
   r2 = mdc2 (a,b);
 
   printf ("Resultados do mdc: %d, %d\n", r1, r2);
   
   printf ("Introduza um número para calcular o fib: ");
   scanf ("%d", &a);
   printf ("FastFib (%d) = %d \n", a, fastfib (a));
   printf ("Fib (%d) = %d \n", a, fib (a));
   
   return 0;
}


