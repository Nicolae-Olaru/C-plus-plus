#include <string.h>
#include <iostream>
#include "manu.h"
using namespace std;

int main()
{
    manu p;
    char l;
    cout<<"Inserisci una lettera : ";
    cin>>l;
    p.setX(l);
    
    printf("%c",p.getX());

    return 0;
}
