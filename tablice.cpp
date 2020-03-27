#include <iostream>

using namespace std;

//1. Zaprojektować i zaimplementować funkcję w języku C++ wypełniającą tablicę T o rozmiarze n sześcianami kolejnych liczb naturalnych dodatnich.
//Tablicę utworzyć wewnątrz funkcji i odebrać jako argument od funkcji poprzez wskaźnik.
void cubeValues_1(unsigned int *&T, unsigned int n)
{
    T = new unsigned int[n];

    for (int i = 0; i < n; i++)
    {
        T[i] = i * i * i;
    }
}

//2. Zaprojektować i zaimplementować funkcję w języku C++ wypełniającą tablicę T o rozmiarze n kolejnymi liczbami naturalnymi zaczynając od wartości 5.
//Tablicę utworzyć wewnątrz funkcji i odebrać jako argument od funkcji poprzez wskaźnik.

void fillArray_2(unsigned int *&T, unsigned int n)
{
    T = new unsigned int[n];

    for (int i = 0; i < n; i++)
    {
        T[i] = i + 5;
    }
}

//3. Zaprojektować i zaimplementować funkcję w języku C++ wypełniającą tablicę T o rozmiarze n w następujący sposób:
//jeśli indeks jest liczbą parzystą, to do tablicy o tym indeksie przypisz podwojoną wartość indeksu,
//w przeciwnym razie przypisz wartość indeksu pomniejszoną o 1.
//Tablicę utworzyć wewnątrz funkcji i odebrać jako argument od funkcji poprzez wskaźnik.

void fillArray_3(unsigned int *&T, unsigned int n)
{
    T = new unsigned int[n];

    for (int i = 0; i < n; i++)
    {
        T[i] = i % 2 == 0 ? 2 * i : i - 1;
    }
}

// 4. Zaprojektować i zaimplementować funkcję w języku C++ zwracającą wartość maksymalną z elementów tablicy T o rozmiarze n.
//Tablicę należy przekazać do funkcji poprzez wskaźnik.

double maxValue_4(double *T, unsigned int n)
{
    double tempMax = T[0];

    if (n == 1)
        return tempMax;

    for (int i = 1; i < n; i++)
    {
        tempMax = T[i] > tempMax ? T[i] : tempMax;
    }

    return tempMax;
}

// 5. Zaprojektować i zaimplementować funkcję w języku C++ zwracającą wartość średniej arytmetycznej z elementów tablicy T o rozmiarze n.
//Tablicę należy przekazać do funkcji poprzez wskaźnik.

double avgValue_5(double *T, unsigned int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += T[i];
    }

    return sum / n;
}

//6. Zaprojektować i zaimplementować funkcję w języku C++ wypełniającą od końca tablicę T o rozmiarze n wartościami indeksu.
//Tablicę utworzyć wewnątrz funkcji i odebrać od funkcji jako argument poprzez wskaźnik. Licznik pętli należy zainicjować wartością 0.

void fillArray_6(unsigned int *&T, unsigned int n)
{
    T = new unsigned int[n];

    for (int i = 0; i < n; i++)
    {
        T[n - i - 1] = n - i - 1;
    }
}

//7. Zaprojektować i zaimplementować funkcję w języku C++ wypełniającą od końca tablicę T o rozmiarze n na przemian wartościami 0 i 2.
//Tablicę utworzyć wewnątrz funkcji i odebrać od funkcji jako argument poprzez wskaźnik.
void fillArray_7(unsigned int *&T, unsigned int n)
{
    T = new unsigned int[n];

    for (int i = n - 1; i >= 0; i--)
    {
        T[i] = i % 2 == 0 ? 2 : 0;
    }
}

//8. Zaprojektować i zaimplementować funkcję w języku C++ zwracającą, na której pozycji w tablicy T o rozmiarze n  znajduje się wartość maksymalna.
// Tablicę należy przekazać do funkcji poprzez wskaźnik.
int findIndex_8(double *T, unsigned int n)
{
    int tempIndex = 0;
    int tempMax = T[0];

    if (n == 1)
        return tempIndex;

    for (int i = 1; i < n; i++)
    {
        tempIndex = T[i] > tempMax ? i : tempIndex;
    }

    return tempIndex;
}
