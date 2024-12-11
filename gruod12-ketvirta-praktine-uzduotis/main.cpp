#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

struct dishOrder {
    int dishNumber;
    int dishQuantity;
};

void getData(menuItemType menuList[], int&size); //prototype
void showMenu(menuItemType menuList[], int size); //prot
void printCheck(menuItemType menuList[], dishOrder dish[], int orderCount); //prot

int main() {

    menuItemType menuList[10];
    int size = 0;
    dishOrder dish[10];
    int orderCount = 0;

    getData(menuList, size);
    showMenu(menuList, size);

    while (true) {
        int dishNumber, dishQuantity;
        cout<<"Iveskite pasirinkto(u) patiekalo numeri(us) ir kieki (atskirkite tarpu): "<<endl;
        cout<<"Noredami baigti uzsakyma, iveskite '0'."<<endl;

        cin>>dishNumber;
        if (dishNumber == 0) break; //uzsakymas bus pabaigtas
        cin>>dishQuantity;

        if (dishNumber > 0 && dishQuantity > 0) {
            dish[orderCount] = {dishNumber - 1, dishQuantity};
            orderCount++;
        } else {
            cout << "Neteisingas patiekalo numeris arba kiekis. Bandykite dar karta." << endl;
        }
    }
    cout<<endl;

    printCheck(menuList, dish, orderCount);
}

void getData(menuItemType menuList[], int& size) {
    //strukturos pavadinimas + masyvas kuris susideda is dvieju parametru: menuItem ir menuPrice

    menuList[0]={"Kiausiniene", 1.45};
    menuList[1]={"Kiaulienos sonine su keptu kiausiniu", 2.45};
    menuList[2]={"Keksiukas su vysnia", 0.99};
    menuList[3]={"Prancuziskas skrebutis", 1.99};
    menuList[4]={"Vaisiu salotos", 2.49};
    menuList[5]={"Pusryciu dribsniai", 0.69};
    menuList[6]={"Kava", 0.50};
    menuList[7]={"Arbata", 0.75};
    size = 8;
    //kiek size, tiek turime "patiekalu" t.y. eiluciu musu meniu
}

void showMenu(menuItemType menuList[], int size) {
    SetConsoleOutputCP(1252);
    cout<<"Meniu:"<<endl;
    for(int i = 0; i < size; i++) {
            cout<< i + 1 <<". "<<left<<setw(40)<<menuList[i].menuItem<<right<<
            " "<<menuList[i].menuPrice<<char(128)<<endl;
    }
    cout<<endl;
}

void printCheck(menuItemType menuList[], dishOrder dish[], int orderCount) {
    double total = 0;

    ofstream orderFile;
    orderFile.open("order.txt");

    orderFile << "Uzsakymas: " << endl;
    orderFile << endl;

    for (int i = 0; i < orderCount; i++) {
            int dishNumber = dish[i].dishNumber;
            int dishQuantity = dish[i].dishQuantity;
            orderFile << dishQuantity << " x " <<left<<setw(40)<< menuList[dishNumber].menuItem << " "<<right
                 << menuList[dishNumber].menuPrice << char(128) << endl;
            total += dishQuantity * menuList[dishNumber].menuPrice;
    }
    double tax = total * 0.21;
    double totalWithTax = total + tax;

    orderFile << fixed << setprecision(2);
    orderFile << endl;
    orderFile <<"Suma be PVM: " << total<< char(128) << endl;
    orderFile <<"21% PVM: " <<  tax<< char(128) << endl;
    orderFile << endl;
    orderFile <<"Galutine suma: " << totalWithTax << char(128) << endl;

    orderFile.close();
    ifstream orderFileRead;
    orderFileRead.open("order.txt");

    string line;
    while (getline(orderFileRead, line)) {
        cout << line << endl; // isveda kiekviena eilute
    }

    orderFileRead.close();
}