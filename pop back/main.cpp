
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void crea_vet(int *&Vettore,int dimensione);
void vis_vett(int *vettore,int dimensione);
void riemp_vett(int *&Vettore,int dimensione);
void pop_back(int* &v,int &dim);

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
    pop_back(v,dim);
    vis_vett(v,dim);
    

    return 0;
}
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


void pop_back(int* &v,int &dim)
{
    int *appoggio;
    appoggio=new int [dim--];
    int i;
    for(i=0; i<dim; ++i)
    {
        appoggio[i]=v[i];
    }
    v=new int [dim];
    for(i=0; i<dim; ++i)
    {
        v[i]=appoggio[i];
    }
};
