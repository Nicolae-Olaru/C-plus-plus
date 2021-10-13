
//Esercitazione: Genera Pari Positivi Genera Dispari Negativi
//Esercitazione: Genera Giorno della settimana Genera Giorno dell'anno Genera Giorno del Mese Genera Mese
//Esercizio: Conta Pari
//Esercizio: Conta Primi
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "numeri.h"
#include "funzioni.h"
using namespace std;


int main()
{
    srand (time(NULL));
    bool controllo = true;
    int risp_menu;
    int dim;
    int pari=0;
    int primi=0;
    cout<<"Inserisci dimensione : "<<endl;
                cin>>dim;
                vettore scatola(dim);
    while(controllo == true)
    {
        risp_menu = menu();
        if(risp_menu == 5)
        {
            controllo = false;
        }
    
        switch (risp_menu) 
        {
            case 1:
               scatola.carica();
                break;
            case 2:
               scatola.visualizza();
                break;
            case 3:
              pari = scatola.conta_pari();
                cout<<"\nPari : "<<pari <<endl;
                break;
            case 4:
              //  primi = scatola.contaPrimi();
                cout<<"\nNumeri Primi = "<<primi;
                break;
            case 5:
              //  primi = scatola.contaPrimi();
                cout<<"\nExit";
                break;
            default:
                cout << "\n*********Error!**********\n";
                break;
    }
        
        
        
    }//Chiusura While menu
    return 0;
}
        
        
        
        

    
    
    
    
    
    //Esercitazione: Genera Pari Positivi Genera Dispari Negativi OK
    /*
    cout<<"Inserisci dimensione : "<<endl;
    cin>>dim;
    vettore scatola(dim);
    
    scatola.carica();
    
    scatola.visualizza();
    
    pari = scatola.conta_pari();
    primi = scatola.contaPrimi();
    cout<<"\nPari : "<<pari <<endl;
    cout<<"\nNumeri Primi = "<<primi;
    */
