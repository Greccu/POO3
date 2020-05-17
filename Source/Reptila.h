class Reptila:public Vertebrat{
    private:
        float lungime;
    public:
        Reptila(int, int, string, float);
        Reptila(const Reptila&);
        ~Reptila();
        float get_lungime();
        void set(int, int, string, float);
        void set_lungime(float);
        Reptila& operator =(const Reptila&);
        friend istream& operator >>(istream&, Reptila&);
        friend ostream& operator <<(ostream&, const Reptila&);
        void citire(istream&);
        void afisare(ostream&)const;
};

Reptila::Reptila(int v = 0, int m = 0, string n = "", float l = 0):Vertebrat(v, m, n){
    this -> lungime = l;
}

Reptila::Reptila(const Reptila& ob):Vertebrat(ob){
    this -> lungime = ob.lungime;
}

Reptila::~Reptila(){
    cout<<"Object reptilei destroyed\n";
}


float Reptila::get_lungime(){
    return this -> lungime;
}

void Reptila::set(int v = 0, int m = 0, string n = "", float l = 0){
    Vertebrat::set(v, m, n);
    this -> lungime = l;
}


void Reptila::set_lungime(float l = 0){
    this -> lungime = l;
}

Reptila& Reptila::operator=(const Reptila& ob){
    Vertebrat::operator=(ob);
    this -> lungime = ob.lungime;
    return *this;
}

void Reptila::citire(istream& is = cin){
    Vertebrat::citire(is);
    if(&is == &cin){
        cout<<"Introduceti lungimea reptilei: ";
        is>>lungime;
    }
    else{
        is>>lungime;
    }
}

istream& operator>>(istream& is, Reptila& ob){
    cout<<"\nCitire Reptila\n";
    ob.citire();
    return is;
}

void Reptila::afisare(ostream& os = cout)const{
    Vertebrat::afisare(os);
    if(lungime){
        os<<"Lungimea reptilei este de "<<this -> lungime<<endl;
    }
}

ostream& operator<<(ostream& os, Reptila& ob){
    os<<"\nAfisare Reptila\n";
    ob.afisare();
    return os;
}




