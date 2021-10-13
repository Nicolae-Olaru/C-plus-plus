
#include <iostream>
using namespace std;

template <class T,class Q>
void f(T a,Q b)
{
    cout<<a<<b;
}

int main()
{
    //char p='A';
    float p=2.5;
    int q=7;
    f(p,q);

    return 0;
}

