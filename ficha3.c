#include <stdio.h>

void swapM (int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


void swap (int v[], int i, int j){
    swapM(v+i,v+j);
}


void inverteArray (int v[], int N){
    int i = 0;
    int j = N-1;
    
    while(i < j){
        swap(v,i,j);
        i++;
        j--;
    }
}


void inverteArraySwapM (int v[], int N){
    int i = 0;
    int j = N-1;
    
    while(i < j){
        swapM(v+i,v+j);
        i++;
        j--;
    }
}


void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
    putchar ('\n');
}


int soma (int v[], int N){
    int res = 0;
    
    while(N >= 0){
        res += v[N];
        N--;
    }
    return res;
}


int maximum (int v[], int N, int *m){
    
    int res = 0;
    if(N <= 0){
        res = -1;
    }
    else{
        int max = v[N-1];
        while (N > 0){
            if(v[N-1] > max) max = v[N-1];
            N--;
        }
        *m = max;
    }
    
    return res;
}

void quadrados (int q[], int N){
    q[0] = 0;
    
    for(int i=1; i < N; i++){
		q[i] = (i-1)^2 + ((2 * (i-1))+1);
	}
}



int main()
{  
    printf ("Testes\n");
    // teste das funções de swap
    
    int a, b, v[10] = {10, 6, 2, 3, 5, 1, 5, 9, 8, 7};
    int x = 3, y = 5;
    
    printf ("x = %d y = %d\n", x, y);
    swapM (&x, &y);
    printf ("x = %d y = %d\n", x, y);
    
    printf ("%d %d\n", v[0], v[9]);
    swap (v,0,9);
    printf ("%d %d\n", v[0], v[9]);
    
    printf ("ao invertemos o array "); dumpV (v,10);
    inverteArray (v,10);
    printf ("obtemos               "); dumpV (v,10);

    printf ("ao invertemos o array "); dumpV (v,10);
    inverteArraySwapM (v,10);
    printf ("obtemos               "); dumpV (v,10);
    
    
    // teste das funções maximum, soma e quadrados
    
    x = maximum (v,10, &y);
    printf ("O maior elemento de "); dumpV (v,10);
    printf ("é %d\n", y);
    
    
    printf ("Os 10 primeiros quadrados: "); 
    quadrados (v,10); 
    dumpV (v,10);
    
    
    x = soma (v,10);
    printf ("A soma dos elementos de "); dumpV (v,10);
    printf ("é %d\n", x);
    
    
    
    printf ("\nFim dos testes\n");

    return 0;
}
