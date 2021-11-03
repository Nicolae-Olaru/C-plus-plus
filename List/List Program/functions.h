


typedef struct NODO
{
    int dato;
    struct NODO *next;//Nodo di una lista
}nodo;

typedef nodo *list;//Puntatore ad un nodo

list Crea_Lista(int Dimensione);
void Visualizza_Lista(list Head);
void Carica_Dati_Lista(list &Head);
void Cerca_Valore(list Head,int valore);

int Conta_Pari_Lista(list Head);
int Conta_Dispari_Lista(list Head);

float Media_Pari_Lista(list Head);
float Media_Dispari_Lista(list Head);

list Crea_List_Pari(list Head);
list Crea_List_Dispari(list Head);

int Cerca_Valore_Massimo(list Head);
int Cerca_Valore_Minimo(list Head);

int menu();

