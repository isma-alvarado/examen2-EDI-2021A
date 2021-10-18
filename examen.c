//CORRECION DEL EXAMEN
#include <stdio.h>
#include <string.h>
#define N 4
#define COL_ESTATURA 0
#define COL_SUELDO 1


void captura(int clave[N],char nombre[N][20],float datos[N][2]);

int buscaEmpleadoAlto(float info[N][2]);
void ordenaEmpleadoPorSueldo(int clave[N],char nombre[N][20],float datos[N][2]);

void ImprimeDatos(int clave[N],char nombre[N][20],float datos[N][2]);

int main()
{

int clave[N];
char nombre[N][20];
float datos[N][2];

int posicionMasAlto;

captura(clave,nombre,datos);

ordenaEmpleadoPorSueldo(clave,nombre,datos);

ImprimeDatos(clave,nombre,datos);

posicionMasAlto = (buscaEmpleadoAlto(datos));

printf("EL nombre del empleado mas alto es: %s\n",nombre[posicionMasAlto]);
printf("Y su estatura es: %f.2\n",datos[posicionMasAlto][COL_ESTATURA]);


return 0;


}

void ImprimeDatos(int clave[N],char nombre[N][20],float datos[N][2])
{
    int empleado;

    printf("CLAVE             NOMBRE             ESTATURA           SALARIO \n");

    for(empleado=0;empleado<N;empleado++)
    {
        printf("%d\t\t",clave[empleado]);
        printf("%s\t\t",nombre[empleado]);
        printf("%f \t\t",datos[empleado][COL_ESTATURA]);
        printf("%f \n",datos[empleado][COL_SUELDO]);
    }
}





void ordenaEmpleadoPorSueldo(int clave[N],char nombre[N][20],float datos[N][2])
{
    int i,j;
    int aux;
    int auxClave;
    char auxNombre[20];

    for(i=0;i<N-1;i++)//Acomoda todos los elementos
    {
        for(j=0;j<N-1;j++)//intercambio para
        {
            if(datos[j][COL_SUELDO]<datos[j+1][COL_SUELDO])
            {
                //intercambio del sueldo
                aux=datos[j][COL_SUELDO];
                datos[j][COL_SUELDO]=datos[j+1][COL_SUELDO];
                datos[j+1][COL_SUELDO]=aux;


                //intercambio estatura

                aux=datos[j][COL_ESTATURA];
                datos[j][COL_ESTATURA]=datos[j+1][COL_ESTATURA];
                datos[j+1][COL_ESTATURA]=aux;


                //intercambio la clave

                auxClave=clave[j];
                clave[j]=clave[j+1];
                clave[j+1]=auxClave;



                //intercambio de nombre

                strcpy(auxNombre,nombre[j]);
                strcpy(nombre[j],nombre[j+1]);
                strcpy(nombre[j+1],auxNombre);


            }

        }

        }
    }








int buscaEmpleadoAlto(float info[N][2])
{
    int empleado;
    float mayor = info[0][COL_ESTATURA];
    int posicion = 0;


    for(empleado=0;empleado<N;empleado++)
    {

        if(info[empleado][COL_ESTATURA]>mayor)
        {
            mayor = info[empleado][COL_ESTATURA];
            posicion = empleado;
        }


    }
}


void captura(int clave[N],char nombre[N][20],float datos[N][2])
{
    int empleado;
    for(empleado=0;empleado<N;empleado++)
    {
        printf("CLAVE[%d]: ",empleado+1);
        scanf("%d",&clave[empleado]);

        printf("NOMBRE[%d]: ",empleado+1);
        scanf("%s",&nombre[empleado]);

        printf("ESATURA[%d]: ",empleado+1);
        scanf("%f",&datos[empleado][COL_ESTATURA]);

        printf("SUELDO[%d]: ",empleado+1);
        scanf("%f",&datos[empleado][COL_SUELDO]);
        printf("\n");
    }
}





