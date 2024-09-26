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
int randomNum() {
    srand(time(nullptr));
    int randomNum = rand() % 100;
    return randomNum;
}

int main() {
    cout<<"Random number: "<<randomNum()<<endl;
 return 0;
}


