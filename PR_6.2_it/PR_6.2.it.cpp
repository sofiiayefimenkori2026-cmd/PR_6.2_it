// PR_6.2.it.cpp
// Варіант 8 (ітераційний спосіб)
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(const int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

void Inverse(int* a, const int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int tmp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = tmp;
    }
}

#if !defined(_WINDLL)
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    const int Low = -20;
    const int High = 50;

    Create(a, n, Low, High);
    cout << "Original array:" << endl;
    Print(a, n);

    Inverse(a, n);
    cout << "Inverted array:" << endl;
    Print(a, n);

    return 0;
}
#endif
