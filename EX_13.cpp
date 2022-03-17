#include <iostream>

using namespace std;


void zecimal_in_binar(int n)   // conversie din Zecimal în Binar
{
    int nr_binar[100]; // vector pentru numărul binar

    int i = 0;  // contor pentru vector 

    while (n != 0)   // stochează restul în vector pentru numărul binar
    {
        nr_binar[i] = n % 2;  // calculează restul împărțirii
        n = n / 2;            // calculează câtul  împărțirii
        i++;                  // incrementează contorul
    }
    for (int j = i - 1; j >=0; j--)   // imprimă vectorul pentru numărul binar în ordine inversă
    cout << nr_binar[j];
}


void zecimal_in_octal(int o)  // conversie din Zecimal în Octal
{
    int nr_octal[100];  // vector pentru numărul Octal

    int i = 0;  // contor pentru vector 

    while (o != 0)
    {
        nr_octal[i] = o % 8;   // calculează restul împărțirii
        o = o / 8;             // calculează câtul  împărțirii
        i++;                   // incrementează contorul
    }
    for(int j = i - 1; j >= 0; j--)   // imprimă vectorul pentru numărul Octal în ordine inversă
    cout << nr_octal[j];
}


void zecimal_in_hexazecimal(int h)   // conversie din Zecimal în Hexazecimal
{
    char nr_hex[100];   // vector pentru numărul Hexazecimal

    int i = 0;     // contor pentru vector

    while (h != 0)
    {
        int rest = 0;   // variabilă temporară pentru a stoca restul

        rest = h % 16;  // stochează restul în variabila "rest"

        if(rest < 10) // se verifică dacă restul este mai mic decât 10
        {
            nr_hex[i] = rest + 48;  //  0 + 48; ... 9 + 48;   =  48; ... 57; - reprezentând cifrele de la 0 la 9 din tabelul ASCII
            i++;
        }
        else           // dacă restul este mai mare decât 10
        {
            nr_hex[i] = rest + 55;   //  10 + 55; ... 15 + 55;   =  65; ... 70; - reprezentând literele de la A la F din tabelul ASCII
            i++;
        }

        h = h / 16;    // calculează câtul împărțirii
    }
    for(int j = i - 1; j >= 0; j--)   // imprimă vectorul Hexazecimal în ordine inversă
    cout << nr_hex[j];
}



int main()
{

    int n, o, h;
    cout << "Dati un numar:  ";
    cin >> n;
    cout << "(" << n << ")10    =   (";
    zecimal_in_binar(n);  // apelează funcția pentru transformarea din Zecimal în Binar
    cout << ")2";
    
    cout << "\n\n(" << n << ")10    =   (";
    zecimal_in_octal(n);  // apelează funcția pentru transformarea din Zecimal în Octal
    cout << ")8";

    cout << "\n\n(" << n << ")10    =   (";
    zecimal_in_hexazecimal(n);  // apelează funcția pentru transformarea din Zecimal în Hexazecimal
    cout << ")16";
    cout << "\n ";
    return 0;
}
