#include <iostream>
using namespace std;

class calcolo{
    
    public:
    static int somma(int a,int b){
        return a+b;
    };
    
};



int main()
{
    int x=8;
    int y=9;
    int h = calcolo::somma(x,y);
    cout<< h;
    return 0;
}
