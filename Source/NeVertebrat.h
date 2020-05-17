class NeVertebrat:public Animal{
    protected:
        const bool ver = false;   ///daca e sau nu vertebra
    public:
        NeVertebrat(int, int, string);
        NeVertebrat(const NeVertebrat& ob);
        ~NeVertebrat();
        bool check_NeVertebrat();
        NeVertebrat& operator =(const NeVertebrat&);
        friend istream& operator >>(istream&, NeVertebrat&);
        friend ostream& operator <<(ostream&, const NeVertebrat&);
        void citire(istream&);
        void afisare(ostream&)const;
};

NeVertebrat::NeVertebrat(int v = 0, int m = 0, string n = ""):Animal(v, m, n){}

NeVertebrat::NeVertebrat(const NeVertebrat& ob):Animal(ob){}

NeVertebrat::~NeVertebrat(){
    cout<<"Object NeVertebrata destroyed\n";
}

bool NeVertebrat::check_NeVertebrat(){
    return this -> ver;
}


NeVertebrat& NeVertebrat::operator =(const NeVertebrat& ob){
    Animal::operator=(ob);
    return *this;
}

void NeVertebrat::citire(istream& is = cin){
    Animal::citire(is);
}

istream& operator>>(istream& is, NeVertebrat& ob){
    cout<<"\nCitire Nevertebrat\n";
    ob.citire();
    return is;
}

void NeVertebrat::afisare(ostream& os = cout)const{
    Animal::afisare(os);
}

ostream& operator<<(ostream& os, NeVertebrat& ob){
    os<<"\nAfisare Nevertebrat\n";
    ob.afisare();
    return os;
}



