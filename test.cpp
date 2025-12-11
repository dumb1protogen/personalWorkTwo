#include <iostream>
#include <vector>
using namespace std;

/*
void run( int *arr, int size) {
    for (int i = 0 ; i < size; i++) {
        arr[i] = i;
    }

}

int main() {
    int our[5];
    run(our, 5);
    for (int i = 0; i < 5; i++) {
        cout<< our[i];
    }
}


*/

int main ( ) {
    int a;
    bool t = true;
    while (t) {
        if (cin >> a) {
            cout<< "yea";
            t = false;
        } else {
            cout<< "no";
            a = NULL;
        }
    }
}


