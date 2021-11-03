#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "functions.h"
using namespace std;


int main()
{
    srand(time(NULL));
    int answer = 0;
    list Testa = NULL;
    int Dimensione;
    int cercato;
    float media_pari = 0;
    float media_dispari = 0;
    int massimo = 0;
    int minimo = 0;
    list pari;
    list Dispari;
    cout<<"Prima di proseguire con il menu!"<<endl;
    cout<<"Inserisci Dimensione LISTA : ";
    cin>>Dimensione;
    cout<<"\n";
    Testa = Crea_Lista(Dimensione);
    while (answer != 12)
    {
        answer = menu();
        switch (answer) {
        case 1:
            Carica_Dati_Lista(Testa);
            break;
        case 2:
            Visualizza_Lista(Testa);
            break;
        case 3:
            cout<<"Inserisci valore da cercare : "<<endl;
            cin>>cercato;
            Cerca_Valore(Testa,cercato);
            cout<<"\n";
            break;
        case 4:
            Conta_Pari_Lista(Testa);
            break;
        case 5:
            Conta_Dispari_Lista(Testa);
            break;
        case 6:
            media_pari = Media_Pari_Lista(Testa);
            cout<<"Media pari e : "<<media_pari<<endl;
            break;
        case 7:
            media_dispari = Media_Dispari_Lista(Testa);
            cout<<"Media dispari e : "<<media_dispari<<endl;
            break;
        case 8:
            cout<<"Pari SONO : "<<endl;
            pari = Crea_List_Pari(Testa);
            Visualizza_Lista(pari);
            break;
        case 9:
            cout<<"Dispari SONO : "<<endl;
            Dispari = Crea_List_Dispari(Testa);
            Visualizza_Lista(Dispari);
            break;
        case 10:
            massimo = Cerca_Valore_Massimo(Testa);
            cout<<"Massimo : "<<massimo<<endl;
            break;
        case 11:
            minimo = Cerca_Valore_Minimo(Testa);
            cout<<"Minimo : "<<minimo<<endl;
            break;
        case 12:
            answer = 12;
            break;
        default:
            cout << "Error! Wrong Input"<<endl;
            break;
    }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*----------------------------Prova Funzioni----------------------------------
    list Testa=NULL;
    Testa = Crea_Lista(10);
    Testa->dato = 4;
    Carica_Dati_Lista(Testa);
    Visualizza_Lista(Testa);
    Cerca_Valore(Testa,8);
    Conta_Pari_Lista(Testa);
    Conta_Dispari_Lista(Testa);
    float media_pari = Media_Pari_Lista(Testa);
    cout<<"Media pari e : "<<media_pari<<endl;
    float media_dispari = Media_Dispari_Lista(Testa);
    cout<<"Media dispari e : "<<media_dispari<<endl;
    
    cout<<"Pari SONO : "<<endl;
    list pari = Crea_List_Pari(Testa);
    Visualizza_Lista(pari);
    
    
    cout<<"Dispari SONO : "<<endl;
    list Dispari = Crea_List_Dispari(Testa);
    Visualizza_Lista(Dispari);
    
    
    int massimo = Cerca_Valore_Massimo(Testa);
    cout<<"Massimo : "<<massimo<<endl;
    
    
    int minimo = Cerca_Valore_Minimo(Testa);
    cout<<"Minimo : "<<minimo<<endl;
    
    
    return 0;
    */
}
