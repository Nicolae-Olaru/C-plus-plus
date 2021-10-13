class vettore{
private:
    int *p;
    int dim;
public:
    vettore(int dim);
    ~vettore();
    void carica();
    void visualizza();
    int conta_pari();
    int contaPrimi();
};

