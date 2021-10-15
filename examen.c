#include <stdio.h>

#define N 3
#define M 3
#define NOMBRES 100

void CapturaDatos(int clave[N], char nombre[NOMBRES], float arr[N][M]);
void ImprimeDatos(int clave[N], char nombre[NOMBRES], float arr[N][M], int empleado);

int Burbuja(float arr[N][M]);
void BuscaValor(float arr[N][M], float *pos, int *mayor);


int main()
{

	int trabajadores;
	int claves[N];
	char nombre[NOMBRES];
	float estaturaSueldo[N][M];
	float mayor=0;
	int posicion;
	trabajadores=Burbuja(estaturaSueldo);
	CapturaDatos(claves,nombre,estaturaSueldo);
    ImprimeDatos(claves,nombre,estaturaSueldo,trabajadores);

    BuscaValor(estaturaSueldo,&mayor,&posicion);



    printf("El empleado con el mayor esta en [%d] es %.2", posicion, mayor);

	return 0;
}

void CapturaDatos(int clave[N], char nombre[NOMBRES], float arr[N][M])
{
	int i;
	int j=0;

	for(i=0; i<N; i++)
	{
		printf("Dime la clave del empleado %d: ", i+1);
		scanf("%d", &clave[i]);
    }
        printf("\n");
    for(i=0; i<N; i++)
	{

		printf("Dime el nombre del empleado %d: ",i+1);
		scanf("%s", &nombre[i]);
    }
        printf("\n");
    for(i=0; i<N; i++)
	{

		printf("Estatura del empleado %d: ", i+1);
		scanf("%f", &arr[i][j]);

		scanf("%f", &arr[i][j+1]);
	}
	    printf("\n");
	}

void ImprimeDatos(int clave[N], char nombre[NOMBRES], float arr[N][M], int empleado)
{
	int i;
	int j=0;

	printf("Clave          Nombre           Estatura             Sueldo\n");

	for(i=0; i<N; i++)
	{
		printf("%d", clave[i]);
		printf("%s", nombre[i]);
        printf("%f", arr[i][j]);
		printf("%f", arr[i][j+1]);
		printf("\n");
	}
}


int Burbuja(float arr[N][M])
{
    int auxilar,contador,pos;


        for(contador=0;contador<N;contador++)
        {
            if(arr[1][contador]<arr[1][contador+1])
            {
                auxilar=arr[1][contador];
                arr[1][contador]=contador[1][contador+1];
                arr[1][contador+1]=auxilar;
                pos=contador;
            }
        }


   return pos;
}





void BuscaValor(float arr[N][M], float *pos, int *mayor)
{
	int i;

	for(i=0; i<N; i++)
	{
		if(*mayor<arr[0][i])
		{
			*mayor=arr[0][i];
			*pos=i;
		}
	}
}

