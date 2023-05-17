#include <stdio.h>
#define S 10
//ordenar por bubble
int main(){

    int numeros[S];
    int aux;

    for (int i = 0; i < S; i++){
        scanf(" %i", &numeros[i]);
    }

for (int j = 0; j < S; j++){
    aux = 0;
    for (int  i = 0; i < S-1; i++){
        if(numeros[i] > numeros[i+1]){
          aux=numeros[i];
          numeros[i] = numeros[i+1];
          numeros[i+1] = aux;
        }
    }

printf("\n Iteracao %i\n",j);
for (int i = 0; i < S; i++){
    printf(" %i ", numeros[i]);
}
}    

printf("\n");
for (int i = 0; i < S; i++){
    printf(" %i ", numeros[i]);
}

   return 0;
}