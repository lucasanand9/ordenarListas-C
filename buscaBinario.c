#include <stdio.h>
#define S 10

int main(){
    int busca [S] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int meio = (int)S/2;
    int pesqusia;
    int minimo = 0 , maximo = S;

    scanf("%i", &pesqusia);
    
    while (minimo != (maximo-1)){
        printf("\n Minimor = %i;\n Maximo = %i; \n Meio = %i; \n", minimo, maximo, meio);
        if(pesqusia == busca[meio]){
            printf("O seu numero esta na posicao %i do vetor", meio);
            return 0;
        }
        if (pesqusia > busca[meio]){
            minimo = meio;
            meio = (maximo + minimo)/2;
        }else{
            maximo = meio;
            meio = maximo/2;
        }
    }

    printf("Erro");
    return 0;

}
