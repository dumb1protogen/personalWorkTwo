#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <random>

using namespace std;

// todo: oguzok = placeholder for trobule, renemae is as "error" or something similar

bool isValid(const string& s) {
    if (s.empty()) return false;
    char* end;
    errno = 0;
    long value = strtol(s.c_str(), &end, 10);
    if (*end != '\0') return false;
    if (errno == ERANGE) return false;
    if (value < numeric_limits<int>::min() ||
        value > numeric_limits<int>::max())
        return false;

    return true;
}

int Vivod (int vertical, int horisontal, int manual) {
    int a [vertical][horisontal], randomNumber;
    if (manual == 1) {
        for (int i = 0; i < vertical ; i++) {
            for (int i1 = 0; i1 < horisontal ; i1++) {
                cout<< "enter number for " << i << " " << i1 << endl;
                cin >> a[i] [i1];
            }
        }
    } else { // random
        for (int i = 0; i < vertical ; i++) {
            for (int i1 = 0; i1 < horisontal ; i1++) {
                // ------------- magic generator ------------
                random_device rd ;
                mt19937 gen(rd());
                uniform_int_distribution<> dist (-12, 12);
                // -----------------------------
                a[i][i1] = dist(gen);
            }
        }
    }

    for (int i = 0; i < vertical; i++) {
        for (int i1 = 0; i1 < horisontal; i1++) {
            cout << setw(5) << a[i][i1];
        }
        cout <<endl;
    }
    // int& tabliza[vertical][horisontal] = a; // i have no idea why it dont like it, but okay i guess :/
    // it work for now. hope this error just fake
    return 0;
}





int main () {
void a(int);
//void (&tabliza)(int) = a;
//cout<< isValid("g");


    int vertical, horisontal;
    cout<< "write down size of tabliza"<<endl;
    cin >> vertical;
        if ( to_string(vertical) == "0" ) {
            vertical = 123;
            cout<< "OGUZOK!!!"<< endl;
            return 0;
        }
    cout<< "write down size of horizontal"<<endl;
    cin >> horisontal;
    if ( to_string(vertical) == "0" ) {
        horisontal = 123;
        cout<< "OGUZOK!!!"<< endl;
        return 0;
    }

    int manual, randomNumber;

    cout<< "For manual input please press 1. For random press any other number ";
    cin >> manual;
        if ( to_string(manual) == "0" ) {
            manual = 123;
            cout<< "OGUZOK!!!"<< endl;
            return 0;
        }

    // int a[vertical] [horisontal];
    Vivod(vertical, horisontal, manual);
    return 0;
}















/*
int main () {

    cout <<endl;
    // this is debug main
    // main main is upper
    Vivod (2 , 2 , 2);
}
*/