#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "numeri.h"
#include "funzioni.h"
using namespace std;

vettore::vettore(int dim){
    p=new int[dim];
    this->dim=dim;
    cout<<"(Costruttore)Il puntatore vettore ha preso la dimensione inserita ! \n";
};
vettore::~vettore(){
    delete [] p;
};
void vettore::visualizza(){
        int i=0;
    while(i<this->dim)
    {
        cout<<"\nVettore in posizione : "<<i+1<<" Ha valore di : "<<p[i];
        i++;
    };
};

void vettore::carica(){
    int i=0;
    srand (time(NULL));
    int aiuto;
    
    //Caricamento
    while(i<this->dim)
    {
        *(p+i) = rand() % 100 + 1;
        i++;
    };
    i=0;
    
    //SETUP vettore:
    //Esercitazione: Genera Pari Positivi Genera Dispari Negativi
    while(i<this->dim)
    {
        if(   *(p+i) % 2  == 0    )
        {
            cout<<"\n";
        }
        else
        {
            aiuto = *(p+i);
            *(p+i)= *(p+i) - *(p+i) - *(p+i);
        }
        i++;
    };
};
int vettore::conta_pari()
{
    int i=0;
    srand (time(NULL));
    int pari=0;
    
    //Caricamento
    while(i<this->dim)
    {
        if(   *(p+i) % 2  == 0    )
        {
            pari++;
        }
        i++;
    };
    return pari;
};
int vettore::contaPrimi(){
   int dividendo=0,primi=0,i,k;
   
   for(i=0;i<this->dim;i++)
   {
       dividendo=2;
       if( *(p+i)>0 )
       {
            if( (*(p+i)%2!=0) || (*(p+i)==2) )
            {
                for(k=3;k<9;k+=2)
                {
                    if(*(p+i)%k==0) 
                       dividendo++;
                }
                if(dividendo==2) 
                primi++;
            }
        }
   }
   return primi;
};