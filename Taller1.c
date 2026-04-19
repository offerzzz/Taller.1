#include <stdio.h>
int main (){
    char materias [3][20];
    float notas [3][5];
    for (int i=0; i<3; i++){
        printf("Ingrese el nombre de las  materias:\n");
        scanf("%s", materias[i]);
        for(int j=0; j<5; j++){
        printf("Ingrese la nota:\n");
        scanf("%f", &notas[i][j]); 
        while (notas[i][j] <0 || notas[i][j] >10){
            printf("nota invalida ingrese otra: ");
            scanf("%d", &notas[i][j]);
        }
        }
    }
    return 0;
}