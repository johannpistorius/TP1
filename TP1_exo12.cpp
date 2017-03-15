#include <iostream>

using namespace std;

int fact(int m);
int resultatFact=0;
void TP1_exo12()
{
    int m;
    cout << "Entrer un entier 'm' " << endl;
    cin >> m;
    cout << fact(m) << endl;


}
int fact(int m){
    if(m==0){
        resultatFact=1;
    }
    else{
        resultatFact=m*fact(m-1);
    }
    return resultatFact;
}
