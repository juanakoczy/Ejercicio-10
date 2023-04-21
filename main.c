//Defina una función que convierte una cadena de caracteres, pasada por referencia, a
//mayúsculas.
//Notas:
//a. Según el código ASCII => C+32=c. Donde c pertenece al conjunto de
//caracteres alfabéticos en minúscula y C en mayúscula.
//b. La finalización de una cadena de caracteres se representa mediante  ́/0 ́
#include <stdio.h>
#include <string.h>

void cambiar (char *cadena)
{
    int i;
    for (i==0; cadena[i]!='\0'; i++)
        {
        if (cadena[i]>='a'&cadena[i]<='z')
            cadena[i]= cadena [i]-32;
        }

}
int main() {
   char texto[100];
    printf ("Ingrese un texto:\n");
    gets (texto);
    printf("Texto ingresado:\n%s\n",texto);
    cambiar(texto);
    printf("Texto modificado:\n%s\n",texto);
return 0;
}