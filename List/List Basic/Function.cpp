
#include <iostream>
#include "Function.h"
using namespace std;

int contaNodi(list TestaDellaLista)
{ 
    list ultimo=TestaDellaLista;
    int conta=0;
    while(ultimo!=NULL)
    {
        if(ultimo->next==NULL) 
            return ++conta; //Restituisci l'ultimo nodo
        ultimo=ultimo->next; //Continua a Contare
        ++conta;
    }
    return conta; //Lista Vuota Restituisce NULL
};

void stampaCodaLista(list TestaDellaLista)
{
    list scorriLista=TestaDellaLista;
    if(TestaDellaLista!=NULL)
       while(scorriLista!=NULL) 
       {
           cout<<endl<< scorriLista->dato <<endl;
           scorriLista=scorriLista->next;
       }
       else cout<<"LISTA VUOTA"<<endl;
};

list ultimoNodoLista(list TestaDellaLista)
{
    list ultimo=TestaDellaLista;
    while(ultimo!=NULL)
    {
        if(ultimo->next==NULL) 
            return ultimo; //Restituisci l'ultimo nodo
        ultimo=ultimo->next; //Continua a Scorrere
    }
    return ultimo; //Lista Vuota Restituisce NULL
};

void cercaValoreNodo(list TestaDellaLista, int valoreCercato)
{
    list nuovoNodo= new nodo;
    int posizioneNodoCercato=0;
    int trovato=1;
    list scorri=TestaDellaLista;
    if(scorri!=NULL)
    { //Controllare se Nella Lista e' Presente almeno un Nodo
        if((valoreCercato==scorri->dato) && (trovato==1))
        { //Lista con un Elemanto
            cout<<"Elemento: "<<valoreCercato<<" Presente in Posizione: "<<++posizioneNodoCercato;
        }
        else while((scorri->next!=NULL) && (trovato==1))
        {
            if(scorri->dato==valoreCercato)
            {
                trovato=0;
                cout<<"Elemento: "<<valoreCercato<<" Presente in Posizione: "<<++posizioneNodoCercato;
            }
            else 
            { 
                scorri=scorri->next;
                posizioneNodoCercato++;
            }
        }
        if(trovato==1) cout<<" Elemento NON TROVATO "<<endl;
    }
    else 
    {
        cout<<"Lista Vuota";
    }
};
