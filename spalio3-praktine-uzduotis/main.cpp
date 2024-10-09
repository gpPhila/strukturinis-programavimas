#include <iostream>
#include <iomanip>

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

void valiutuPalyginimas () {
    int operacija = 0;
    double kiekisPrad;
    double kiekisGal;
    while (operacija < 1 || operacija > 6) {
        cout<<"Pasirinkite valiutos palyginimo (kurso tikrinimo) opcija:"<<endl;
        cout<<"1. EUR to GBP (Didziosios Britanijos svaras)"<<endl;
        cout<<"2. EUR to USD (Jungtiniu Amerikos Valstiju doleris)"<<endl;
        cout<<"3. EUR to INR (Indijos rupijas)"<<endl;
        cout<<"4. GBP (Didziosios Britanijos svaras) to EUR"<<endl;
        cout<<"5. USD (Jungtiniu Amerikos Valstiju doleris) to EUR"<<endl;
        cout<<"6. INR (Indijos rupijas) to EUR"<<endl;
        cin>>operacija;
        if (operacija < 1 || operacija > 6) {
            cout<<"Tokios opcijos nera, bandykite dar karta."<<endl;
        }
    }
        cout<<"Iveskite valiutos kieki, kuri norite palyginti: "<<endl;
        cin>>kiekisPrad;

    switch (operacija) {
        case 1:
            kiekisGal = kiekisPrad * svarasBendras;
        cout<<kiekisPrad<<" EUR (euru) = "<<fixed <<setprecision(2)<<kiekisGal<<" GBP (Didziosios Britanijos svaru)"<<endl;
        break;
        case 2:
            kiekisGal = kiekisPrad * dolerisBendras;
        cout<<kiekisPrad<<" EUR (euru) = "<<fixed <<setprecision(2)<<kiekisGal<<" USD (Jungtiniu Amerikos Valstiju doleriu)"<<endl;
        break;
        case 3:
            kiekisGal = kiekisPrad * rupijasBendras;
        cout<<kiekisPrad<<" EUR (euru) = "<<fixed <<setprecision(2)<<kiekisGal<<" INR (Indijos rupiju)"<<endl;
        break;
        case 4:
            kiekisGal = kiekisPrad / svarasBendras;
        cout<<kiekisPrad<<" GBP (Didziosios Britanijos svaru) = "<<fixed <<setprecision(2)<<kiekisGal<<" EUR (euru)"<<endl;
        break;
        case 5:
            kiekisGal = kiekisPrad / dolerisBendras;
        cout<<kiekisPrad<<" USD (Jungtiniu Amerikos Valstiju doleriu) = "<<fixed <<setprecision(2)<<kiekisGal<<" EUR (euru)"<<endl;
        break;
        case 6:
            kiekisGal = kiekisPrad / rupijasBendras;
        cout<<kiekisPrad<<" INR (Indijos rupiju) = "<<fixed <<setprecision(2)<<kiekisGal<<" EUR (euru)"<<endl;
        break;
        default:
            cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;
    }
}
//ar kalbant apie pirkimus reikia palikti tik 3 opcijas kur bus perkami gbp usd ir inr (ty vartotojas negali pirkti euru ar gali)?

