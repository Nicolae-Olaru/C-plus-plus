#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void crea_vett(int *&v,int dim);
void visualizza(int *p,int dim);
void pop_front(int *&v,int &dim);
int main()
{
    srand (time(NULL));
    int * puntatore=NULL;
    int dim;
    
    
    cout<<"Inserisci dimansione : ";
    cin>>dim;
    
    
    crea_vett(puntatore,dim);
    visualizza(puntatore,dim);
    pop_front(puntatore,dim);
    cout<<"\n Pop Front : ";
    visualizza(puntatore,dim);
    
    return 0;
}
void pop_front(int *&v,int &dim){
    int * puntatore=NULL;
    int k = 0;
    int i = -1;
    puntatore = new int [dim-1];
    for(i = 1;i<dim;i++)
    {
        puntatore[k]=v[i];
        k++;
    }
    dim = dim -1;
    
    delete [] v;
    v=puntatore;
}

void crea_vett(int *&v,int dim)
{
    int i=0;
    srand (time(NULL));
    v = new int [dim];
    for(;i<dim;i++)
        v[i]=rand()%101;
};

void visualizza(int *p,int dim)
{
    for(int i=0;i<dim;i++)
        cout<<"\n"<<*(p+i);
};
