class Mamifer:public Vertebrat{
    private:
        bool pradator;
        string alimentatie; //carnivor, ierbivor, omnivor
        string mediu;       //acvativ, terestru, subterestru, aerian
        float lungime;
        float inaltime;

    public:
        Mamifer(int, int, string, bool, string, string, float, float);
        Mamifer(const Mamifer&);
        ~Mamifer();
        bool checkpradator();
        string get_alimentatie();
        string get_mediu();
        float get_lungime();
        float get_inaltime();
        void set(int, int, string, bool, string, string, float, float);
        void set_pradator(bool);
        void set_alimentatie(string);
        void set_mediu(string);
        void set_lungime(float);
        void set_inaltime(float);
        Mamifer& operator =(const Mamifer&);
        friend istream& operator >>(istream&, Mamifer&);
        friend ostream& operator <<(ostream&, const Mamifer&);
        void citire(istream&);
        void afisare(ostream&)const;
};

Mamifer::Mamifer(int v = 0, int m = 0, string n = "", bool p = false, string a = "", string me = "", float l = 0, float i = 0):Vertebrat(v, m, n){
    this -> pradator = p;
    this -> alimentatie = a;
    this -> mediu = me;
    this -> lungime = l;
    this -> inaltime = i;
}

Mamifer::Mamifer(const Mamifer& ob):Vertebrat(ob){
    this -> pradator = ob.pradator;
    this -> alimentatie = ob.alimentatie;
    this -> mediu = ob.mediu;
    this -> lungime = ob.lungime;
    this -> inaltime = ob.inaltime;

}

Mamifer::~Mamifer(){
    cout<<"Object Mamifer destroyed\n";
}

bool Mamifer::checkpradator(){
    return this -> pradator;
}

string Mamifer::get_alimentatie(){
    return this -> alimentatie;
}

string Mamifer::get_mediu(){
    return this -> mediu;
}

float Mamifer::get_lungime(){
    return this -> lungime;
}

float Mamifer::get_inaltime(){
    return this -> inaltime;
}

void Mamifer::set(int v = 0, int m = 0, string n = "", bool p = false, string a = "", string me = "", float l = 0, float i = 0){
    Vertebrat::set(v, m, n);
    this -> pradator = p;
    this -> alimentatie = a;
    this -> mediu = me;
    this -> lungime = l;
    this -> inaltime = i;
}

void Mamifer::set_pradator(bool r = false){
    this -> pradator = r;
}

void Mamifer::set_alimentatie(string a = ""){
    this -> alimentatie = a;
}

void Mamifer::set_mediu(string me = ""){
    this -> mediu = me;
}

void Mamifer::set_lungime(float l = 0){
    this -> lungime = l;
}

void Mamifer::set_inaltime(float i = 0){
    this -> inaltime = i;
}

Mamifer& Mamifer::operator=(const Mamifer& ob){
    Vertebrat::operator=(ob);
    this -> pradator = ob.pradator;
    this -> lungime = ob.lungime;
    return *this;
}

void Mamifer::citire(istream& is = cin){
    Vertebrat::citire(is);
    if(&is == &cin){
        cout<<"Este Mamiferul pradator?(0/1) ";
        is>>pradator;
        cout<<"Din pdv al alimentatiei, mamiferul este ";
        is>>alimentatie;
        cout<<"Mamiferul traieste in mediul ";
        is>>mediu;
        cout<<"Introduceti lungimea Mamiferlui: ";
        is>>lungime;
        cout<<"Introduceti inaltimea Mamiferlui: ";
        is>>inaltime;
    }
    else{
        is>>pradator>>alimentatie>>mediu>>lungime>>inaltime;
    }
}

istream& operator>>(istream& is, Mamifer& ob){
    cout<<"\nCitire Mamifer\n";
    ob.citire();
    return is;
}

void Mamifer::afisare(ostream& os = cout)const{
    Vertebrat::afisare(os);
    if(pradator){
        os<<"Mamiferul este pradator\n";
    }
    else{
        os<<"Mamiferul nu este pradator\n";
    }
    if (alimentatie.length()){
        os<<"Mamiferul este "<<this -> alimentatie<<endl;
    }
    if (mediu.length()){
        os<<"Mamiferul traieste in mediul "<<this -> mediu<<endl;
    }
    if(lungime){
        os<<"Lungimea Mamiferlui este de "<<this -> lungime<<endl;
    }
    if(inaltime){
        os<<"Inaltimea Mamiferlui este de "<<this -> inaltime<<endl;
    }
}

ostream& operator<<(ostream& os, Mamifer& ob){
    os<<"\nAfisare Mamifer\n";
    ob.afisare();
    return os;
}




