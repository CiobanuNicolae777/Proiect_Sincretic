#include <iostream>

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
        int rest = 0;

        rest = h % 16;

        if(rest < 10) 
        {
            nr_hex[i] = rest + 48;
            i++;
        }
        else 
        {
            nr_hex[i] = rest + 55;
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
    cout << "Dati un numar:  ";
    cin >> n;
    cout << "(" << n << ")10    =   (";
    zecimal_in_binar(n);
    cout << ")2";

   // cout << "\n\nDati un  numar:   ";
    // cin >> n;

    cout << "\n\n(" << n << ")10    =   (";
    zecimal_in_octal(n);
    cout << ")8";

    // cout << "\n\nDati un numar:   ";
    //   cin >> n;

    cout << "\n\n(" << n << ")10    =   (";
    zecimal_in_hexazecimal(n);
    cout << ")16";
    cout << "\n ";
    return 0;
}
