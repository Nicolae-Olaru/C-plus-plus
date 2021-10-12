//Equazione di secondo grado

#include <iostream>
#include <cmath>
#include "Equazione.h"
using namespace std;

void input(Equazione *data);
void calcolo(Equazione *data);

int main()
{
    Equazione p;
    input(&p);
    calcolo(&p);

    return 0;
}


void calcolo(Equazione *data){
    int ax=data->getA();
    int bx=data->getB();
    int c=data->getC();
    cout<<ax<<"\n";
    cout<<bx<<"\n";
    cout<<c<<"\n";
    if(ax != 0 && bx != 0 && c!=0){
        cout<<"Equazione completa";
        int delta = bx*bx-4*ax*c;
        cout<<"\nDelta = "<<delta<<"\n";
        if (delta > 0){
          int x1 = -bx + pow(delta,2);
          int x2 = -bx - pow(delta,2); 
          cout<<"\nX1 = "<<x1<<"\n";
          cout<<"\nX2 = "<<x2<<"\n";
        }
        else if (delta == 0)
        {
            cout<<"Delta = 0\n";
            int risultato = (-bx) /(2*ax);
            cout<<"Risultato = "<<risultato;
        }
        else if (delta < 0)
        {
            cout<<"Equazione impossibile.\n";
        }
    }
    else if (ax != 0 && bx != 0 && c == 0){
        cout<<"Equazione Spuria";
        cout<<"\nX1 = 0 \n";
        int x2 = -bx / ax;
        cout<<"X2 = "<<x2<<"\n";
        
    }
    else if (ax != 0 && bx == 0 && c != 0){
        cout<<"Equazione Puria\n";
        int x1 = +pow((-c/ax),2);
        int x2 = -pow((-c/ax),2);
        cout<<"x1 = "<<x1<<"\nx2 = "<<x2;
    }
};

void input(Equazione *data){
    int ax;
    int bx;
    int c;
    cout<<"\nInserisci A : ";
    cin>>ax;
    cout<<"\nInserisci B : ";
    cin>>bx;
    cout<<"\nInserisci C : ";
    cin>>c;
    data->setA(ax);
    data->setB(bx);
    data->setC(c);
};