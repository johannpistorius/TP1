#include <iostream>

using namespace std;

void TP1_exo8()
{
    int tab[10];
    int min;
    cout << "Entrer 10 entiers" << endl;
    for(int i=0;i<10;i++){
        cin >> tab[i];
    }
    min=tab[0];
    for(int j=1;j<10;j++){
        if(min>tab[j]){
            min=tab[j];
        }
    }
    cout << "Minimum des 10 entrees :" << min << endl;

}
