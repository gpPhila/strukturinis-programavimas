#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

void getData(menuItemType menuList[], int&size); //prototype
void showMenu(menuItemType menuList[], int size); //prot
void printCheck(menuItemType menuList[], int dish[][], int maxNumberOfOrders); //prot

int main()
{
    int size = 0;
    menuItemType menuList[10];
    getData(menuList, size);
    showMenu(menuList, size);

    int maxNumberOfOrders = 10;
    int maxNumberOfPortions = 10;
    int dish[maxNumberOfOrders][10] = {0};
    while (true) {
        int dishNumber, dishQuantity;
        cout<<"Iveskite pasirinkto(u) patiekalo numeri(us) ir kieki (atskirkite tarpu): "<<endl;
        cout<<"Noredami baigti uzsakyma, iveskite '0'."<<endl;

        cin>>dishNumber;
        if (dishNumber == 0) break; //uzsakymas bus pabaigtas
        cin>>dishQuantity;

        if (dishNumber > 0 && dishQuantity > 0) {
            dish[dishNumber - 1][0] += dishQuantity;
        } else {
            cout << "Neteisingas patiekalo numeris arba kiekis. Bandykite dar karta." << endl;
        }
    }
    cout<<endl;
    /*
    for (int i = 0; i < maxNumberOfOrders; i++) {
        if (dish[i][0] > 0) {
            cout <<dish[i][0]<< " " <<menuList[i].menuItem << " " <<menuList[i].menuPrice <<char(128)<< endl;
        }
    }
    */
    printCheck(menuList, dish, maxNumberOfOrders);
}

void getData(menuItemType menuList[], int& size) {
    //strukturos pavadinimas + masyvas kuris susideda is dvieju parametru: menuItem ir menuPrice

    menuList[0]={"Kiausiniene", 1.45};
    menuList[1]={"Kiaulienos sonine su keptu kiausiniu", 2.45};
    size = 2;
    //kiek size, tiek turime "patiekalu" t.y. eiluciu musu meniu
}

void showMenu(menuItemType menuList[], int size) {
    SetConsoleOutputCP(1252);
    cout<<"Meniu:"<<endl;
    for(int i = 0; i < size; i++) {
            cout<<i + 1 <<". "<<menuList[i].menuItem<< " "<<menuList[i].menuPrice<<char(128)<<endl;
    }
    cout<<endl;
}

void printCheck(menuItemType menuList[], int dish[][], int maxNumberOfOrders) {
    double total = 0; // Variable to store the total cost
    //TRY TO USE JUST ONE VARIABLE INSTEAD OF TWO FOR CALCULATING THE TOTAL patikrinti

    cout << "Check: " << endl;
    for (int i = 0; i < maxNumberOfOrders; i++) {
        if (dish[i][0] > 0) {
            cout <<dish[i][0]<< " " <<menuList[i].menuItem << " " <<menuList[i].menuPrice <<char(128)<< endl;
            double dishTotal = dish[i][0] * menuList[i].menuPrice;
            total += dishTotal;
        }
    }
    double tax = total * 0.21;
    double totalWithTax = total + tax;

    cout << "Suma be PVM: " << total << char(128) << endl;
    cout << "21% PVM: " <<  tax << char(128) << endl;
    cout << "Galutine suma: " << totalWithTax << char(128) << endl;
}