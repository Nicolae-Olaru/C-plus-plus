/*Gestione Stack*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "func.h"
using namespace std;

int main() {
   srand(time(NULL));
   bool Exit = false;
   int scelta = 0;
   int valore = 0;
   int inserito;
   while (Exit != true)
   {
       scelta = menu();
       switch (scelta)
       {
           case 1:
                ElementiInseriti();
           break;
           case 2:
                RiempiStack();
           break;
           case 3:
                if(stackPieno() == 0){
                    cout<<"stack pieno!";
                }
                else
                {
                    cout<<"Inserisci valore da inserire : ";
                    cin>>valore;
                    Push(valore);
                    cout<<"\n";
                }
           break;
           case 4:
                if(stackVuoto() == 0){
                    cout<<"stack Vuoto!";
                }
                else
                Pop();
           break;
           case 5:
                inserito = ElementiNonInseriti();
                cout<<"Elementi rimasti da inserire : "<<inserito<<endl;
           break;
           case 6:
                inserito = ElementiInseriti();
                cout<<"Elementi inseriti : "<< inserito<<endl;
           break;
           case 7:
                Exit = true;
           break;
       }
       
       
   }
    return 0;
}






