include <stdio.h>
int main() {
    int num_estudiantes = 5, num_materias = 3;
    char materias[3][20];
    float notas[5][3];
    for (int j = 0; j < num_materias; j++) {
        printf("Nombre de la materia %d: ", j + 1);
        scanf("%s", materias[j]);
    }
    for (int i = 0; i < num_estudiantes; i++) {
        printf("--- Estudiante %d ---\n", i + 1);
        for (int j = 0; j < num_materias; j++) {
            do {
                printf("Nota en %s: ", materias[j]);
                scanf("%f", &notas[i][j]);
                if (notas[i][j] < 0 || notas[i][j] > 10) printf("La nota debe ser de 0 a 10\n");
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
        printf("\n");
    }
    printf("Los reportes por estudiantes son: \n");
    for (int i = 0; i < num_estudiantes; i++) {
        float suma = 0, max = -1, min = 11;
        for (int j = 0; j < num_materias; j++) {
            suma += notas[i][j];
            if (notas[i][j] > max) max = notas[i][j];
            if (notas[i][j] < min) min = notas[i][j];
        }
        printf("Estudiante %d ------ Promedio: %.2f ------ Max: %.2f ------ Min: %.2f\n\n", i + 1, suma / num_materias, max, min);
    }
    printf("\n--- REPORTE POR ASIGNATURA ---\n");
    for (int j = 0; j < num_materias; j++) {
        float suma_asig = 0;
        float max_asig = -1; // Piso para buscar nota mas alta
        float min_asig = 11; // Techo para buscar nota mas baja
        int ap = 0, rep = 0;
        for (int i = 0; i < num_estudiantes; i++) {
            suma_asig += notas[i][j];
            if (notas[i][j] > max_asig) max_asig = notas[i][j];
            if (notas[i][j] < min_asig) min_asig = notas[i][j];
            if (notas[i][j] >= 6.0) ap++; else rep++;
        }
        printf("Materia: %s\n - Promedio: %.2f\n - Max: %.2f ------ Min: %.2f\n - Aprobados: %d ------ Reprobados: %d\n", materias[j], suma_asig / num_estudiantes, max_asig, min_asig, ap, rep);
    }
    return 0;
}
