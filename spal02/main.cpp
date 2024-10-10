#include <iostream>
using namespace std;
    /*
    //------------------argumento perdavimas reiksme---------------------------
void functionValueParameter(int num);

int main() {
    int number = 6;
    cout << "7 eilute pries kvieciant funkcija"
         << " funkicijai perduodama reiksme number = " << number << endl;
    functionValueParameter(number);
    cout << "11 eilute po funkcijos iskvietimo"
         << " funkcijoje buvo pakeista number reikšme ir si reikšme dabar yra " << number << endl;
    return 0;
}

void functionValueParameter(int num) {
    cout << "18 eilute funkcijoje pries pakeiciant number reikšme, kuri siuo metu yra: " << num << endl;
    num = 20;
    cout << "20 eilute funkcijoje, kai buvo pakeista number reikšme is 6 i " << num << endl;
}
*/

/*
    //--------------------argumento perdavimas adresu--------------------------
void functionValueParameter(int& num);

int main() {
    int number = 6;
    cout << "7 eilute pries kvieciant funkcija"
         << " funkicijai perduodama reikšme number = " << number << endl;
    functionValueParameter(number);
    cout << "11 eilute po funkcijos iskvietimo"
         << " funkcijoje buvo pakeista number reikšme ir si reikšme dabar yra " << number << endl;
    return 0;
}

void functionValueParameter(int& num) {
    cout << "18 eilute funkcijoje pries pakeiciant number reikšme, kuri siuo metu yra: " << num << endl;
    num = 20;
    cout << "20 eilute funkcijoje, kai buvo pakeista number reikšme is 6 i " << num << endl;
}
*/

//------------------teorines paskaitos darbas--------------------------------

void functionOne(int num1, int& num2, char letter);
void functionTwo(int& num1, int num2, char& letter);
int main() {
    int number1, number2;
    char ch;

    number1 = 10;
    number2 = 15;
    ch = 'A';

    cout <<"Viduje main: number1 = "<<number1<<", number2 = "<<number2<<" ir ch = "<<ch<<endl;
    functionOne(number1, number2, ch);
    cout <<"Viduje main po pirmos funkcijos iskvietimo: number1 = "<<number1<<", number2 = "<<number2<<" ir ch = "<<ch<<endl;
    functionTwo(number1, number2, ch);
    cout <<"Viduje main po antros funkcijos iskvietimo: number1 = "<<number1<<", number2 = "<<number2<<" ir ch = "<<ch<<endl;
    cout <<"number1 adresas "<<&number1<<endl;
    return 0;
}

void functionOne(int num1, int& num2, char letter) {
    int num3;

    num3 = num1;
    num1++;
    num2 = num2 * 2;
    letter = 'B';
}

void functionTwo(int& num1, int num2, char& letter) {

    num1++;
    num2 = num2 * 2;
    letter = 'C';
    cout <<"num1 adresas "<<&num1<<endl;
}