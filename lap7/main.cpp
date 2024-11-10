#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;
const char ABECELE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int main()
{
    char tekstas[50];
    char rezultatas [50];
    char uzsifruotasTekstas[50];
    char desifruotasTekstas[50];
    int poslinkis, tekstoIlgis, rezultatoIndeksas, k=0, l=0;

    ifstream duomenuFailas; //the object duomenuFailas will be used to read data from a file
    ifstream desifravimoFailas; //read from ANOTHER file
    ofstream rezultatuFailas; //the object will WRITE data to a file
    //none of the files are open yet, they are declared as objects that can interact with files

    duomenuFailas.open("duomenys.txt");
    duomenuFailas >> tekstas; //extracts data from the object linked to a file and stores it into the variable tekstas
    duomenuFailas.close();

    tekstoIlgis = strlen(tekstas);
    poslinkis = 12;

    for (int i = 0; i <= tekstoIlgis; i++) {
        for (int j=0; j < sizeof(ABECELE); j++) {
            if (toupper(tekstas[i]) == ABECELE[j]) { //toupper converts a lowercase letter to uppercase
                rezultatoIndeksas = (j + poslinkis) % sizeof(ABECELE);
                rezultatas[k] = ABECELE[rezultatoIndeksas];
                k++;
            }
        }
    }
    cout<<endl;
    cout<<rezultatas;


    return 0;
}
