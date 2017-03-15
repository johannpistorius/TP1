#include <iostream>

using namespace std;

int f(int n);
int resultat=0;
void TP1_exo9()
{
    int n;
    cout << "Entrer un entier 'n' " << endl;
    cin >> n;
    cout << f(n) << endl;


}
int f(int n){
    if(n==0){
        resultat=3;
    }
    else{
        resultat=3*f(n-1)+4;
    }
    return resultat;
}
