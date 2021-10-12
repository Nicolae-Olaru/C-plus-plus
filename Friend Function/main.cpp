#include <iostream>
#include <string.h>
#include "test.h"
using namespace std;




int main()
{
    test x(9);
    test y(6);
    int c = somma(x,y);
    cout<<"\nSomma e = "<<c<<endl;
    return 0;
}
