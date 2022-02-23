#include <stdio.h>

void quadrado (int n){
    
    int linha;
    int col;
    
    for(linha=0; linha < n; linha++){
        for(col=0; col < n; col++){
            
            putchar('#');
        }
        putchar('\n');
    }
    
}

void xadrez (int n){
    
    int linha;
    int col;
    int i=0;
    
    for(linha=0; linha < n; linha++){
        for(col=0; col < n; col++){
            
            if(i%2 == 0) putchar('#');
            else putchar('_');
            
            i++;
        }
        putchar('\n');
    }
}

void trianguloH (int n){
   
   int col;
   int linha;
   
   for(linha=0; linha < n; linha++){
       for(col=0; col < linha; col++){
           
           putchar('#');
       }
       
       putchar('\n');
   }
   
   for(linha=n; linha > 0; linha--){
       for(col=0; col < linha; col++){
           
           putchar('#');
       }
       
       putchar('\n');
   }
   
}

void trianguloV (int n){
    
    int linha;
    int col;
    int qtt= n + (n-1);
    
    for(linha=0; linha < n; linha++){              //na primeira linha (linha=0)
        for(col=0; col < (qtt/2 -linha);col++){    //preenche 4 espaços
            
            putchar(' ');
        }
        
        for(col=0; col < (2*linha + 1);col++){    //preenche 1 espaço
            
            putchar('#');
        }
        
        for(col=0; col < (qtt/2 -linha);col++){   //preenche 4 espaços
            
            putchar(' ');
        }
        
        putchar('\n');
    }
    
}


int main()
{
    quadrado (5);
    xadrez (5);
    trianguloH (5);
    trianguloV (5);
    return 0;
}
