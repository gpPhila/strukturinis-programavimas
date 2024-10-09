#include <iostream>

using namespace std;
//----------------------------pirmas pratimas------------------------------

int suskaiciuotiPerimetra(int krastine);
void suskaiciuotiPlota(int krastine, int& plotas);

int main()
{
    int krastine=2, plotas;
    cout <<"Kvadrato perimetras = "<<suskaiciuotiPerimetra(krastine)<<endl;
    suskaiciuotiPlota(krastine,plotas);
    cout <<"Kvadrato plotas = "<<plotas<<endl;

    return 0;
}

int suskaiciuotiPerimetra(int krastine) {
    int perimetras=krastine*4;
    return perimetras;
}
void suskaiciuotiPlota(int krastine, int& plotas) {
    plotas=krastine*krastine;
}

//--------------------2 pratimas--------------------------
/*
double celsiusToFahrenheit(double tempCelcius);
void fahrenheitToCelcius(double tempFahrenheit, double& tempCelcius);

int main() {
    double farenheit, celsius, tempFahrenheit;
    farenheit = 50;
    celsius = 30;

    cout<<"Temperatura Farenheitu laispniais: "<<celsiusToFahrenheit(celsius)<<endl;
    fahrenheitToCelcius(farenheit, celsius);
    cout<<"Temperatura Celsijaus laipsniais: "<<celsius<<endl;

    return 0;
}

double celsiusToFahrenheit(double tempCelcius) {
    return (tempCelcius*9/5)+32;
}


void fahrenheitToCelcius(double tempFarenheit, double& tempCelcius) {
    tempCelcius = (tempFarenheit - 32) * 5 / 9;
}
*/