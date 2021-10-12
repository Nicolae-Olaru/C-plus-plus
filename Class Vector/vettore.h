class vettore{
private:
    int *p;
    int dim;
public:
    vettore(int dim);
    ~vettore();
    int conta_dim();
    void carica();
    void visualizza();
};