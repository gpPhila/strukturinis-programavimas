#include <iostream>

using namespace std;

void valiutuPalyginimas (int operacija1, int kiekis) {
    cout<<"Pasirinkite su kokia valiuta norite palyginti kainas (iveskite skaiciu):"<<endl;
    cout<<"1. GBP (Didziosios Britanijos svaras)"<<endl;
    cout<<"2. USD (Jungtiniu Amerikos Valstiju doleris)"<<endl;
    cout<<"3. INR (Indijos rupijas)"<<endl;
    cin>>operacija1;
    cout<<"Iveskite valiutos kieki, kuri norite palyginti: "<<endl;
    cin>>kiekis;
}

int main() {
    int operacija;

    cout<<"Pasirinkite operacija, ivesdami operacijos numeri:"<<endl;
    cout<<"1. Valiutu palyginimas."<<endl;
    cout<<"2. Valiutos isigijimas."<<endl;
    cout<<"3. Valiutos pardavimas."<<endl;
    cin>>operacija;


    return 0;
}
