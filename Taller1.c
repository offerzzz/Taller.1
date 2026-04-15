#include <stdio.h>
int main (){
    char materias [3][20];
    float notas [3][5];
    for (int i=0; i<3; i++){
        printf("Ingrese el nombre de las  materias %d: ", i++);
        scanf("%s", materias[i]);
        for(int j=0; j<5; j++);
        printf("Ingrese la nota %d: ", j++);
        scanf("%f", &notas[i][j]); 
    }

}