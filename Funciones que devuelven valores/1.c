#include<stdio.h >
#include <stdlib.h>
int Num()
{
int n1;
printf("Ingrese el primer numero");
scanf("%d",&n1);
return (n1);
}
int N2()
{
int n2;
printf("Ingrese el segundo numero");
scanf("%d",&n2);
return(n2);
}
void main()
{
int n1, n2;
n1 = N1();
n2 = N2();
printf("los numeros ingresados son %d\n Y %d\n",n1, n2);
}
