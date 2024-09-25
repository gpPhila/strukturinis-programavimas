#include <iostream>
#include <string>
using namespace std;


int main() {

    /*
    // uzduotis 1
    cout<<"-----------1 uzduotis---------------"<<endl;

    string vardas = "Ksenija";
    string pavarde = "Perechrest";
    int amzius;
    amzius = 21;
    string grupe = "PI24";
    string kursas = "Strukturinis programavimas";
    string studijuPrograma = "Programu sistemos";

    cout<<"Studento vardas: "<<vardas<<endl;
    cout<<"Studento pavarde: "<<pavarde<<endl;
    cout<<"Studento amzius: "<<amzius<<endl;
    cout<<"Grupe: "<<grupe<<endl;
    cout<<"Kursas: "<<kursas<<endl;
    cout<<"Studiju programa : "<<studijuPrograma<<endl;
    */

    /*
    // uzduotis 2
    cout<<"-----------2 uzduotis---------------"<<endl;

    string kluboPav;
    string kluboIM;
    string kluboSav;
    string stadionas;
    string vietuSk;

    kluboPav = "Kauno Zalgiris";
    kluboIM = "1944";
    kluboSav = "Andrea Trinchieri";
    stadionas = "Zalgirio arena";
    vietuSk = "15415";


    cout<<"Klubo pavadinimas: "<<kluboPav<<endl;
    cout<<"Ikurimo metai: "<<kluboIM<<endl;
    cout<<"Savininkas: "<<kluboSav<<endl;
    cout<<"Arena: "<<stadionas<<endl;
    cout<<"Vietu skaicius: "<<vietuSk<<endl;
    cout<<"Zalgiris - skaniausias sumustinis!";
    */

    /*
    cout<<"----------3 uzduotis-----------"<<endl;

    string brend = "Toyota";
    string model;
    string pagMetai;
    string litrazas;
    string spalva;

    model ="Camry";
    pagMetai ="2020";
    litrazas = "3.5l";
    spalva ="metalo blizgesio";

    cout<<"Automobilis "<<brend<<" "<<model<<" yra pagamintas "<<pagMetai<<" metais. Jo motoras yra "<<litrazas<<" "<<
        "litrazo. Automobilis yra "<<spalva<<" spalvos."<<endl;

    */

    /*
    int a, b;
    double c;

    a = 13;
    b = 5;
    c = 17.5;

    cout<<a+b-c<<endl;
    cout<<15/2+c+0.5<<endl;
    cout<<a/static_cast<double>(b)+2*c<<endl;
    cout<<14%3+6.3+b/a+0.5<<endl;
    cout << static_cast<int>(c) % 5 + a-b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;
    */

    //comment
    /*
    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    cout<<"vid:"<<(a+b+c+d+e)/5<<endl;
    */

    int n=77, sum=0, m;

    m=n%10;
    n=n/10;
    sum=n+m;

    cout<<"sum="<<sum<<endl;
    //comment
    return 0;
}
