#include <iostream>
using namespace std;
class prova{
public:
    int a;
    prova(int a){
        this->a=a;//Preleva il dato dal parametro e lo assegna alla variabile a(Proprieta della classe)
    };
    //(This->) Esiste se esiste l'oggetto
    //This - punta all inizzio dell oggetto
    //This -> punta all inizio memoria dell oggetto
    //Esistenza dell oggetto - 
    //Oggetto in ram - Blocco di byte
    // Puntatore - una variabile che contiene indirizzo della ram 
};

int main()
{
    prova Obj(5);
    cout<<"Dimensione oggetto : "<<sizeof(Obj);
    
    return 0;
}

