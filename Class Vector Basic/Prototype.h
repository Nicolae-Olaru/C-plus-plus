
class vettore {
    //Proptieta
    int *punt_a_vettore;
    int dimensione;
    //eventuali var di lavoro
    public:
        vettore(int dim);//Costruttore
        void visualizzaVettorePieno();
        void generaCasualmenteVettore();
        void generaManualmenteVettore();
        int controllaVettorePieno();
        void cerca(int cercato);
        int Massimo();
        int Minimo();
        float Media();
        void ordina();
        void modificaDimensione();
        
    /*
    void ordina();
*/
};

