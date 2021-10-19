#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "func.h"
using namespace std;
#define dim 6 
int SP=-1; //Alternativa: Utilizziamo la funzione inizializzazioneStack()
int Stack[dim];

void inizializzazioneStack(){
	SP=-1;
}
int stackPieno(){
	if(SP==dim-1) return 0;//Stack Pieno
	else return 1;
}	
int stackVuoto(){
	if(SP==-1) return 0;//Stack Vuoto
	else return 1;
}
void Push(int valoreInserito){
		if(stackPieno()!=dim) {	
			SP++;
			Stack[SP]=valoreInserito;
	      		}
		else printf("Stack Pieno\n\n");
}
int Pop(){
	int dato;
	if (stackVuoto()!=0){
			dato=Stack[SP];
			SP--;
			return dato;
		}
	else {
		printf("Stack Vuoto\n\n");
		return -1;
		}
}
//ElementInseriti
//ElementiNonInseriti
//Creare 2 Stack: StackPari e StackDispari
int ElementiInseriti(){
    int i=0;
    while (SP >= i)
    {
        cout<<" Posizione : "<<i<<" Valore : "<< Stack[i]<<endl;
        i++;
    }
    return i;
}
int ElementiNonInseriti(){
    if (SP == -1)
    return dim-1;
    else 
    return (dim - SP -1);
}
int menu(){
    int scelta = 0;
    cout<<"\n1. Visualizza stack\n";
    cout<<"2. Riempire stack\n";
    cout<<"3. Push\n";
    cout<<"4. pop\n";
    cout<<"5. Elementi rimasti da inserire \n";
    cout<<"6. Elementi inseriti\n";
    cout<<"7. Exit\n";
    cout<<"";
    cin>>scelta;
    return scelta;
};
void RiempiStack(){
    while(SP != dim-1) 
    {	
			SP++;
			Stack[SP]=rand() % 101;
	}
}
