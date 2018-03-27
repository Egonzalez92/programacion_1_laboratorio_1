#include <stdio.h>
#include <stdlib.h>


int Sumar(int A, int B);
int Resta(int A, int B);
int main()
{
    int A;
    int B;
    int numero;
    int suma;
    int resta;
    int division;


    printf("Ingrese primer numero:\n");
    scanf("%d", &A);
    printf("Ingrese segundo numero:\n");
    scanf("%d", &B);

    suma = Sumar(A,B);
    resta = Restar(A,B);
    division = Dividir(A,B);

    printf("La suma de los numeros es: %d", suma);
    printf("\nLa resta de los numeros es: %d", resta);
    printf("\nLa division de los numeros es: %d", division);
    return 0;
}

int Sumar(int A, int B)
{
    int retorno;

    retorno = A+B;

    return retorno;
}

int Restar (int A, int B)
{
  int retorno;

  retorno = A-B;

  return retorno;

}

int Dividir (int A, int B)
{
  int retorno;

  retorno = A/B;

  return retorno;
}
