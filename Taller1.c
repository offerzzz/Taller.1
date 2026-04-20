#include <stdio.h>
int main (){
    int numestudiantes=5;
    int nummaterias=3;
    char materias [3][20];
    float notas [5][3];
    for (int i=0; i<3; i++){
        printf("Ingrese el nombre de las  materias:\n");
        scanf("%s", materias[i]);
        for(int j=0; j<5; j++){
        printf("Ingrese la nota:\n");
        scanf("%f", &notas[i][j]); 
        while (notas[i][j] <0 || notas[i][j] >10){
            printf("nota invalida ingrese otra: ");
            scanf("%f", &notas[i][j]);
        }
        }
    }
    return 0;

    

}