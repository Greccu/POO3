template <class T = Animal> class AtlasZoologic{
	private:
		list <T> obiecte;
		int n;
	public:

		AtlasZoologic();
		~AtlasZoologic(){cout<<"\natlas destroyed\n";}
		list<T> getobiecte();
		int getn();
		const AtlasZoologic& operator+=(T ob){
			this -> obiecte.push_back(ob);
			this -> n++;
			return *this;
		}
		friend istream& operator >>(istream& is, AtlasZoologic<T>& at){
		    if(&is == &cin){
             cout<<"Introduceti numarul de elemente";
		    }
            is>>at.n;
            T aux;
            for(int i = 0; i < at.n; i++){
                is>>aux;
                at.obiecte.push_back(aux);
            }

            return is;
		}
		friend ostream& operator <<(ostream& os, AtlasZoologic<T>& at){
		    os<<"\nAfisare Atlas\n";
            for (auto& i: at.obiecte) {
                os << i << "\n";
            }
            return os;
		}

};

template<class T> AtlasZoologic<T>::AtlasZoologic(){
		this -> n=0;
		cout<<"Atlas creat ce contine obiecte de tipul :"<<typeid(*this).name()<<"\n";
		}

template<class T> list<T>AtlasZoologic<T>::getobiecte(){
			return this -> obiecte;
}

template<class T> int AtlasZoologic<T>::getn(){
			return this -> n;
		}



template<> class AtlasZoologic <Peste>{
	private:
	    list <Peste> obiecte;
		int n;
		int pestiRapitoriLungi;
	public:
		AtlasZoologic(){
            n = 0;
            pestiRapitoriLungi = 0;
		}

		const AtlasZoologic& operator+=(Peste ob){
			this -> obiecte.push_back(ob);
			this -> n++;
			if (ob.checkrapitor() && ob.get_lungime()>1){
				this -> pestiRapitoriLungi++;
			}
			return *this;
		}
		list <Peste> getobiecte(){
			return obiecte;
		}
		int getPestiRapitoriLungi(){
			return this -> pestiRapitoriLungi;
		}

		friend istream& operator >>(istream& is, AtlasZoologic<Peste>& at){
		    if(&is == &cin){
             cout<<"Introduceti numarul de elemente: ";
		    }
            is>>at.n;
            Peste aux;
            for(int i = 0; i < at.n; i++){
                is>>aux;
                at.obiecte.push_back(aux);
                if (aux.checkrapitor() && aux.get_lungime()>1){
                    at.pestiRapitoriLungi++;
                }
            }

            return is;
		}
		friend ostream& operator <<(ostream& os, AtlasZoologic<Peste>& at){
		    os<<"\nAfisare Atlas\nIn acest atlas se afla un numar de "<<at.pestiRapitoriLungi<<" pesti rapitori cu lungime de cel putin 1 metru";
            for (auto& i: at.obiecte) {
                os << i << "\n";
            }
            return os;
		}
};

