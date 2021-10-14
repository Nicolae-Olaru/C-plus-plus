
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void crea_vet(int *&Vettore,int dimensione);
void vis_vett(int *vettore,int dimensione);
void riemp_vett(int *&Vettore,int dimensione);
void pop_middle(int *&Vettore,int &dimensione);

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
    pop_middle(v,dim);
    vis_vett(v,dim);
    

    return 0;
}
void pop_middle(int *&Vettore,int &dimensione)
{
    int *appoggio = NULL;
    appoggio=new int [dimensione-1];
    int divisione = (dimensione-1)/2;
    int i = 0;
    int k = 0;
    for (i = 0; i < dimensione;i++) 
    {
        if(k == divisione)
        {
            i++;
        }
        appoggio[k]= *(Vettore + i);
        k++;
    }
    dimensione=dimensione-1; 
    delete [] Vettore;
    Vettore = appoggio;
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


