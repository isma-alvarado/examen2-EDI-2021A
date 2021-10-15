
#include<stdio.h>
#include<stdlib.h>
#define N 10
#define NOMBRES 10


 void CapturaDatos(int Empleados, int clave,char nombres[50]);



int main()
{
int nombresE[NOMBRES];
int NumEmpleados,claves;

float promedioAlumnos;

CapturaDatos(NumEmpleados,claves,nombresE);

}

 void CapturaDatos(int Empleados, int clave,char nombres[NOMBRES] )
 {
 int i,j;
 float estatura,salario;


 do{
printf("Dime el numero de alumnos: \n");
scanf("%d",&Empleados);


if(Empleados>N)

printf("\n El numero maximo es 10 \n");
printf("\n");

}while(Empleados>N);




    for(i=0;i<Empleados;i++)    //i=i+1
    {
       printf("Dime el nombre del Empleado No.%d: \n",i+1);
       scanf("%d",&clave);
    }

    printf("\n");
    for(i=0;i<Empleados;i++)    //i=i+1
    {
       printf("Dime la clave del empleado No.%d: \n",i+1);
       scanf("%d",&clave);
    }


    printf("\n");
    for(i=0;i<Empleados;i++)    //i=i+1
    {
       printf("Dime el nombre del empleado No.%d: \n",i+1);
       scanf("%s",&nombres[i]);
    }

    for(i=0;i<Empleados;i++)    //i=i+1
    {
       printf("Dime la estatura del empleado No.%d: \n",i+1);
        scanf("%f.2",&estatura);
        printf("\n");
       for(j=0;j<Empleados;j++)    //i=i+1
        {
            printf("Dime el salario del empleado No.%d: \n",i+1);
            scanf("%f.2",&salario);
        }



    }
}


