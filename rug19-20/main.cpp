#include <iostream>
using namespace std;
#include <cmath>

int main() {
    //pirmas pratimas + antras pratimas
    /*
    int paz1, paz2, paz3;

    paz1 = 4;
    paz2 = 6;
    paz3 = 2;
    int average =(paz1 + paz2 + paz3)/3;

    if (average >=5) {
        cout<<"Vidurkis yra teigiamas."<<endl;
    }
    else {
        cout<<"Vidurkis yra neigiamas."<<endl;
    }
    */

    //trecias pratimas
    /*
    int egz;
    cout<<"Iveskite savo egzamino ivertinima: "<<endl;
    cin>>egz;

    if (egz==10) {
        cout<<"puiku"<<endl;
    } else if (egz==9) {
        cout<<"labai gerai"<<endl;
    } else if (egz>=7) {
        cout<<"gerai"<<endl;
    } else if (egz>=5) {
        cout<<"patenkinimai"<<endl;
    } else if (egz<5) {
        cout<<"egzaminas neislaikytas"<<endl;
    }
    */

    //ketvirta uzduotis

    /*
    int egz;
    cout<<"Iveskite savo egzamino ivertinima: "<<endl;
    cin>>egz;
    switch (egz) {
        case 10:
            cout<<"puiku"<<endl;
        break;
        case 9:
            cout<<"labai gerai"<<endl;
        break;
        case 8:
            cout<<"gerai"<<endl;
        break;
        case 7:
            cout<<"gerai"<<endl;
        break;
        case 6:
            cout<<"patenkinimai"<<endl;
        break;
        case 5:
            cout<<"patenkinimai"<<endl;
        break;
        case 4:
            cout<<"egzaminas neislaikytas"<<endl;
        break;

        default:
            cout<<"Error"<<endl;
    }

    */

    //penkta uzduotis
    /*
    int i;
    int sum = 0;
    cout <<"Nelyginiu skaiciu suma lygi: "<<endl;

    for ( i = 1; i <= 20; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    */

    //sesta uzduotis
    /*
    double ind = 1000;
    double pal = 0.05;
    int metai = 10;
    double sum = ind * pow((1 + pal), metai);

    cout << sum << endl;
    */

    //septynta uzduotis

    for (int i = 1; i <= 20; i++) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
    }

    //comment
    return 0;
}
