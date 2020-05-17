class Peste:public Vertebrat{
    private:
        bool rapitor;
        float lungime;
    public:
        Peste(int, int, string, bool, float);
        Peste(const Peste&);
        ~Peste();
        bool checkrapitor();
        float get_lungime();
        void set(int, int, string, bool, float);
        void set_rapitor(bool);
        void set_lungime(float);
        Peste& operator =(const Peste&);
        friend istream& operator >>(istream&, Peste&);
        friend ostream& operator <<(ostream&, const Peste&);
        void citire(istream&);
        void afisare(ostream&)const;
};

Peste::Peste(int v = 0, int m = 0, string n = "", bool r = false, float l = 0):Vertebrat(v, m, n){
    this -> rapitor = r;
    this -> lungime = l;
}

Peste::Peste(const Peste& ob):Vertebrat(ob){
    this -> rapitor = ob.rapitor;
    this -> lungime = ob.lungime;
}

Peste::~Peste(){
    cout<<"Object peste destroyed\n";
}

bool Peste::checkrapitor(){
    return this -> rapitor;
}

float Peste::get_lungime(){
    return this -> lungime;
}

void Peste::set(int v = 0, int m = 0, string n = "", bool r = false, float l = 0){
    Vertebrat::set(v, m, n);
    this -> rapitor = r;
    this -> lungime = l;
}

void Peste::set_rapitor(bool r = false){
    this -> rapitor = r;
}

void Peste::set_lungime(float l = 0){
    this -> lungime = l;
}

Peste& Peste::operator=(const Peste& ob){
    Vertebrat::operator=(ob);
    this -> rapitor = ob.rapitor;
    this -> lungime = ob.lungime;
    return *this;
}

void Peste::citire(istream& is = cin){
    Vertebrat::citire(is);
    if(&is == &cin){
        cout<<"Este pestele rapitor?(0/1) ";
        is>>rapitor;
        cout<<"Introduceti lungimea pestelui: ";
        is>>lungime;
    }
    else{
        is>>rapitor>>lungime;
    }
}

istream& operator>>(istream& is, Peste& ob){
    cout<<"\nCitire Peste\n";
    ob.citire();
    return is;
}

void Peste::afisare(ostream& os = cout)const{
    Vertebrat::afisare(os);
    if(rapitor){
        os<<"Pestele este rapitor\n";
    }
    else{
        os<<"Pestele nu este rapitor\n";
    }
    if(lungime){
        os<<"Lungimea pestelui este de "<<this -> lungime<<endl;
    }
}

ostream& operator<<(ostream& os, Peste& ob){
    os<<"\nAfisare Peste\n";
    ob.afisare();
    return os;
}




