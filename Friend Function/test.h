
class test{
private:
    int a;
public:
    test();
    test(int a);
    void setA(int a);
    int getA();
    int friend somma(test a, test b);
};