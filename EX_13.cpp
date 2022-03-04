#include <iostream>
#include <math.h>

using namespace std;

void zecimal_in_binar(int n)
{
    int nr_binar[32];

    int i = 0;

    while (n > 0) {
        nr_binar[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >=0; j--)
    cout << nr_binar[j];
}

int main()
{
    int n;
    cout << "Dati numarul zecimal:  ";
    cin >> n;
    zecimal_in_binar(n);
    return 0;
}
