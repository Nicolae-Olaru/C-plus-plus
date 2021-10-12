#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   
    int a=5;
    int *p;
    p=&a;
    int *puntatore;
    puntatore=new int[5];
    cout<<"Dimensione Puntatore di tipo intero : "<<sizeof(puntatore)<<"\n";
    cout<<"Dimensione tipo intero : "<<sizeof(int);
    delete[] puntatore ;
    /*
    cout<<"Valore della variabile a : "<<a<<"\n";
    cout<<"Valore dell'indirizzo di partenza della variabile a"<<&a<<"\n";
    cout<<"Valore dell puntatore p : "<<p<<"\n";
    cout<<"Valore dell indirizzo di partenza del puntatore p :"<<&p<<"\n";
    cout<<"Valore dell area di memoria puntata da p :"<<*p<<"\n";    
    */
    return 0;
}
