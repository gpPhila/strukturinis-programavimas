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
    int uzsifruotoTekstoIlgis;

    ifstream duomenuFailas; //the object duomenuFailas will be used to read data from a file
    ifstream desifravimoFailas; //read from ANOTHER file
    ofstream rezultatuFailas; //the object will WRITE data to a file
    //none of the files are open yet, they are declared as objects that can interact with files

    duomenuFailas.open("duomenys.txt");
    duomenuFailas >> tekstas; //extracts data from the object linked to a file and stores it into the variable tekstas
    duomenuFailas.close();

    tekstoIlgis = strlen(tekstas);
    poslinkis = 12;

    for (int i = 0; i < tekstoIlgis; i++) {
        for (int j=0; j < sizeof(ABECELE); j++) {
            if (toupper(tekstas[i]) == ABECELE[j]) { //toupper converts a lowercase letter to uppercase
                rezultatoIndeksas = (j + poslinkis) % sizeof(ABECELE);
                // jeigu imame raide a:
                // 1 + 12 % 26 (skaiciuojame liekana) = 13
                // output = M
                // jeigu imame raide t:
                // 20 + 12 % 26 = 6 (Indeksas bus vienu skaiciu mazenis)
                // output = F
                rezultatas[k] = ABECELE[rezultatoIndeksas];
                k++;
            }
        }
    }
    cout<<endl;
    cout<<rezultatas;

    ///atvirkstini zingnis

    rezultatuFailas.open("rezultatas.txt");
    rezultatuFailas<<rezultatas;
    rezultatuFailas.close();

    desifravimoFailas.open("rezultatas.txt");
    desifravimoFailas>>uzsifruotasTekstas;
    desifravimoFailas.close();

    uzsifruotoTekstoIlgis = strlen(uzsifruotasTekstas);
    for(int i = 0; i < uzsifruotoTekstoIlgis; i++) {
      for(int j = 0; j < sizeof(ABECELE); j++) {
        if(toupper(uzsifruotasTekstas[i]) == ABECELE[j]) {
          rezultatoIndeksas = (j - poslinkis + sizeof(ABECELE)) % sizeof(ABECELE);
          desifruotasTekstas[l] = ABECELE[rezultatoIndeksas];
          l++;
        }
      }
    }

    cout<<endl;
    cout<<"Desifruotas tekstas: "<<desifruotasTekstas;


    return 0;
}