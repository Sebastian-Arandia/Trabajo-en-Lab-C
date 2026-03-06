#include <stdio.h>

int main () {

char nombre [100];
int edad;
char carrera [100];
int semestre;

printf ("Ingrese el nombre del estudiante: ");
scanf ("%s", &nombre);

printf ("Ingrese la edad del estudiante: ");
scanf ("%d", &edad);

printf ("Ingrese la carrera del estudiante: ");
scanf ("%s", &carrera);

printf ("Ingrese el semestre del estudiante: ");
scanf ("%d", &semestre);

printf ("Los datos del estudiante son los siguientes:\n ");


printf ("Nombre: %s\n ", nombre);
printf ("Edad: %d\n ", edad);
printf ("Carrera: %s\n ", carrera);
printf ("Semestre: %d\n ", semestre);
return 0;


}
