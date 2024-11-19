#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

const char ABECELE[23] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                          'I', 'Y', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S',
                          'T', 'U', 'V', 'Z'};
void sifravimas1();//prototype
void desifravimas1();
void sifravimas2();//prot
void desifravimas2();


int main()
{
    int pasirinkimas;

    while (pasirinkimas != 3) {
        cout<<"1. Sifravimas naudojant ABECELE."<<endl;
        cout<<"2. Sifravimas naudojant ASCII koduote."<<endl;
        cout<<"3. Iseiti."<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1: cout<<"Pasirinkimas 1:"<<endl;
                    sifravimas1();
            break;
            case 2: cout<<"Pasirinkimas 2:"<<endl;
                    sifravimas2();
            break;
            case 3: cout<<"Jus isejote. Viso gero."<<endl;
            break;
            default: cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;

        }
    }

    return 0;
}

void sifravimas1() {
    char tekstas1[50];
    char raktas1 [50];
    char uzsifruotasTekstas1[50];

    int abecelesDydis = sizeof(ABECELE)/sizeof(ABECELE[0]);

    cout<<"Iveskite teksta: "<<endl;
    cin>>tekstas1;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>raktas1;
    int tekstoIlgis = strlen(tekstas1);
    int raktoIlgis = strlen(raktas1);
    cout<<tekstoIlgis<<" "<<abecelesDydis<<endl;

    for (int i=0; i < tekstoIlgis; i++) {
    }
}

void sifravimas2() {
    char tekstas2[50];
    char raktas2[50];
    char uzsifruotasTekstas[50];

    cout << "Iveskite teksta: "<<endl;
    cin >> tekstas2;
    cout << "Iveskite slapta rakta: "<<endl;
    cin >> raktas2;

    int tekstoIlgis = strlen(tekstas2);
    int raktoIlgis = strlen(raktas2);

    for (int i = 0; i < tekstoIlgis; ++i) {



    }
}