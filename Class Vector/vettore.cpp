#include <iostream>
#include "vettore.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

vettore::vettore(int dim){
    p=new int[dim];
    this->dim=dim;
    cout<<"(Costruttore)Il puntatore vettore ha preso la dimensione inserita ! \n";
};
vettore::~vettore(){
    delete [] p;
};
int vettore::conta_dim(){
    int i=0;
    while(i<this->dim)
    {
        i++;
    };
    return i;
};
void vettore::carica(){
    int i=0;
    srand (time(NULL));
    while(i<this->dim)
    {
        *(p+i) = rand() % 10 + 1;
        i++;
    };
};
void vettore::visualizza(){
        int i=0;
    while(i<this->dim)
    {
        cout<<"\nVettore in posizione : "<<i+1<<"Ha valore di : "<<p[i];
        i++;
    };
};




