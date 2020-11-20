#include<stdio.h >
#include <stdlib.h>
int PorH(int a, int b)
{
int PorH;
PorH=a*100/b;
return PorH;
}
int PorM(int a, int b)
{
int PorM;
PorM=a*100/b;
return PorM;
}
void main()
{
int Hombres, Mujeres, Total;
printf("Ingrese la cantidad de hombres");
scanf("%d",&Hombres);
printf("Ingrese la cantidad de mujeres");
scanf("%d",&Mujeres);
Total=Hombres+Mujeres;
printf("El porcentaje de hombres postulados es de:%d\n",PorH);
printf("El porcentaje de mujeres postuladas es de:%d\n",PorM);
}

