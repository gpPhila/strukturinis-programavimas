#include <iostream>
using namespace std;

bool balsisArNe (char raide); //prototipas

int main()
{
    int operacija=0;
    char raide;
    int rezultatas1;

    while (operacija !=5) {
        cout<<"Pasirinkite operacija, ivesdami operacijos numeri: "<<endl;
        cout<<"1. Pasitikrinti ar ivesta raide yra balsis."<<endl;
        cout<<"2. "<<endl;
        cout<<"3. "<<endl;
        cout<<"4. "<<endl;
        cout<<"5. Iseiti is programos."<<endl;
        cin>>operacija;

    switch (operacija) {
        case 1:
            cout<<"Iveskite raide: "<<endl;
            cin>>raide;

            cout<<balsisArNe(raide)<<endl;
            rezultatas1 == (balsisArNe(raide)) ? "Raide yra balsis." : "Raide nera balsis.";
            
            break;
        case 2:
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
