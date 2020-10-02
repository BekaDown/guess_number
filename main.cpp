#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    cout << "Menu. Press 1 to start; Press 2 to leave" << endl;
    int e;
    int q = 1;
    int f = 2;
    cin >> e;
    if(e == q) {
     cout << "Choose the range" << endl;
     int d;
     cin >> d;
        srand(time(nullptr));
        int b;
        int a = rand() % d + 1;
        cout << "Guess the number between 1 and " << d << endl;
        while (a != b) {
            cin >> b;
            if (a == b) {
                cout << "You won!";
                break;
            } else if (b > a) {
                cout << "Do less" << endl;
            } else
                cout << "Do more" << endl;

        }
    } else if(e == f) {
        cout << "See you later!";
        return 0;
    } else
        cout << "Error";






    return 0;
}
