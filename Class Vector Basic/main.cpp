
#include <iostream>
#include "Prototype.h"
#include "menu.h"
using namespace std;

int main()
{
    int dim;
    cout<<"Inserisci dimensione dell vettore :";
    cin>>dim;
    cout<<"\n";
    vettore support(dim);
    menu_carica();
    int caricamento=0;
    int scelta=0;
    cin>>caricamento;
    if(caricamento == 1)
    {
        support.generaCasualmenteVettore();
        support.visualizzaVettorePieno();
    }
    else if(caricamento == 2)
    {
        support.generaManualmenteVettore();
        support.visualizzaVettorePieno();
    }
    int security=0;
    
    
    do{
        menu();
        cin>>scelta;
        switch(scelta){
            case 0:
               cout<<"Ciao"<<endl;
               break;
            case 1:
               cout<<"Media"<<endl;
               cout<<"media e :"<<support.Media()<<endl;
               break;
            case 2:
               cout<<"Minimo"<<endl;
               cout<<"Il numero minimo e : "<<support.Minimo()<<endl;
               break;
            case 3:
               cout<<"Massimo"<<endl;
               cout<<"Il numero massimo e : "<<support.Massimo()<<endl;
               break;
            case 4:
               cout<<"Cerca"<<endl;
               cout<<"Inserisci numero da cercare : ";
               int cercato;
               cin>>cercato;
               support.cerca(cercato);
               break;
            case 5:
               cout<<"Ordina"<<endl;
               support.ordina();
               support.visualizzaVettorePieno();
               break;
            case 6:
               cout<<"Visualizza"<<endl;
               support.visualizzaVettorePieno();
               break;
            case 7:
               cout<<"Modifica"<<endl;
               support.modificaDimensione();
               break;
        }
    }while(scelta != 0);
    
    
    
    
    
    
    
    /*
    //support.visualizzaVettorePieno();
    cout<<"\n";
    
    //system("clear");
    support.generaCasualmenteVettore(); //Generatore numeri funzionante
    support.visualizzaVettorePieno();   //Visualizza vettore
    
    //support.generaManualmenteVettore(); //Input manuale funzionante
    //support.visualizzaVettorePieno(); //Visualizza vettore
    
    
    if(support.controllaVettorePieno() == 0)
        cout<<"\nVettore vuoto!\n";
    else
        cout<<"Vettore pieno!";

    //support.cerca(6);
    cout<<"Il numero massimo e : "<<support.Massimo()<<endl;
    cout<<"Il numero minimo e : "<<support.Minimo()<<endl;
    cout<<"media e :"<<support.Media();
    support.ordina();
    support.visualizzaVettorePieno();
    */
    return 0;
}
