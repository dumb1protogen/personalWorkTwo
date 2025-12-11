#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <random>

using namespace std;

// todo: oguzok = placeholder for trobule, renemae is as "error" or something similar



void Vivod (int *tabliza, int vertical, int horisontal, int manual) {

for (int i = 0; i < vertical * horisontal; i++) {
    // ------------- magic generator ------------
    random_device rd ;
    mt19937 gen(rd());
    uniform_int_distribution<> dist (-12, 12);
    // -----------------------------
    tabliza[i] = dist(gen);
    }
}





int proverkaNaEblana() {
    int a;
    a = 0;
    cin >> a;
    if (a == 0) {
        a = 0;
        return 0;
    } else {
        return a;
    }
}

int main () {


    int * vertical = new int[1];
    int * horisontal = new int[1];
    bool t = true;
    cout << 'write';
    cin >> vertical[1];
while (t) {

}


    int manual, randomNumber;

    cout<< "For manual input please press 1. For random press any other number ";
    cin >> manual;
        if ( to_string(manual) == "0" ) {
            manual = 123;
            cout<< "OGUZOK!!!"<< endl;
            return 0;
        }
    //int mainTabliza [vertical * horisontal];
    //Vivod(mainTabliza,vertical, horisontal, manual);
    return 0;
}















/*
int main () {
    int arr[5];
    cout <<endl;
    // this is debug main
    // main main is upper
    Vivod (arr, 5 ,5 , 23);
    for (int i = 0; i < 25; ) {
        for (int i1 = 0; i1 < 5; i1++) {
            cout << arr[i]<< ' ';
            i++;
        }
        cout << endl;

    }
    return 0;
}
*/