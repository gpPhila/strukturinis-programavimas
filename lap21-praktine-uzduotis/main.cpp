#include <iostream>

using namespace std;

const char ABECELE[32] = {'A', 'Ą', 'B', 'C', 'Č', 'D', 'E', 'Ę', 'Ė', 'F', 'G', 'H',
                          'I', 'Į', 'Y', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S',
                          'Š', 'T', 'U', 'Ų', 'Ū', 'V', 'Z', 'Ž'};
void sifravimas1();

int main()
{
    int pasirinkimas;

    while (pasirinkimas != 3) {
        cout<<"1. Sifravimas naudojant ABECELE."<<endl;
        cout<<"2. Sifravimas naudojant ASCII koduote."<<endl;
        cout<<"3. Iseiti."<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1: cout<<"Pasirinkimas 1"<<endl;
            break;
            case 2: cout<<"Pasirinkimas 2"<<endl;
            break;
            case 3: cout<<"Jus isejote. Viso gero."<<endl;
            break;
            default: cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;

        }
    }

    return 0;
}

void sifravimas1() {



}