//2 tread eseguono il codice al intero di una funzione
//main crea 2 tread ....
#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

pthread_t thread1;

void * ThreadFunction(void*msg)
{
    if(pthread_self() == thread1)
    {
        pthread_exit(&thread1);
    }
    cout<<"Inizio Thread";
    cout<<(char*)msg;
    cout<<"Fine\n";
    return 0;
}

int main()
{
    //Variabile di tipo thread
    //pthread_t thread1;
    pthread_t thread2;
    //Una stringa passeremo alla nostra funzione
    const char * Message1="\n Thread1 - INTERNO THREAD\n";
    const char * Message2="\n Thread2 - INTERNO THREAD\n";
    int ret = 0;
    //Funzione che crea il thread, 
    //PAR 1: thread1
    //PAR 2: NULL -> crea il tread default
    //PAR 3: La funzione che usiamo per il tread
    //PAR 4: Argomento
    
    ret = pthread_create(&thread1,NULL,ThreadFunction,(void *)Message1);
    if(ret != 0)
    {
        cout<<"Thread fallita!\n";
    }
    else
    {
        cout<<"CREAZIONE Thread 1 success!\n";
    }
    //Il processo padre aspetta il completodel processo figlio con la funzione :
    //pthread_join(thread1,NULL);
    //se non ce sleep in processo padre finisce prima quindi muore anche il processo figlio
    //sleep(1);
    ret = pthread_create(&thread2,NULL,ThreadFunction,(void *)Message2);
    if(ret != 0)
    {
        cout<<"Thread fallita!\n";
    }
    else
    {
        cout<<"CREAZIONE  Thread 2 success!\n";
    }
    //Il processo padre aspetta il completodel processo figlio con la funzione :
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    return 0;
}


