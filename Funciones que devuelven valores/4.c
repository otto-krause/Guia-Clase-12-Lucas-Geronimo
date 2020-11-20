#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int P(int a, int b)
{
int P;
P=a/b;
return P;
}
void main()
{
int F, A;
printf("Ingresar fuerza");
scanf("%d",&F);
printf("Ingresar el area");
scanf("%d",&A);
printf("la presion aplicada sobre la superfice es %d\n",P(F,A));
}