void valiutuPirkimas () {
    int operacija = 0;
    double kiekisPrad;
    double kiekisGal;
    while (operacija < 1 || operacija > 6) {
        cout<<"Pasirinkite valiutos konvertavimo (pirkimo) opcija:"<<endl;
        cout<<"1. EUR to GBP (Didziosios Britanijos svaras)"<<endl;
        cout<<"2. EUR to USD (Jungtiniu Amerikos Valstiju doleris)"<<endl;
        cout<<"3. EUR to INR (Indijos rupijas)"<<endl;
        cout<<"4. GBP (Didziosios Britanijos svaras) to EUR"<<endl;
        cout<<"5. USD (Jungtiniu Amerikos Valstiju doleris) to EUR"<<endl;
        cout<<"6. INR (Indijos rupijas) to EUR"<<endl;
        cin>>operacija;
        if (operacija < 1 || operacija > 6) {
            cout<<"Tokios opcijos nera, bandykite dar karta.";
        }
    }
    cout<<"Iveskite valiutos kieki, kuri norite konvertuoti: "<<endl;
    cin>>kiekisPrad;

    switch (operacija) {
        case 1:
            kiekisGal = kiekisPrad * svarasPirkti;
        cout<<"Jus nupirkote "<<fixed <<setprecision(2)<<kiekisGal<<" GBP (Didziosios Britanijos svaru.)"<<endl;
        break;
        case 2:
            kiekisGal = kiekisPrad * dolerisPirkti;
        cout<<"Jus nupirkote "<<fixed <<setprecision(2)<<kiekisGal<<" USD (Jungtiniu Amerikos Valstiju doleriu.)"<<endl;
        break;
        case 3:
            kiekisGal = kiekisPrad * rupijasPirkti;
        cout<<"Jus nupirkote "<<fixed <<setprecision(2)<<kiekisGal<<" INR (Indijos rupiju.)"<<endl;
        break;
        case 4:
            kiekisGal = kiekisPrad / svarasPirkti;
        cout<<"Jus nupirkote "<<fixed <<setprecision(2)<<kiekisGal<<" euru."<<endl;
        break;
        case 5:
            kiekisGal = kiekisPrad / dolerisPirkti;
        cout<<"Jus nupirkote "<<fixed <<setprecision(2)<<kiekisGal<<" euru."<<endl;
        break;
        case 6:
            kiekisGal = kiekisPrad / rupijasPirkti;
        cout<<"Jus nupirkote "<<fixed <<setprecision(2)<<kiekisGal<<" euru."<<endl;
        break;
        default:
            cout<<"Tokios operacijos nera, bandykite dar karta.";
    }
}
//ar kalbant apie pardavimus reikia palikti tik 3 opcijas kur bus parduodami gbp usd ir inr (ty vartotojas gauna eur)?
void valiutuPardavimas () {
    int operacija = 0;
    double kiekisPrad;
    double kiekisGal;
    while (operacija < 1 || operacija > 6) {
        cout<<"Pasirinkite valiutos pardavimo opcija:"<<endl;
        cout<<"1. EUR to GBP (Didziosios Britanijos svaras)"<<endl;
        cout<<"2. EUR to USD (Jungtiniu Amerikos Valstiju doleris)"<<endl;
        cout<<"3. EUR to INR (Indijos rupijas)"<<endl;
        cout<<"4. GBP (Didziosios Britanijos svaras) to EUR"<<endl;
        cout<<"5. USD (Jungtiniu Amerikos Valstiju doleris) to EUR"<<endl;
        cout<<"6. INR (Indijos rupijas) to EUR"<<endl;
        cin>>operacija;
        if (operacija < 1 || operacija > 6) {
            cout<<"Tokios opcijos nera, bandykite dar karta.";
        }
    }
    cout<<"Iveskite valiutos kieki, kuri norite parduoti: "<<endl;
    cin>>kiekisPrad;

    switch (operacija) {
        case 1:
            kiekisGal = kiekisPrad * svarasParduoti;
        cout<<"Jus pardavete "<<kiekisPrad<<" EUR (euru) uz "<<fixed <<setprecision(2)<<kiekisGal<<" GBP (Didziosios Britanijos svaru.)"<<endl;
        break;
        case 2:
            kiekisGal = kiekisPrad * dolerisParduoti;
        cout<<"Jus pardavete "<<kiekisPrad<<" EUR (euru) uz "<<fixed <<setprecision(2)<<kiekisGal<<" USD (Jungtiniu Amerikos Valstiju doleriu.)"<<endl;
        break;
        case 3:
            kiekisGal = kiekisPrad * rupijasParduoti;
        cout<<"Jus pardavete "<<kiekisPrad<<" EUR (euru) uz "<<fixed <<setprecision(2)<<kiekisGal<<" INR (Indijos rupiju.)"<<endl;
        break;
        case 4:
            kiekisGal = kiekisPrad / svarasParduoti;
        cout<<"Jus pardavete "<<kiekisPrad<<" GBP (Didziosios Britanijos svaru) uz "<<fixed <<setprecision(2)<<kiekisGal<<" euru."<<endl;
        break;
        case 5:
            kiekisGal = kiekisPrad / dolerisParduoti;
        cout<<"Jus pardavete "<<kiekisPrad<<" USD (Jungtiniu Amerikos Valstiju doleriu) uz "<<fixed <<setprecision(2)<<kiekisGal<<" euru."<<endl;
        break;
        case 6:
            kiekisGal = kiekisPrad / rupijasParduoti;
        cout<<"Jus pardavete "<<kiekisPrad<<" INR (Indijos rupiju) uz "<<fixed <<setprecision(2)<<kiekisGal<<" euru."<<endl;
        break;
        default:
            cout<<"Tokios operacijos nera, bandykite dar karta.";
    }

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
                valiutuPalyginimas();
            break;
            case 2:
                valiutuPirkimas();
            break;
            case 3:
                valiutuPardavimas();
            break;
            case 4:
                cout<<"Jus isejote is programos."<<endl;
            break;
            default:
            cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;
        }

    }
    return 0;
}
