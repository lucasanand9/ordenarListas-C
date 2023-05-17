#include <stdio.h>
//ordenar por seleção
int main(){
    int numeros[10], menor, aux, indice = 0, x=0;
    for (int i = 0; i < 10; i++){
        scanf(" %i", &numeros[i]);
    }

    for (int j = 0; j < 10; j++){
    menor = numeros[j];
        for (int i = 0; i+j < 10; i++){
            if(menor > numeros[i+j]){
                menor = numeros[i+j];
                indice = i+j;
            }
        }

        aux = numeros[j];
        numeros[j] = menor;
        numeros[indice] = aux;
    }

    while (x<10){
        printf(" %i ", numeros[x]);
        x++;
    }
    
    
    return 0;
   
}