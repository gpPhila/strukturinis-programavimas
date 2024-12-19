#include <iostream>

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


}
