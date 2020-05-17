class Pasare:public Vertebrat{
    private:
        bool zburatoare;
    public:
        Pasare(int, int, string, bool);
        Pasare(const Pasare&);
        ~Pasare();
        bool checkzburatoare();
        void set(int, int, string, bool);
        void set_zburatoare(bool);
        Pasare& operator =(const Pasare&);
        friend istream& operator >>(istream&, Pasare&);
        friend ostream& operator <<(ostream&, const Pasare&);
        void citire(istream&);
        void afisare(ostream&)const;
};

Pasare::Pasare(int v = 0, int m = 0, string n = "", bool z = true):Vertebrat(v, m, n){
    this -> zburatoare = z;
}

Pasare::Pasare(const Pasare& ob):Vertebrat(ob){
    this -> zburatoare = ob.zburatoare;
}

Pasare::~Pasare(){
    cout<<"Object Pasare destroyed\n";
}

bool Pasare::checkzburatoare(){
    return this -> zburatoare;
}


void Pasare::set(int v = 0, int m = 0, string n = "", bool z = true){
    Vertebrat::set(v, m, n);
    this -> zburatoare = z;
}

void Pasare::set_zburatoare(bool z = true){
    this -> zburatoare = z;
}


Pasare& Pasare::operator=(const Pasare& ob){
    Vertebrat::operator=(ob);
    this -> zburatoare = ob.zburatoare;
    return *this;
}

void Pasare::citire(istream& is = cin){
    Vertebrat::citire(is);
    if(&is == &cin){
        cout<<"Este pasarea zburatoare?(0/1) ";
        is>>zburatoare;
    }
    else{
        is>>zburatoare;
    }
}

istream& operator>>(istream& is, Pasare& ob){
    cout<<"\nCitire Pasare\n";
    ob.citire();
    return is;
}

void Pasare::afisare(ostream& os = cout)const{
    Vertebrat::afisare(os);
    if(zburatoare){
        os<<"Pasarea este zburatoare\n";
    }
    else{
        os<<"Pasarea nu este zburatoare\n";
    }

}

ostream& operator<<(ostream& os, Pasare& ob){
    os<<"\nAfisare Pasare\n";
    ob.afisare();
    return os;
}




