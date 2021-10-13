#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "numeri.h"
#include "funzioni.h"
using namespace std;


int menu(){
    int risposta = 0;
    cout<<"\n    ***** MENU *****\n";
    cout<<"1.Carica Vettore; \n";
    cout<<"2.Visualizza Vettore; \n";
    cout<<"3.Conta Pari;\n";
    cout<<"4.Conta Primi;\n";
    cout<<"5.Exit \n";
    cout<<"Inserisci risposta : ";
    cin>>risposta;
    return risposta;
};