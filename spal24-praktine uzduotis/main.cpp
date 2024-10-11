#include <iostream>
using namespace std;

bool balsisArNe (char raide); //prototipas
int didBendrasDaliklis (int skaicius1, int skaicius2); //prototipas
void zaidimas (); //prototipas

int main()
{
    int operacija=0;
    char raide;
    string rezultatas1;
    int skaicius1, skaicius2;

    while (operacija !=5) {
        cout<<"Pasirinkite operacija, ivesdami operacijos numeri: "<<endl;
        cout<<"1. Pasitikrinti ar ivesta raide yra balsis."<<endl;
        cout<<"2. Rasti didziausia bendra dalikli taip dvieju skaitmenu."<<endl;
        cout<<"3. Zaidimas: atspekite attsitiktini skaiciu."<<endl;
        cout<<"4. "<<endl;
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
            break;
        case 4:
            break;
        case 5:
            cout<<"Jus isejote is programos."<<endl;
            break;
        default:
            cout<<""<<endl;
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

void zaidimas () {

    
}