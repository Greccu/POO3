class Animal{
protected:
    int varsta; /// masurata in ani
    int masa;   /// masurata in kilograme
    string nume;/// numele speciei

public:
    Animal(int,int,string);
    Animal(const Animal&);
    ~Animal();
    int get_varsta();
    int get_masa();
    string get_nume();
    void set(int,int,string);
    void set_varsta(int);
    void set_greutate(int);
    void set_nume(string);
    virtual Animal& operator =(const Animal&);
    friend istream& operator >>(istream&, Animal&);
    friend ostream& operator <<(ostream&, const Animal&);
    virtual void citire(istream&);
    virtual void afisare(ostream&)const;
};

Animal::Animal(int v = 0,int m = 0, string n = ""){
    this -> varsta = v;
    this -> nume = n;
    this -> masa = m;
}

Animal::Animal(const Animal& ob){
    this -> varsta = ob.varsta;
    this -> nume = ob.nume;
    this -> masa = ob.masa;
}

Animal::~Animal(){
    cout<<"Object animal destroyed\n";
}

int Animal::get_varsta(){
    return this -> varsta;
}

int Animal::get_masa(){
    return this -> masa;
}

string Animal::get_nume(){
    return this -> nume;
}

void Animal::set(int v = 0, int m = 0, string n = ""){
    this -> varsta = v;
    this -> nume = n;
    this -> masa = m;
}

void Animal::set_varsta(int v = 0){
    this -> varsta = v;
}

void Animal::set_greutate(int m = 0){
    this -> masa = m;
}

void Animal::set_nume(string n = ""){
    this -> nume = n;
}


void Animal::afisare(ostream& os = cout)const{
    if(nume.length()){
        os<<"Numele animalului este "<<this -> nume<<endl;
    }
    if(varsta){
        os<<"Varsta animalului este "<<this -> varsta<<" ani"<<endl;
    }
    if(masa){
        os<<"Animalul cantareste "<<this -> masa<<" kilograme"<<endl;
    }
}

ostream& operator <<(ostream& os, const Animal& ob){
    os<<"\nAfisare Mamifer\n";
    ob.afisare(os);
    return os;
}

void Animal::citire(istream& is = cin){
    if(&is == &cin){
        cout<<"Introduceti numele animalului: ";
        is>>nume;
        cout<<"Introduceti varsta animalului: ";
        is>>varsta;
        cout<<"Introduceti masa animalului: ";
        is>>masa;
    }
    else{
        is>>nume>>varsta>>masa;
    }
}

istream& operator >>(istream& is, Animal& ob){
    cout<<"\nCitire Animal\n";
    ob.citire(is);
    return is;
}



Animal& Animal::operator =(const Animal& ob){
    this -> nume = ob.nume;
    this -> varsta = ob.varsta;
    this -> masa = ob.masa;
    return *this;
}


