#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int sum = 0;
    int i = 0;
    while (i < n)
    {
        sum = sum + arr[i];
        i++;
    }
    return sum;
}

int findMax(int arr[], int n)
{
    int maximo = arr[0];
    int i = 1;
    while (i < n)
    {
        if (arr[i] > maximo)
        {
            maximo = arr[i];
        }
        i++;
    }
    return maximo;
}

float calcAverage(int arr[], int n)
{
    float promedio = 0.0f;
    if (n != 0)
    {
        int suma = calcSum(arr, n);
        promedio = (float)suma / (float)n;
    }
    return promedio;
}

int countEvens(int arr[], int n)
{
    int contador = 0;
    int i = 0;
    while (i < n)
    {
        contador += (arr[i] % 2 == 0) ? 1 : 0;
        i++;
    }
    return contador;
}

int sumFirstLast(int arr[], int n)
{
    int suma = 0;
    if (n > 0)
    {
        int primero = arr[0];
        int ultimo = arr[n - 1];
        suma = primero + ultimo;
    }
    return suma;
}

int findMin(int arr[], int n)
{
    int minimo = arr[0];
    int i = 1;
    while (i < n)
    {
        if (arr[i] < minimo)
        {
            minimo = arr[i];
        }
        i++;
    }
    return minimo;
}

int subtractArraysSum(int a[], int b[], int n)
{
    int restaTotal = 0;
    int i = 0;
    do
    {
        if (i < n)
        {
            restaTotal = restaTotal + (a[i] - b[i]);
        }
        i++;
    } while (i < n);
    return restaTotal;
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    int sumaTotal = 0;
    int i = 0;
    for (; i < n1; i++)
    {
        sumaTotal += a[i];
    }
    i = 0;
    for (; i < n2; i++)
    {
        sumaTotal += b[i];
    }
    return sumaTotal;
}

int productArray(int arr[], int n)
{
    int producto = (n == 0) ? 0 : 1;
    for (int i = 0; i < n; i++)
    {
        producto = producto * arr[i];
    }
    return producto;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    int sumaLocal = 0;
    float promedioLocal = 0.0f;

    if (n > 0)
    {
        sumaLocal = calcSum(arr, n);
        promedioLocal = (float)sumaLocal / (float)n;
    }

    *sum = sumaLocal;
    *average = promedioLocal;
}

