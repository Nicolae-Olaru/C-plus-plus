#include <iostream>
#include "Equazione.h"
using namespace std;


Equazione::Equazione(){
    A=0;
    B=0;
    C=0;
    cout<<"\nCiao sono il costruttore 1.\n";
};
Equazione::Equazione(int a){
    A=a;
    cout<<"\nCiao sono il costruttore 2.\n";
};
Equazione::Equazione(int a,int b){
    A=a;
    B=b;
    cout<<"\nCiao sono il costruttore 3.\n";
};
Equazione::Equazione(int a,int b,int c){
    A=a;
    B=b;
    C=c;
    cout<<"\nCiao sono il costruttore 4.\n";
};
Equazione::~Equazione(){
    cout<<"\nCiao sono il distruttore.\n";
};
void Equazione::setA(int a){
    this->A=a;
};
void Equazione::setB(int b){
    this->B=b;
};
void Equazione::setC(int c){
    this->C=c;
};
int Equazione::getA(){
    return A;
};
int Equazione::getB(){
    return B;
};
int Equazione::getC(){
    return C;
};






