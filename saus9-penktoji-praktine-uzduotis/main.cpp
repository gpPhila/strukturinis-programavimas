#include <iostream>
#include <iomanip>

using namespace std;

struct studentoInfo {
    string vardas;
    string pavarde;
    string studentoID;
    string studentoTelNumeris;
};

void pirmaPrograma(); //prot
void antraPrograma(); //prot
void pridetiStudentoDuomenis(studentoInfo*& studentai, int& kiekis);
void rodytiStudentoDuomenis(studentoInfo* studentai, int size);

int main()
{
    int pasirinkimas = 0;
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

    int max = 0;

    for (int i = 0; i < eilutes1; i++) {
        for (int j = 0; j < stulpeliai1; j++) {
            if (lentele[i][j] > max) {
                max = lentele[i][j];
            }
        }
    }
    cout<<"Didziausia reiksme lenteleje: "<<max<<endl;
    cout<<endl;
}

    void antraPrograma() {
        studentoInfo* studentai = nullptr;
        int kiekis = 0;

        int pasirinkimas = 0;
        while (pasirinkimas != 5) {
            cout<<"Pasirinkite veiksma:"<<endl;
            cout<<"1. Atspausdinti visu studentu duomenys."<<endl;
            cout<<"2. Prideti studento duomenys."<<endl;
            cout<<"3. Redaguoti studento duomenys."<<endl;
            cout<<"4. Salinti studento duomenys."<<endl;
            cout<<"5. Iseiti."<<endl;
            cin>>pasirinkimas;

            switch (pasirinkimas) {
                case 1: if (kiekis == 0) {
                    cout << "Nera studentu duomenu." << endl;
                } else {
                    rodytiStudentoDuomenis(studentai, kiekis);
                }
                break;

                case 2: pridetiStudentoDuomenis(studentai, kiekis);
                break;

                default: cout<< endl;
            }
        }
    }

void pridetiStudentoDuomenis (studentoInfo*& studentai, int& kiekis) {
    cout<<"Studento duomenu ivedimas:"<<endl;
    studentoInfo* naujasStudentas = new studentoInfo [kiekis + 1];

    for (int i = 0; i < kiekis; i++) {
        naujasStudentas[i] = studentai[i];
    }
        cout<<"Vardas: ";
        cin>>naujasStudentas[kiekis].vardas;
        cout<<"Pavarde: ";
        cin>>naujasStudentas[kiekis].pavarde;
        cout<<"ID: ";
        cin>>naujasStudentas[kiekis].studentoID;
        cout<<"Tel. numeris: ";
        cin>>naujasStudentas[kiekis].studentoTelNumeris;

    delete[] studentai;
    studentai = naujasStudentas;
    kiekis++;
    cout<<endl;
}

void rodytiStudentoDuomenis (studentoInfo* studentai, int size) {
    cout<<"Studentu duomenys:"<<endl;
    for (int i = 0; i < size; i++) {
        cout<< i+1 <<". "<<studentai[i].vardas<<" "<<studentai[i].pavarde<<
            " "<<studentai[i].studentoID<<" "<<studentai[i].studentoTelNumeris<<endl;
    }
}

