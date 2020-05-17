#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std; //aveam nevoie de std pt string
#include "Animal.h"
#include "Vertebrat.h"
#include "NeVertebrat.h"
#include "Peste.h"
#include "Pasare.h"
#include "Mamifer.h"
#include "Reptila.h"
#include "AtlasZoologic.h"

int main()
{
    int test = 4;
    switch(test){
        case 1:{
            Animal a;
            cin>>a;
            cout<<a;
            break;
            }
        case 2:{
            Vertebrat v1,v2;
            v1.set(13,80,"gigel");
            v2 = v1;
            v2.afisare();
            break;
            }
        case 3:{
            Peste p;
            cin>>p;
            cout<<p;
            break;
            }
        case 4:{
            AtlasZoologic<Peste> at;
            Peste ob, ob2;
            cin>>ob;
            cin>>ob2;
            at += ob;
            at += ob2;
            at += ob;
            cout<<at;
        }
    }


    return 0;
}
