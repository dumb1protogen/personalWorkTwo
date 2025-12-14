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

int proverka ( int a) {
    while (!(cin >> a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Input error! Repeat please..."<< endl;
    }
    return a;
}
int main () {
    int g ;
    cin >> g;
    cout << proverka(g);
}

