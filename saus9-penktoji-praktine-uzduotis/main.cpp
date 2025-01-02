#include <iostream>
#include <iomanip>

using namespace std;

void pirmaPrograma(); //prot
void antraPrograma(); //prot

int main()
{
    int pasirinkimas;
    while (pasirinkimas != 3 ) {
        cout<<"Pasirinkite tarp dvieju programu:"<<endl;
        cout<<"1. Lenteles duomenu ivedimas."<<endl;
        cout<<"2. Irasu redagavimas."<<endl;
        cout<<"3. Iseiti."<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1: pirmaPrograma();
            break;

            case 2: antraPrograma();
            break;

            case 3: cout<<"Viso gero."<<endl;
            break;

            default: cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;
        }
    }
    return 0;
}

void pirmaPrograma() {
    int eilutes1, stulpeliai1;
    cout<<"Iveskite lenteles eiluciu skaiciu: "<<endl;
    cin >> eilutes1;
    cout<<"Iveskite lenteles stulpeliu skaiciu: "<<endl;
    cin >> stulpeliai1;

    int** lentele = new int*[eilutes1];
        for (int i = 0; i < eilutes1; i++) {
            lentele[i] = new int[stulpeliai1];
        }

    for (int i = 0; i < eilutes1; i++) {
        for (int j = 0; j < stulpeliai1; j++) {
            cout << "Iveskite lenteles elemento ["<<i<<"]["<<j<<"] reiksme:"<<endl;
            cin >> lentele[i][j];
        }
    }
    cout<<"Lenteles duomenys:"<<endl;
    for (int i = 0; i < eilutes1; i++) {
        for (int j = 0; j < stulpeliai1; j++) {
        cout<<setw(3)<<lentele[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Kiekvienos eilutes elementu suma:"<<endl;
    for (int i=0; i < eilutes1; i++) {
        int eilutesSuma = 0;
        for (int j=0; j < stulpeliai1; j++) {
            eilutesSuma += lentele[i][j];
        }
        cout<<eilutesSuma;
        cout<<endl;
    }
    cout<<endl;

    cout<<"Kiekvieno stulpelio elementu suma:"<<endl;
    for (int j=0; j < stulpeliai1; j++) {
        int stulpelioSuma = 0;
        for (int i=0; i < eilutes1; i++) {
            stulpelioSuma += lentele[i][j];
        }
        cout<<stulpelioSuma<<" ";
    }
    cout<<endl;
    cout<<endl;
}

    void antraPrograma() {

    }

