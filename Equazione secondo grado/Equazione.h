
class Equazione{
private:
   int A;
   int B;
   int C;
public:  
   Equazione();
   Equazione(int A);
   Equazione(int A,int B);
   Equazione(int A,int B,int C);
   ~Equazione();
   void setA(int a);
   void setB(int b);
   void setC(int c);
   int getA();
   int getB();
   int getC();
};