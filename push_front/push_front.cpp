#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void crea_vett(int *&v,int dim);
void visualizza(int *p,int dim);
void push_front(int *&v,int &dim,int valore);
int main()
{
    srand (time(NULL));
    int * puntatore=NULL;
    int dim;
    int numero;
    cout<<"Inserisci dimansione : ";
    cin>>dim;
    cout<<"\nInserisci numero : ";
    cin>>numero;
    
    crea_vett(puntatore,dim);
    visualizza(puntatore,dim);
    push_front(puntatore,dim,numero);
    cout<<"\n Push Front : ";
    visualizza(puntatore,dim);
    
    return 0;
}
void push_front(int *&v,int &dim,int valore){
    int * puntatore=NULL;
    int k = 0;
    int i = 1;
    puntatore = new int [dim+1];
    puntatore[0]=valore;
    for(i = 1;i<dim+1;i++)
    {
        puntatore[i]=v[k];
        k++;
    }
    dim = dim +1;
    
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
