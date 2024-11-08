#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int eilutes=3;
    const int stulpeliai=3;
    int masyvas [eilutes][stulpeliai];
    int i = 0;

    //ivedimas 3x3 dydzio masyvo, ivedziame reiksmes i masyva

    cout<<"Iveskite 3iu eiluciu 3 stulpeliu masyvo elementus"<<endl;
    for (int i=0; i < eilutes; i++) {
        for (int j=0; j < stulpeliai; j++) {
            cout<<"Masyvo ["<<i+1<<"]["<<j+1<<"] elementas"<<endl;
            cin >> masyvas[i][j];
        }
    }
    //masyvo spausdinimas
    cout<<"Masyvo spausdinimas"<<endl;
    for (int i=0; i < eilutes; i++) {
        for (int j=0; j < stulpeliai; j++) {
            cout<<setw(3)<<masyvas [i][j]<<" ";
        }
        //kad kiekviena eilute butu is naujos
        cout << endl;
    }
    cout<<"Masyvo spausdinimas ir eulutes elementu suma"<<endl;
    for (int i=0; i < eilutes; i++) {
        int eilutesSuma = 0;
        for (int j=0; j < stulpeliai; j++) {
            cout<<setw(3)<<masyvas [i][j]<<" ";
            eilutesSuma += masyvas[i][j];
        }
        //kad kiekviena eilute butu is naujos
        cout<<setw(3)<<eilutesSuma;
        cout << endl;
    }
    cout<<"Masyvo spausdinimas ir stulpelio elementu suma"<<endl;
    for (int j=0; j<stulpeliai; j++) {
        int stulpelioSuma = 0;
        for (i=0; i<eilutes; i++) {
            cout<<setw(3)<<masyvas [i][j]<<" ";
            stulpelioSuma += masyvas[i][j];
        }
        cout << endl;
        cout<<setw(3)<<"Stulpelio elementu suma "<<stulpelioSuma<<" "<<endl;

    }
    return 0;
}
