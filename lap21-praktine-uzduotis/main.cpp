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
int getASCII();
void sifravimas2();
void desifravimas2();


int main()
{
    int pasirinkimas;
    int pasirinkimas1;

    while (pasirinkimas != 3) {
        cout<<"SIFRAVIMO BUDO PASIRINKIMAS"<<endl;
        cout<<"1. Sifravimas naudojant ABECELE."<<endl;
        cout<<"2. Sifravimas naudojant ASCII koduote."<<endl;
        cout<<"3. Iseiti."<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1: cout<<"Jus pasirinkote sifravima naudojant ABECELE."<<endl;
                    cout<<"1. Teksto sifravimas."<<endl;
                    cout<<"2. Uzsifruoto teksto desifravimas."<<endl;
                    cin>>pasirinkimas1;
                        if (pasirinkimas1 == 1) {
                            sifravimas1();
                        } else if (pasirinkimas1 == 2) {
                            desifravimas1();
                        } else {
                            cout<<"Tokio pasirinkimo nera."<<endl;
                        }
            break;
            case 2: cout<<"Jus pasirinkote sifravima naudojant ASCII koduote."<<endl;
                    cout<<"1. Teksto sifravimas."<<endl;
                    cout<<"2. Uzsifruoto teksto desifravimas."<<endl;
                    cin>>pasirinkimas1;
                    if (pasirinkimas1 == 1) {
                        sifravimas2();
                        } else if (pasirinkimas1 == 2) {
                        desifravimas2();
                        } else {
                        cout<<"Tokio pasirinkimo nera."<<endl;
                    }
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
    int uzsifruotasTekstas1[50];
    int uzsifruotasRaktas1[50];
    char rezultatas[50];
    int abecelesDydis = sizeof(ABECELE);

    cout<<"Iveskite teksta: "<<endl;
    cin>>tekstas1;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>raktas1;
    int tekstoIlgis = strlen(tekstas1);
    int raktoIlgis = strlen(raktas1);

    // sifravimas:
    // uzsifruotasTekstas = tekstas1 pozicija + raktas1 pozicija % abecelesDydis
    //------------------------------- zemiau skaiciuojame tekstas1 pozicija (kaip skaiciu, int):
    for (int i=0; i < tekstoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje

        for (int j = 0; j < abecelesDydis; j++) {

            if (toupper(tekstas1[i]) == ABECELE[j]) {
            uzsifruotasTekstas1[i] = j;
            }
        }
    }

    //--------------------------- skaiciuojame raktas1 pozicija:
    for (int i=0; i < raktoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje

        for (int j = 0; j < abecelesDydis; j++) {

            if (toupper(raktas1[i]) == ABECELE[j]) {
                uzsifruotasRaktas1[i] = j;
            }
        }
    }

    cout<<"Uzsifruotas tekstas: ";
    //-------------------------------- sifravimo zingsnis:
    for (int i=0; i < tekstoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje
        int raktoPra = i % raktoIlgis;
        rezultatas[i] = (uzsifruotasTekstas1[i] + uzsifruotasRaktas1[raktoPra]) % abecelesDydis;
        cout<<ABECELE[rezultatas[i]];
    }
    cout<<endl;
}

void desifravimas1() {
    char tekstas1[50];
    char raktas1[50];
    int uzsifruotasTekstas1[50];
    int uzsifruotasRaktas1[50];
    char rezultatas[50];

    int abecelesDydis = sizeof(ABECELE);

    cout<<"Iveskite uzsifruota teksta:"<<endl;
    cin>>tekstas1;
    cout<<"Iveskite rakta: "<<endl;
    cin>>raktas1;

    int tekstoIlgis = strlen(tekstas1);
    int raktoIlgis = strlen(raktas1);

    //--------------skaiciuojame uzsifruoto teksto pozicija:
    for (int i=0; i < tekstoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje
        for (int j = 0; j < abecelesDydis; j++) {
            if (toupper(tekstas1[i]) == ABECELE[j]) {
                uzsifruotasTekstas1[i] = j;
            }
        }
    }

    //--------------------------- skaiciuojame rakto pozicija:
    // Desifravimas mi≡ ci−ki+n(mod n)
    // tekstas1 = uzsifruotas tekstas - raktas1 + abelecelesDydis % abecelesDydis
    for (int i=0; i < raktoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje

        for (int j = 0; j < abecelesDydis; j++) {

            if (toupper(raktas1[i]) == ABECELE[j]) {
                uzsifruotasRaktas1[i] = j;
            }
        }

    }
    cout<<"Desifruotas tekstas: ";
    //-------------------------------- desifravimo zingsnis:
    for (int i=0; i < tekstoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje
        int raktoPra = i % raktoIlgis;
        rezultatas[i] = (uzsifruotasTekstas1[i] - uzsifruotasRaktas1[raktoPra] + abecelesDydis) % abecelesDydis;
        cout<<ABECELE[rezultatas[i]];
    }
    cout<<endl;
}

int getASCII(char ch) {
    return static_cast<int>(ch);
}

int getOutOfASCII (int skaicius) {
    return static_cast<char>(skaicius);
}

void sifravimas2() {
    char tekstas2[50];
    char raktas2 [50];
    char rezultatas[50];

    cout<<"Iveskite teksta: "<<endl;
    cin>>tekstas2;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>raktas2;
    int tekstoIlgis = strlen(tekstas2);
    int raktoIlgis = strlen(raktas2);

    // sifravimas:
    // uzsifruotasTekstas = tekstas1 pozicija + raktas1 pozicija % getASCII
    //------------------------------- zemiau skaiciuojame tekstas1 pozicija (kaip skaiciu, int):
    cout<<"Uzsifruotas tekstas: ";
    for (int i=0; i < tekstoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje
        int tekstoASCII = getASCII(tekstas2[i]);
        int raktoASCII = getASCII(raktas2[i % raktoIlgis]);
        // jeigu i=3 o raktas2 turi tik 2 simbolius, tai 3%2 => grizta prie pirmo simbolio, naudoja ji tolimesniam skaiciavimui

        rezultatas[i] = (tekstoASCII + raktoASCII) % 94 + 33;
        cout<<rezultatas[i];
        //cout<<tekstoASCII<<endl;
        //cout<<raktoASCII<<endl;
    }
    cout<<endl;
}

void desifravimas2() {
    char tekstas2[50];
    char raktas2 [50];
    int rezultatas [50];

    cout<<"Iveskite uzsifruota teksta: "<<endl;
    cin>>tekstas2;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>raktas2;

    int tekstoIlgis = strlen(tekstas2);
    int raktoIlgis = strlen(raktas2);

    // Desifravimas mi≡ ci−ki+n(mod n)
    // tekstas1 = uzsifruotas tekstas - raktas1 + abelecelesDydis % abecelesDydis
    //------------------------------- zemiau skaiciuojame tekstas1 pozicija (kaip skaiciu, int):
    cout<<"Desifruotas tekstas: ";
    for (int i=0; i < tekstoIlgis; i++) { // kartojamas zingsnis tiek kartu kiek turime raidziu zodyje
        int tekstoASCII = getASCII(tekstas2[i]);
        int raktoASCII = getASCII(raktas2[i % raktoIlgis]);
        // jeigu i=3 o raktas2 turi tik 2 simbolius, tai 3%2 => grizta prie pirmo simbolio, naudoja ji tolimesniam skaiciavimui

        rezultatas[i] = (tekstoASCII - raktoASCII + 94) % 94 + 33 + 28;
        char result = getOutOfASCII(rezultatas[i]);
        cout << result;
    }
    cout<<endl;
}
// (85 - 97 + x) % 94 + 33 = 49
// (85 - 97 + x) % 94 = 16
// (-12 + x) % 94 = 16

// rezultatas[i] = (tekstoASCII - raktoASCII + 94) % 94 + 33 + 28;