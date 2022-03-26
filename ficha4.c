#include <stdio.h>
#include <string.h>

int eVogal(char c){
    return (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U' );
}


int contaVogais (char s[]) {
    int i, count = 0;
    
    for(i=0; i < strlen(s); i++){
        if(eVogal(s[i])) count++;
    }
    
    return count;
}


int retiraVogaisRep (char s[]){
    int i, j = 0, count = 0;
    char aux[strlen(s)+1];
    
    for(i=0; i < strlen(s); i++){
        if(eVogal(s[i]) && s[i] == s[i+1]){
            count++;
        } else {
            aux[j] = s[i];
            j++;
        }
    }
    
    aux[j] = '\0';
    strcpy(s, aux);
    
    return count;
}


int duplicaVogais (char s[]){
    int i, j = 0, count = 0;
    char aux[strlen(s)+contaVogais(s)+1];
    
    for(i=0; i < strlen(s); i++){
        if(eVogal(s[i])){
            aux[j] = aux[j+1] = s[i];
            j+=2;
            count++;
        } else {
            aux[j] = s[i];
            j++;
        }
    }
    
    aux[j] = '\0';
    strcpy(s, aux);
    
    return count;
}

int main()
{   char s1 [100] = "Estaa e umaa string coom duuuplicadoos";
    int x;
    
    printf ("Testes\n");
    printf ("A string \"%s\" tem %d vogais\n", s1, contaVogais (s1));
    
    x = retiraVogaisRep (s1);
    printf ("Foram retiradas %d vogais, resultando em \"%s\"\n", x, s1);
    
    x = duplicaVogais (s1);
    printf ("Foram acrescentadas %d vogais, resultando em \"%s\"\n", x, s1);
    
    printf ("\nFim dos testes\n");

    return 0;
}




void dumpV (int v[], int N){  //dá print do array nos testes
    int i;
    putchar ('{');
    for (i=0; i<N; i++) printf ("%2d ", v[i]);
    putchar ('}');
}
void simNao (int x){   
    if (!x) printf (" não "); 
}


int ordenado (int a[], int N){
    int i;
    
    for(i=0; i < N; i++){
        if(a[i] <= a[i+1]){
            return 1;
        } else {
            return 0;
        }
    }
}


void merge (int a[], int na, int b[], int nb, int r[]){
    int i=0, j=0, h;
    
    for(h=0; i+j < na+nb; h++){
        if(i == na){
            r[h] = b[j];
            j++;
        }
        else if(j == nb){
            r[h] = a[i];
            i++;
        }
        else{
            if(a[i] < b[j]){
                r[h] = a[i];
                i++;
            } else {
                r[h] = b[j];
                j++;
            }
        }
}



void arraycpy(int copiado[], int original[], int N){
    int j;
 
    for(j=0 ; j < N ; j++)
        copiado[j] = original[j];
}


int partition (int v[], int N, int x){
    int i, men = 0, mai = N-1, count = 0;
    int aux[N];
    
    for(i=0; i < N; i++){
        
        if(v[i] <= x){
            aux[men] = v[i];
            men++;
            count++;
        } else {
            aux[mai] = v[i];
            mai--;
        }
    }
    
    arraycpy(v, aux, N);
    
    return count;
}



int main() {  
    int a [15] = {10, 3,45,56, 8,23,13,42,77,31,18,88,24,45, 1},
        b [10] = { 4,12,34,45,48,52,61,73,84,87}, 
        c [10] = { 1, 3, 8,22,33,35,38,41,44,49}, 
        d [50];
    int x;
    
    printf ("Testes\n\n");

    printf ("O array "); dumpV(a,15);
    simNao (ordenado (a,15)); printf (" está ordenado\n");
    printf ("O array "); dumpV(b,10);
    simNao (ordenado (b,10)); printf (" está ordenado\n");
    
    printf ("\n\nMerge dos arrays "); dumpV (b,10);
    printf ("\ne                "); dumpV (c,10); 
    merge (b, 10, c, 10, d);
    printf ("\nresulta em       "); dumpV (d,20);

    printf ("\n\n\nA partição do array  "); dumpV (a,15);
    printf ("\nusando 30 resulta em "); 
    x = partition (a,15,30); 
    dumpV (a,15); printf (" e retorna %d \n", x);

    printf ("\nFim dos testes\n");
    return 0;
}
