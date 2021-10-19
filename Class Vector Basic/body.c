#include <iostream>
#include <time.h>
#include "Prototype.h"
using namespace std;

//------------------------------------------------------------------------------
vettore::vettore(int dim){
    punt_a_vettore =(int*)malloc(sizeof(int)*dim);
    for(int i=0;i<dim;i++)
    {
        punt_a_vettore[i] = 0;
    }
    this->dimensione = dim;
};
//------------------------------------------------------------------------------

void vettore::visualizzaVettorePieno()
{
    for(int i=0 ; i<dimensione ;i++)
        printf("%d) -> [%d] \n", i+1 ,punt_a_vettore[i]);
};
//------------------------------------------------------------------------------
void vettore::generaCasualmenteVettore()
{
    srand(time(NULL));
    for(int i=0;i<dimensione;i++)
    {
        punt_a_vettore[i] = rand()%100;
    }
};
//------------------------------------------------------------------------------

void vettore::generaManualmenteVettore()
{
    
int support;
for(int i=0;i<dimensione;i++)
    {
        cout<<"Inserisci numero "<<i+1<<" :"<<endl;
        cin>>support;
        punt_a_vettore[i] = support;
    }
};
//------------------------------------------------------------------------------
int vettore::controllaVettorePieno()
{
    int i=0;
    if(punt_a_vettore[i] == 0 && punt_a_vettore[i+1] == 0){
        return 0;
    }
    else 
    {
            return 1;
    }
};
//Non funzionante --------------------------------------------------------------
void vettore::cerca(int cercato){
    int n_t=0;
    cout<<"Numero da cercare : "<<cercato<<endl;
    for(int i=0 ; i<dimensione ;i++)
    {
        if( punt_a_vettore[i] == cercato)
        {
           //cout<<punt_a_vettore[i]<<" vr "<<cercato<<endl;
           cout<<"\nNumero cercato trovato in positione : "<<i<<endl;
            n_t=1;
        }
    }
    if(n_t==0)
    {
    
       cout<<"\nNumero cercato non trovato;\n";
    }
    //else
      // cout<<"Numero cercato e stato trovato:";
};
//------------------------------------------------------------------------------
int vettore::Massimo(){
    int Max=0;
    for(int i=0 ; i<dimensione ;i++)
        if(punt_a_vettore[i] > Max)
            Max=punt_a_vettore[i];
    return Max;
};
//------------------------------------------------------------------------------
int vettore::Minimo()
{
int Min=punt_a_vettore[0];
    for(int i=1 ; i<dimensione ;i++)
        if(punt_a_vettore[i] < Min)
            Min=punt_a_vettore[i];
    return Min;
}
//------------------------------------------------------------------------------
float vettore::Media(){
    float media=0;
    for(int i=1 ; i < dimensione ;i++)
        media = (float)punt_a_vettore[i] + media;
    return (media/(float)dimensione);
}
//------------------------------------------------------------------------------
void vettore::ordina()
{
    int aiuto;
    int i=0;
    int m;
    int k;
    for( k=0 ; k < dimensione ; k++)
    {
        i = k;
        for( m= (dimensione-2) ; i<=m ; m-- )
        {
            if(punt_a_vettore[m] > punt_a_vettore[m+1])
            {
                aiuto = punt_a_vettore[m];
                punt_a_vettore[m] = punt_a_vettore[m+1];
                punt_a_vettore[m+1] = aiuto;
            }
        }
    }
}


void vettore::modificaDimensione(){
    int new_dim=0;
    int *support;
    support=(int*)malloc(sizeof(int)*dimensione);
    
    
    cout<<"Inserisci la nuova dimensione del vettore : ";
    cin>>new_dim;
    
    for(int i=0;i<dimensione;i++)
       support[i]=punt_a_vettore[i];
       
    free(punt_a_vettore);
    punt_a_vettore=(int*)malloc(sizeof(int)*new_dim);
    
    int conta=0;
    for(int i=0;i<dimensione;i++)
    {
       punt_a_vettore[i] = support[i];
       conta++;
    }
    for(int i=dimensione ;i<new_dim;i++)
    {
        //cout<<"Inserisci numero : ";
        //cin>>punt_a_vettore[i];
        punt_a_vettore[i]= rand()%100;
    }
    free(support);   
    this->dimensione= new_dim;
    
}















