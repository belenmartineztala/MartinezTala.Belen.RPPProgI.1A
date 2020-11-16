#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*1. Dada una estructura ePais cuyos campos
son id(int), nombre(20 caracteres), infectados(int),
 recuperados(int) y muertos(int). Desarrollar una función
 llamada actualizarMuertos que reciba el país y los muertos
 del dia y que acumule estos a los que ya tiene el país. La
  función no devuelve nada. *
*/
typedef struct
{
int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;
}ePais;

void actualizarMuertes(char* pais[]; int* muertospordia);

int main()
{
    int muerospordia = 100;
    char p
}

/*3. Crear una función que se llame ordenarCaracteres que reciba
una cadena de caracteres como parámetro y su responsabilidad es
 ordenarlos caracteres de manera ascendente dentro de la cadena.
 Ejemplo si le pasamos "algoritmo" la deja como "agilmoort" *
*/

void ordenarCaracteres(char* cadcaracteres[]);

void ordenarCaracteres(char* cadcaracteres[])
{
    int tam = strlen(cadcaracteres);
    char aux;

    for(int i=0; i<tam-1; i++)
    {
        for(int j= i+1; j<tam; j++)
        {
            if(cadcaracteres[i]>cadcaracteres[j])
            {
                aux=cadcaracteres[i];
                cadcaracteres[i]=cadcaracteres[j];
                cadcaracteres[j]=aux;
            }
        }

    }
}



/*2. Crear una función que se llame quitarVocales que reciba una cadena
de caracteres como parámetro y su responsabilidad es eliminar los caracteres
que sean vocales de la misma.  Ejemplo si le pasamos "democracia" la deja como
"dmcrc" */

void quitarVocales (char* cadcaracteres);
{
    for (int i=0; i<strlen(cadcaracteres); i++)
    {
        if(cadcaracteres[i]=='a' || cadcaracteres[i]=='e'|| cadcaracteres[i]=='i'|| cadcaracteres[i]=='o'|| cadcaracteres[i]=='u')
        {
            cadcaracteres[i] ='';
        }
    }
}
