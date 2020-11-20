#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int Lado1()
{
int altura, base;
printf("Ingresa la altura del rectangulo");
scanf("%d",&altura);
return (altura);
}
int Lado2()	
{
int base;
printf("Ingresa la base del rectangulo");
scanf("%d",&base);
return (base);
}
void main()
{
int altura, base, Area, Perimetro;
altura = Lado1();
base = Lado2();
Area=altura*base;
Perimetro=2*altura+2*base;
printf("el perimetro del rectangulo es  %d\n",Perimetro);
printf("el area del rectangulo es %d\n",Area);
}
}
