
#include <iostream>
#include "Function.h"
using namespace std;


int main()
{
    
    list Head=NULL;//inizio lista = null 
    list Primo_nodo;
    list Secondo_nodo;
    list Terzo_nodo;
    list ultimo;
    
    //Setup Nodi
    Primo_nodo = new nodo;
    Secondo_nodo = new nodo;
    Terzo_nodo = new nodo;
    
    //Collegamento Nodi
    Head = Primo_nodo;
    Primo_nodo->next = Secondo_nodo;
    Secondo_nodo->next = Terzo_nodo;
    Terzo_nodo->next = NULL;  
    
    //Conta nodi
    cout<<"\nNumero di nodi : "<< contaNodi(Head);
    //Stamopa dati
    cout<<"\nStampa dato : ";
    stampaCodaLista(Head);
    //Prendi Ultimo
    ultimo = ultimoNodoLista(Head);
    cout<<"Ultimo puntatore e : " << ultimo->next<<endl;
    cout<<"Ultimo valore e : " << ultimo->dato<<endl;
    //Cerca valore 
    cercaValoreNodo(Head,0);
    return 0;
}
