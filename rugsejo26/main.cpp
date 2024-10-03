#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;
/*
void getPlayerInfo () { //prototypo nereikia nes funkcija aprasyta pries main dali
    string name = "Domantas";
    string surname = "Sabonis";
    string team = "Sacramento Kings";

    cout <<"Zaidejas "<<name<<" "<<surname<<" zaidzia "<<team<<endl;

}

int getRandomNumber(); //funkcijos getRandomNumber prototipas
double getAverage(double, double); //fukcijos prototipas, svarbu nurodyti funkcijos kintamuju tipus

int main() {

    getPlayerInfo();

    cout<<"Atsitiktinis skaicius: "<< getRandomNumber()<<endl;
    cout<<"Skaiciu vidurkis: "<<getAverage(45, 125.8)<<endl;

    return 0;
}

int getRandomNumber() {
    int randomNum = rand() % 100;
    return randomNum;
}

double getAverage(double num1, double num2) {
    return (num1 + num2)/2;
}
*/
//------------------------------Pirmas pratimas------------------------------
/*
void studentInfo() {
    string vardas = "Ksenija";
    string pavarde = "Perechrest";
    cout<<"Studento pilnas vardas yra "<<vardas<<" "<<pavarde<<"."<<endl;
    cout<<"Pasirinkau programu sistemu studiju programa nes man patiko programos destami dalykai."<<endl;

}
int main() {
    studentInfo();
    studentInfo();


    return 0;
}
*/

//------------------------------Antras pratimas-----------------------------------
/*
void tekstas() {
    cout<<"Vilniaus kolegija"<<endl;
    cout<<"Elektronikos ir informatikos fakultetas"<<endl;

}

int main() {
    tekstas();

    return 0;
}
*/
//-------------------------------Trecias pratimas--------------------------------
/*
int randomNum() {
    srand(time(nullptr));
    int randomNum = rand() % 100;
    return randomNum;
}

int main() {

    for (int i=0; i < 10; i++) {
        cout<<"Random number: "<<randomNum()<<endl;
    }

 return 0;
}
*/
//---------------------Ketvirtas pratimas------------------------------------------
/*
int suma(int firstN, int secondN){
    return firstN + secondN;
}
int skirtumas(int firstN, int secondN){
    return firstN - secondN;
}
int sandauga(int firstN, int secondN){
    return firstN * secondN;
}
int dalmuo(int firstN, int secondN){
    return firstN / secondN;
}
int main() {
    int firstN, secondN;
    cout<<"Iveskite du skaicius: "<<endl;
    cin>> firstN >> secondN;

    suma(firstN, secondN);
    cout<<"Suma yra "<<suma(firstN, secondN)<<endl;

    skirtumas(firstN, secondN);
    cout<<"Skirtumas yra "<<skirtumas(firstN, secondN)<<endl;

    suma(firstN, secondN);
    cout<<"Sandauga yra "<<sandauga(firstN, secondN)<<endl;

    suma(firstN, secondN);
    cout<<"Dalmuo yra "<<dalmuo(firstN, secondN)<<endl;

return 0;
}
*/

//------------------------------Penktas pratimas--------------------------------------

void ats(int num1, int num2) {
    if (num1 > num2) {
        cout<<"Didesnis skaicius yra "<<num1<<endl;
    } else if (num2 > num1) {
        cout<<"Didesnis skaicius yra "<<num2<<endl;
    } else {
       cout<<"Skaiciai yra lygus"<<endl;
    }
}

int main() {
    ats(3, 4);
    ats(14, 6);
    ats(7, 7);

return 0;
}
