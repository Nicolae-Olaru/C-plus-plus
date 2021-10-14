#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void crea_vet(int *&Vettore,int dimensione);
void vis_vett(int *vettore,int dimensione);
void riemp_vett(int *&Vettore,int dimensione);
void push_back(int* &v,int &dim, int valore);
int main()
{
    int * v = NULL;
    int dim;
    srand (time(NULL));
    
    cout<<"Inserisci dimensione vettore : ";
    cin>>dim;
    crea_vet(v,dim);
    cout<<"\n";
    riemp_vett(v,dim);
    vis_vett(v,dim);
    push_back(v,dim,30);
    vis_vett(v,dim);
    

    return 0;
}


void push_back(int* &v,int &dim, int valore)
{
    int *appoggio;
    appoggio=new int [dim];
    int i;

    for(i=0; i<dim; ++i)
    {
        appoggio[i]=v[i];
    }
    v=new int [dim++];
    for(i=0; i<dim-1; ++i)
    {
        v[i]=appoggio[i];
    }
    v[i]=valore;
};

void riemp_vett(int *&Vettore,int dimensione)
{
    int i=0;
    for( ;i<dimensione;i++)
        //*(Vettore+i) = rand() % 100 + 1 ;
        Vettore[i] = rand() % 100 + 1 ;
}

void vis_vett(int *vettore,int dimensione){
    int i = 0;
    while(i<dimensione)
    {
        cout<<"Positione : "<<i<<" Valore : "<<*(vettore+i)<<endl;
        i++;
    }
}
void crea_vet(int *&Vettore,int dimensione){
    Vettore = new int [dimensione];
}


