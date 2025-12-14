#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <random>

using namespace std;


// В бинарном восславлении возвышая голоса,
// Адепты Бога-Машины железною решимостью пробуждают дремлющий дух.
// Да будет знание наше подобно светочу во тьме,
// А враги наши-да сгорят в огне его.


int protectionFromWrongInput () {
    int a;
    while ( (!(cin >> a) || (cin.peek() != '\n'))) {

        cin.clear();
        while (cin.get() != '\n');
        cout << "incorent input, try real number"<< endl;
    }
    return a;
}



int thingThatDoMainTaskGodHowIhateThis ( int *arr, int vertical, int horizantal) {
    int count = 0;
    for (int j = 0; j < horizantal; ++j) {
        bool allDistinct = true;

        for (int i = 0; i < vertical - 1; ++i) {
            for (int k = i + 1; k < vertical; ++k) {

                int index1 = i * horizantal + j;
                int index2 = k * horizantal + j;
                if (arr[index1] == arr[index2]) {
                    allDistinct = false;
                    break;
                }
            }
            if (!allDistinct) break;
        }
        if (allDistinct) {
            count++;
        }
    }

    return count;

}




void vivod (int *tabliza, int vertical, int horisontal, int manual) {
    if (manual == 1) {
        for (int truePlace = 0; truePlace < vertical * horisontal;) {
            for (int fakeHorizontal =0 ; fakeHorizontal < horisontal; fakeHorizontal++) {
                for (int fakeVertical = 0 ; fakeVertical < vertical; fakeVertical++) {
                    cout << "enter number for " <<fakeVertical<< " and " << fakeHorizontal << endl;
                    tabliza[truePlace] = protectionFromWrongInput();
                    truePlace++;

                }
            }

        }
    } else {
        for (int i = 0; i < vertical * horisontal; i++) {
            // ------------- magic generator ------------
            random_device rd ;
            mt19937 gen(rd());
            uniform_int_distribution<> dist (-12, 12);
            // -----------------------------
            tabliza[i] = dist(gen);
        }
    }

        for (int i = 0 ; i < vertical * horisontal;) {
            for (int i1 = 0; i1 < horisontal; i1++) {
                cout << setw(3)<< tabliza[i] << " "; i++;
            }
            cout<< endl;
        }

    cout << "that is orginal tabliza" << endl;
    cout<< thingThatDoMainTaskGodHowIhateThis( tabliza, vertical, horisontal) << " iqnue stolbov";



}




int main () {
    int vertical, horisontal;
    bool t = true;
    cout << "enter how many vertical lines, no more than 30"<< endl;
    while (t) {
        vertical = protectionFromWrongInput();
        if (vertical <= 30) {
            t = false;
        } else {
            cout<< "wrong number" << endl;
        }
    }

    cout << "enter how many horisontal lines, no more than 30"<< endl;
    t = true;
    while (t) {
        horisontal = protectionFromWrongInput();
        if (horisontal <= 30) {
            t = false;
        } else {
            cout<< "wrong number" << endl;
        }
    }
    int manual;
    cout<< "For manual input please press 1. For random press any other number" << endl;
    manual = protectionFromWrongInput();
    int  arr[vertical * horisontal];

    vivod(arr, vertical, horisontal, manual);



    return 0;
}






/*

int main () {
    int vertical = 3;
    int horisontal = vertical;
    cout <<endl;
    // this is debug main
    // main main is upper
    int  arr[vertical * horisontal];
    vivod (arr, vertical ,horisontal , 23);
    for (int i = 0; i < vertical * horisontal; ) {
        for (int i1 = 0; i1 < vertical; i1++) {
            cout << arr[i]<< ' ';
            i++;
        }
        cout << endl;

    }
    cout << thingThatDoMainTaskGodHowIhateThis(arr, vertical ,horisontal);
    return 0;
}
*/