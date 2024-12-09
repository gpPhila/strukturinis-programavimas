#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

void getData(menuItemType menuList[], int&size); //prot
void showMenu(menuItemType menuList[], int size); //prot
void printCheck(); //prot

int main()
{
    int size = 0;
    menuItemType menuList[10];
    getData(menuList, size);
    showMenu(menuList, size);
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

        cout<<menuList[i].menuItem<< " "<<menuList[i].menuPrice<<char(128)<<endl;
    }
}