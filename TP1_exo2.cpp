#include <iostream>

using namespace std;

void TP1_exo2()
{
    int a,b;
    cout << "Saisir a et b" << endl;
    cin >> a >> b;
    cout << "a et b avant l'echange" << endl << a<< endl << b << endl;
    int c=a;
    a=b;
    b=c;
    cout << "echange de valeur de a et de b: " << endl << a << endl << b << endl;
}
