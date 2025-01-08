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
void redaguotiStudentoDuomenis(studentoInfo* studentai);
void studentoSalinimas (studentoInfo*& studentai, int& kiekis);

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

                case 3: if (kiekis == 0) {
                    cout << "Nera studentu duomenu." << endl;
                } else {
                    redaguotiStudentoDuomenis(studentai);
                }
                break;

                case 4: if (kiekis == 0) {
                    cout << "Nera studentu duomenu." << endl;
                } else {
                    studentoSalinimas (studentai, kiekis);
                }
                break;
                
                case 5:
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

void redaguotiStudentoDuomenis(studentoInfo* studentai) {
    cout<<"Iveskite studento ID: ";
    int studentoNum;
    cin>>studentoNum;

    int studentoID = studentoNum - 1;

    cout<<"Redaguojamo studento duomenys:"<<endl;
    cout<< studentoNum <<". "<<studentai[studentoID].vardas<<" "<<studentai[studentoID].pavarde<<
            " "<<studentai[studentoID].studentoID<<" "<<studentai[studentoID].studentoTelNumeris<<endl;

    int pasirinkimas;
    while (pasirinkimas != 5) {
        cout<<"Pasirinkite, ka norite redaguoti:"<<endl;
        cout<<"1. Studento vardas."<<endl;
        cout<<"2. Studento pavarde."<<endl;
        cout<<"3. Studento ID."<<endl;
        cout<<"4. Studento tel. numeris."<<endl;
        cout<<"5. Atsaukti."<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1: cout<<"Iveskite studento varda: ";
            cin>>studentai[studentoID].vardas;
            break;

            case 2: cout<<"Iveskite studento pavarde: ";
            cin>>studentai[studentoID].pavarde;
            break;

            case 3: cout<<"Iveskite studento ID: ";
            cin>>studentai[studentoID].studentoID;
            break;

            case 4: cout<<"Iveskite studento tel. numeri: ";
            cin>>studentai[studentoID].studentoTelNumeris;
            break;

            case 5: cout<<"Veiksmas atsauktas.";
            break;

            default: cout<<"Tokio pasirinkimo nera."<<endl;
            cout<<endl;
        }
        cout<<endl;
    }
}

void studentoSalinimas (studentoInfo*& studentai, int& kiekis) {
    cout<<"Iveskite studento ID, kurio duomenys bus pasalinti: ";
    int studentoNum;
    cin>>studentoNum;

    int studentoID = studentoNum - 1;
    cout<<"Studento duomenys:"<<endl;
    cout<< studentoNum <<". "<<studentai[studentoID].vardas<<" "<<studentai[studentoID].pavarde<<
            " "<<studentai[studentoID].studentoID<<" "<<studentai[studentoID].studentoTelNumeris<<endl;

    cout<<"Ar tikrai norite pasalinti studento duomenys? (taip/ne)"<<endl;
    string sprendimas;
    cin>>sprendimas;

    if (sprendimas == "taip") {
        cout<<"Studento duomenys buvo pasalinti."<<endl;

        studentoInfo* naujiStudentai = new studentoInfo[kiekis - 1];
        for (int i = 0, j = 0; i < kiekis; i++) {
            if (i != studentoID) {
                naujiStudentai[j++] = studentai[i];
            }
        }

        delete[] studentai;
        studentai = naujiStudentai;
        kiekis--;

    } else if (sprendimas == "ne") {
        cout<<"Jus pasirinkote nesalinti studento duomenu."<<endl;
    } else {
        cout<<"Tokio pasirinkimo nera."<<endl;
    }
    cout<<endl;
}

