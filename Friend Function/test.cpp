#include <iostream>
#include <string.h>
#include "test.h"
using namespace std;

static int conta = 0;

int somma(test a,test b){
    cout<<"a = "<<a.a;
    cout<<"\nb = "<<b.a;
    return a.a+b.a;  
};

test::test(){
    conta++;
    this->a = 0;
    cout<<"Costruttore Vuoto attivo! \nNumero di volte che la classe e stata usata :"<<conta<<endl;
};
test::test(int a){
    this->a = a;
    conta++;
    cout<<"Costruttore con intero attivo! \nNumero di volte che la classe e stata usata :"<<conta<<endl;
};
void test::setA(int a){
    this->a=a;
};

int test::getA(){
    return a;
};
