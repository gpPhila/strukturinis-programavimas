#include <iostream>
#include <string>
using namespace std;


int main()
{
    /*
    string fruit ="apple";
    if (fruit == "banana") {
        cout<<"you have a banana"<<endl;
    } else if (fruit == "apple") {
        cout<<"you have an apple"<<endl;
    } else {
        cout<<"you have something else"<<endl;
    }
    */

    int number;
    while (true) {
        cout<<"Enter a number (1-2)"<<endl;
        cin >> number;
        switch (number) {
            case "1":
                cout<<"You have a banana"<<endl;
                break;
            case "2":
                cout<<"You have an apple"<<endl;
                break;
            default:
                cout<<"You have something else"<<endl;
                break;

        }
    }


    /*
    int num1;
    cout<<"Enter a positive integer:"<<endl;
    cin >> num1;

    int result=0;

    for(int i = 1; i <= num1; i++) {
        result = result + i; //result += i

        cout<<"Iteration:"<<i<<" sum: "<<result<<endl;
    }

    */
    return 0;
}
