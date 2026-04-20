#include <stdio.h>
int main() {
    int num_estudiantes = 5;
    int num_materias = 3;
    char materias[3][20];
    float notas[5][3]; 
    printf("Ingrese el nombre de las materias\n");
    for (int j = 0; j < num_materias; j++) {
        printf("Nombre de la materia %d: ", j+ 1);
        scanf("%s", materias[j]);
    }
    printf("\n");
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Ingrese las notas de los estudiantes %d\n", i+ 1);
        for (int j = 0; j < num_materias; j++) {
            do {
                printf("Nota en %s : ", materias[j]);
                scanf("%f", &notas[i][j]);
                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf(" No es posible, la nota registrada debe ser entre 0 y 10\n");
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
        printf("\n");
    }
    printf("Reporte de cada estudiante\n");
    for (int i = 0; i < num_estudiantes; i++) {
        float suma = 0;
        float max = -1; //Oye, este -1 es para que el programa sepa cuando agregar un nuevo máximo, o sea como que piensa así: si tu pones 5>-1? como si es guarda ese número como nuevo máximo
        float min = 11; //Este 11 de aquí es porque ningún número que ingresa es mayor que 10, si tu pones el 5 de nuevo, va a decir que 5<11? si, entonces es el nuevo mínimo

        for (int j = 0; j < num_materias; j++) {
            suma += notas[i][j];
            if (notas[i][j] > max) max = notas[i][j];
            if (notas[i][j] < min) min = notas[i][j];
        }
        float promedio = suma / num_materias;
        printf("Estudiante %d ------ Promedio: %.2f ------ Max: %.2f ------ Min: %.2f\n",  i + 1, promedio, max, min);
    }
    printf("REPORTE POR ASIGNATURA\n");
    for (int j = 0; j < num_materias; j++) {
        float suma_asig = 0;
        float max_asig = -1;
        float min_asig = 11;
        int aprobados = 0;
        int reprobados = 0;
        for (int i = 0; i < num_estudiantes; i++) {
            suma_asig += notas[i][j];
            if (notas[i][j] > max_asig) max_asig = notas[i][j];
            if (notas[i][j] < min_asig) min_asig = notas[i][j];
            if (notas[i][j] >= 6.0) {
                aprobados++;
            } else {
                reprobados++;
            }
        }
        printf("Materia: %s\n", materias[j]);
        printf("  - Promedio: %.2f\n", suma_asig / num_estudiantes);
        printf("  - Nota mas alta: %.2f ------ Nota mas baja: %.2f\n", max_asig, min_asig);
        printf("  - Aprobados: %d ------ Reprobados: %d\n\n", aprobados, reprobados);
    }

    return 0;
}