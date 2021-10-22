#include <iostream>
using namespace std;

void alphabetRangoli (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ((n-1) - i); j++) {
            cout << "--";
            
        }
        if (i != 0) {
            for (int j = 0; j < i; j++) {
                int asciiLeftTop = (97 + (n-1) - j);
                char alphaLeftTop = asciiLeftTop;
                cout << alphaLeftTop << "-";

            }
        }
        int asciiMiddileTop = (97 + (n-1) - i);
        char alphaMiddleTop = asciiMiddileTop;
        cout << alphaMiddleTop;

        if (i != 0) {
            for (int j = 0; j < i; j++) {
                int asciiTopRight = 97 + (n-1) - i + (j+1);
                char alphaTopRight = asciiTopRight;
                cout << "-" << alphaTopRight;

            }
        }
        for (int j = 0; j < ((n-1) - i); j++) {
            cout << "--";
            
        }
        cout << endl;

    }
    for (int i = n-2; i > -1; i--) {
        for (int j = 0; j < ((n-1) - i); j++) {
            cout << "--";
            
        }
        if (i != 0) {
            for (int j = 0; j < i; j++) {
                int asciiLeftBottom = 97 + (n-1) - j;
                char alphaLeftBottom = asciiLeftBottom;
                cout << alphaLeftBottom << "-";

            } 
        }
        int asciiMiddleBottom = 97 + (n-1) - i;
        char alphaMiddleBottom = asciiMiddleBottom;
        cout << alphaMiddleBottom;

        if (i != 0) {
            for (int j = 0; j < i; j++) {
                int asciiRightBottom = 97 + ((n-1) - i) + (j+1);
                char alphaRightBottom = asciiRightBottom;
                cout << "-" << alphaRightBottom;

            }
        }
        for (int j = 0; j < ((n-1) - i); j++) {
            cout << "--";
            
        }
        cout << endl;

    }
}

int main () {
    int size;
    cin >> size;
    alphabetRangoli (size);

}