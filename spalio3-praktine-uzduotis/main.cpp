#include <iostream>

using namespace std;

//Valiutu kursai
double svarasBendras = 0.8593;
double svarasPirkti = 0.8450;
double svarasParduoti = 0.9060;
double dolerisBendras = 1.0713;
double dolerisPirkti = 1.0547;
double dolerisParduoti = 1.1309;
double rupijasBendras = 88.8260;
double rupijasPirkti = 85.2614;
double rupijasParduoti = 92.8334;

void valiutuPalyginimas (int operacija = 0) {
    double kiekisPrad;
    double kiekisGal;
    cout<<"Pasirinkite valiutos palyginimo (kurso tikrinimo) opcija:"<<endl;
    cout<<"1. EUR to GBP (Didziosios Britanijos svaras)"<<endl;
    cout<<"2. EUR to USD (Jungtiniu Amerikos Valstiju doleris)"<<endl;
    cout<<"3. EUR to INR (Indijos rupijas)"<<endl;
    cout<<"4. GBP (Didziosios Britanijos svaras) to EUR"<<endl;
    cout<<"5. USD (Jungtiniu Amerikos Valstiju doleris) to EUR"<<endl;
    cout<<"6. INR (Indijos rupijas) to EUR"<<endl;
    cin>>operacija;
    cout<<"Iveskite valiutos kieki, kuri norite palyginti: "<<endl;
    cin>>kiekisPrad;

    if (operacija == 1) {
        kiekisGal = kiekisPrad * svarasBendras;
        cout<<kiekisPrad<<" EUR (euru) = "<<kiekisGal<<" GBP (Didziosios Britanijos svaru)"<<endl;
    } else if (operacija == 2) {
        kiekisGal = kiekisPrad * dolerisBendras;
        cout<<kiekisPrad<<" EUR (euru) = "<<kiekisGal<<" USD (Jungtiniu Amerikos Valstiju doleriu)"<<endl;
    } else if (operacija == 3) {
        kiekisGal = kiekisPrad * rupijasBendras;
        cout<<kiekisPrad<<" EUR (euru) = "<<kiekisGal<<" INR (Indijos rupiju)"<<endl;
    } else if (operacija == 4) {
        kiekisGal = kiekisPrad / svarasBendras;
        cout<<kiekisPrad<<" GBP (Didziosios Britanijos svaru) = "<<kiekisGal<<" EUR (euru)"<<endl;
    } else if (operacija == 5) {
        kiekisGal = kiekisPrad / dolerisBendras;
        cout<<kiekisPrad<<" USD (Jungtiniu Amerikos Valstiju doleriu) = "<<kiekisGal<<" EUR (euru)"<<endl;
    } else if (operacija == 6) {
        kiekisGal = kiekisPrad / rupijasBendras;
        cout<<kiekisPrad<<" INR (Indijos rupiju) = "<<kiekisGal<<" EUR (euru)"<<endl;
    } else {
        cout<<"Ivyko klaida, bandykite dar karta."<<endl;
    }
}

void valiutuPirkimas (int operacija = 0) {
    double kiekisPrad;
    double kiekisGal;
    cout<<"Pasirinkite valiutos konvertavimo (pirkimo) opcija:"<<endl;
    cout<<"1. EUR to GBP (Didziosios Britanijos svaras)"<<endl;
    cout<<"2. EUR to USD (Jungtiniu Amerikos Valstiju doleris)"<<endl;
    cout<<"3. EUR to INR (Indijos rupijas)"<<endl;
    cout<<"4. GBP (Didziosios Britanijos svaras) to EUR"<<endl;
    cout<<"5. USD (Jungtiniu Amerikos Valstiju doleris) to EUR"<<endl;
    cout<<"6. INR (Indijos rupijas) to EUR"<<endl;
    cin>>operacija;
    cout<<"Iveskite valiutos kieki, kuri norite konvertuoti: "<<endl;
    cin>>kiekisPrad;
}

int main() {
    int operacija = 0;

    while (operacija !=4) {
        cout<<"Pasirinkite operacija, ivesdami operacijos numeri:"<<endl;
        cout<<"1. Valiutu palyginimas."<<endl;
        cout<<"2. Valiutos isigijimas."<<endl;
        cout<<"3. Valiutos pardavimas."<<endl;
        cout<<"4. Iseiti."<<endl;
        cin>>operacija;

        switch (operacija) {
            case 1:
                valiutuPalyginimas(operacija);
            break;
            case 4:
                cout<<"Jus isejote is programos."<<endl;
            default:
            cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;
        }

    }
    return 0;
}
