typedef struct NODO
{
    int dato;
    struct NODO *next;//Nodo di una lista
}nodo;

typedef nodo *list;//Puntatore ad un nodo

int contaNodi(list TestaDellaLista);
void stampaCodaLista(list TestaDellaLista);
list ultimoNodoLista(list TestaDellaLista);
void cercaValoreNodo(list TestaDellaLista, int valoreCercato);