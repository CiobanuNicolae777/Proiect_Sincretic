#include <iostream>
#include <math.h>

using namespace std;

void zecimal_in_binar(int n)
{
    int nr_binar[32];

    int i = 0;

    while (n > 0)
    {
        nr_binar[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >=0; j--)
    cout << nr_binar[j];
}


void zecimal_in_octal(int o)
{
    int nr_octal[32];

    int i = 0;

    while (o > 0)
    {
        nr_octal[i] = o % 8;
        o = o / 8;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    cout << nr_octal[j];
}

void zecimal_in_hexazecimal(int h)
{
    int nr_hex[32];

    int i = 0;

    while (h > 0)
    {
        nr_hex[i] = h % 16;
        h = h / 16;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    cout << nr_hex[j];
}

int main()
{
    int n, o, h;
    cout << "Dati numarul zecimal:  ";
    cin >> n;
    zecimal_in_binar(n);

    cout << "\nDati numarul zecimal:   ";
    cin >> o;
    zecimal_in_binar(o);

    cout << "\nDati numarul zecimal:   ";
    cin >> h;
    zecimal_in_hexazecimal(h);
    return 0;
}
