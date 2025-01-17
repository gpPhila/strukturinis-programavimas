#include <iostream>
#include <fstream>
using namespace std;


int main() {
    string tekstas;
    ifstream failas1;
    failas1.open("perechrest.txt");
    failas1>>tekstas;
    failas1.close();

    ofstream failas2;
    failas2.open("ksenija.txt");
    failas2<<tekstas;
    failas2.close();
    return 0;
}

