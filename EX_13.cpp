#include <iostream>
#include <math.h>

using namespace std;


void zecimal_in_binar(int n)
{
    int nr_binar[40];

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
    int nr_octal[40];

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
    char nr_hex[100];

    int i = 0;

    while (h != 0)
    {
        int temporar = 0;

        temporar = h % 16;

        if(temporar < 10) 
        {
            nr_hex[i] = temporar + 48;
            i++;
        }
        else 
        {
            nr_hex[i] = temporar + 55;
            i++;
        }

        h = h / 16;
    }

    for(int j = i - 1; j >= 0; j--)
    cout << nr_hex[j];
}




int main()
{
    int n, o, h;
    cout << "Dati numarul zecimal:  ";
    cin >> n;
    cout << "(n)10    =   (";
    zecimal_in_binar(n);
    cout << ")2";


    cout << "\n\nDati numarul zecimal:   ";
    cin >> o;
    zecimal_in_octal(o);

    cout << "\n\nDati numarul zecimal:   ";
    cin >> h;
    zecimal_in_hexazecimal(h);
    return 0;
}
