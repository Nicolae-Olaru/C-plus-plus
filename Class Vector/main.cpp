
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "vettore.h"
using namespace std;

int main()
{
    int dimensione;
    int dim;
    srand (time(NULL));
    cout<<"Inserisci dimensione vettore : ";
    cin>>dimensione;
    vettore A(dimensione);
    dim=A.conta_dim();
    cout<<"Dimensione vettore : ";
    cout<<dim;
    A.visualizza();
    return 0;
}
