//programa que digita un dato y lo repite determinado numero de veces usando ciclo for//
#include <conio.h>
#include <stdio.h>
int main (){
int i,a, limite;

printf ("cuantas veces desea repetir el numero a escribir?");
scanf ("%d", &limite);

printf ("Teclee un dato\n\n");
scanf ("%d", &a);

if (limite>100)
printf ("error, el numero de veces por repetir es muy grande");
else{


for (i=1;i<limite;i++){
    printf ("\n%d",a);

                         }
    }
printf ("\n\noprima cualquier dato para salir");
getch ();	
}
