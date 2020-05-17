class Vertebrat:public Animal{
    protected:
        const bool ver = true;   ///daca e sau nu vertebra
    public:
        Vertebrat(int, int, string);
        Vertebrat(const Vertebrat&);
        ~Vertebrat();
        bool check_vertebrat();
        Vertebrat& operator =(const Vertebrat&);
        friend istream& operator >>(istream&, Vertebrat&);
        friend ostream& operator <<(ostream&, const Vertebrat&);
        void citire(istream&);
        void afisare(ostream&)const;
    };

Vertebrat::Vertebrat(int v = 0, int m = 0, string n = ""):Animal(v, m, n){}

Vertebrat::Vertebrat(const Vertebrat& ob):Animal(ob){}

Vertebrat::~Vertebrat(){
    cout<<"Object vertebrat destroyed\n";
}

bool Vertebrat::check_vertebrat(){
    return this -> ver;
}

Vertebrat& Vertebrat::operator =(const Vertebrat& ob){
    Animal::operator=(ob);
    return *this;
}

void Vertebrat::citire(istream& is = cin){
    Animal::citire(is);
}

istream& operator>>(istream& is, Vertebrat& ob){
    cout<<"\nCitire Vertebrat\n";
    ob.citire();
    return is;
}

void Vertebrat::afisare(ostream& os = cout)const{
    Animal::afisare(os);
}

ostream& operator<<(ostream& os, Vertebrat& ob){
    os<<"\nAfisare Vertebrat\n";
    ob.afisare();
    return os;
}

