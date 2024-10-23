#include <iostream>
#include <cstdlib> //rand() ir srand()
#include <ctime> // time()
using namespace std;

bool balsisArNe (char raide); //prototipas
int didBendrasDaliklis (int skaicius1, int skaicius2); //prototipas
void zaidimas (); //prototipas
int randomNumber(); //prototipas
void fizzbuzz(int n); //prototipas

int main()
{
    int operacija=0;
    char raide;
    string rezultatas1;
    int skaicius1, skaicius2;
    int n;

    while (operacija !=5) {
        cout<<"Pasirinkite operacija, ivesdami operacijos numeri: "<<endl;
        cout<<"1. Pasitikrinti ar ivesta raide yra balsis."<<endl;
        cout<<"2. Rasti didziausia bendra dalikli taip dvieju skaitmenu."<<endl;
        cout<<"3. Zaidimas: atspekite attsitiktini skaiciu."<<endl;
        cout<<"4. Skaiciaus ivedimas."<<endl;
        cout<<"5. Iseiti is programos."<<endl;
        cin>>operacija;

    switch (operacija) {
        case 1:
            cout<<"Iveskite raide: "<<endl;
            cin>>raide;
            rezultatas1 = (balsisArNe(raide)) ? "Raide yra balsis." : "Raide nera balsis.";
            cout<<rezultatas1<<endl;
            break;
        case 2:
            cout<<"Iveskite du skaicius."<<endl;
            cin>>skaicius1>>skaicius2;
            didBendrasDaliklis(skaicius1, skaicius2);
            cout<<"Maziausias bendras daliklis tarp "<<skaicius1<<" ir "<<skaicius2<<" yra "<<
                didBendrasDaliklis(skaicius1, skaicius2)<<"."<<endl;
            break;
        case 3:
            zaidimas();
            break;
        case 4:
            fizzbuzz(n);
            break;
        case 5:
            cout<<"Jus isejote is programos."<<endl;
            break;
        default:
            cout<<"Tokio pasirinkimo nera."<<endl;
    }
  }

    return 0;
}

bool balsisArNe(char raide) {

    if (raide == 'a' || raide == 'e' || raide == 'i' || raide == 'u' || raide == 'y'
        || raide == 'o') {
        return true;
    } else {
        return false;
    }
}

int didBendrasDaliklis(int skaicius1, int skaicius2) {

    while (skaicius2 !=0 ) {
        int skaicius3 = skaicius1 % skaicius2;
        skaicius1 = skaicius2;
        skaicius2 = skaicius3;
    }
    return skaicius1;
}
//(liekana sk3=) 4 = 36 % 16
//sk1 = 16
//sk2 = 4
//liekana 0 = 16 % 4
// sk1 = 4, sk2 = 0 => returns sk1 which is 4

int randomNumber() {
    return rand() % 100 + 1;
}
void zaidimas () {
    srand(time(0));
    int randomSkaicius = randomNumber();
    int vartotojoSkaicius;
    int pasirinkimas;

    //tikrinimui ar veikia else
    cout<<randomSkaicius<<endl;

    while (pasirinkimas != 2) {
        cout<<"Zaidziame?"<<endl;
        cout<<"1. Zaisti."<<endl;
        cout<<"2. Iseiti."<<endl;
        cin>>pasirinkimas;
        switch (pasirinkimas) {
            case 1:
            cout<<"Pabandykite atspeti skaiciu tarp 1 iki 100."<<endl;
            cout<<"Iveskite skaiciu: "<<endl;
            while (vartotojoSkaicius != randomSkaicius) {
                cin>>vartotojoSkaicius;
                if (vartotojoSkaicius > randomSkaicius) {
                    cout<<"Jusu skaicius yra didesnis."<<endl;
                    cout<<"Pabandykite ivesti skaiciu dar karta: "<<endl;
                } else if (vartotojoSkaicius < randomSkaicius) {
                    cout<<"Jusu skaicius yra mazesnis."<<endl;
                    cout<<"Pabandykite ivesti skaiciu dar karta: "<<endl;
                } else {
                    cout<<vartotojoSkaicius<<" yra teisingas atsakymas!"<<endl;
                }
            }
            break;
            case 2:
                cout<<"Sekmes!"<<endl;
            break;
            default:
                cout<<"Tokio pasirinkimo nera."<<endl;
        }
    }
}

void fizzbuzz(int n) {
    cout<<"Iveskite teigiama sveikaji skaiciu: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        cout<<i;
        if (i % 3 == 0 && i % 5 == 0) {
            cout << " FizzBuzz"; //dalijasi is 3 ir 5
        } else if (i % 3 == 0) {
            cout << " Fizz"; //dalijasi is 3
        } else if (i % 5 == 0) {
            cout << " Buzz"; //dalijasi is 5
        }
        cout << endl;
    }
}
