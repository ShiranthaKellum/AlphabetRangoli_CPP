#include <iostream>
using namespace std;

void alphabetRangoli (int n) {
    for (int i = 0; i < n; i++) {                                       // traverse row upper part of the pattern
        for (int j = 0; j < ((n-1) - i); j++) {
            cout << "--";                                               // initial spaces
            
        }
        if (i != 0) {
            for (int j = 0; j < i; j++) {                               // left side to the middle column
                int asciiLeftTop = (97 + (n-1) - j);                    // alphabets
                char alphaLeftTop = asciiLeftTop;
                cout << alphaLeftTop << "-";

            }
        }
        int asciiMiddileTop = (97 + (n-1) - i);                         // middle column
        char alphaMiddleTop = asciiMiddileTop;
        cout << alphaMiddleTop;

        if (i != 0) {
            for (int j = 0; j < i; j++) {                               // right side to the middle column
                int asciiTopRight = 97 + (n-1) - i + (j+1);             // alphabets
                char alphaTopRight = asciiTopRight;
                cout << "-" << alphaTopRight;

            }
        }
        for (int j = 0; j < ((n-1) - i); j++) {                         // final spaces
            cout << "--";
            
        }
        cout << endl;

    }
    for (int i = n-2; i > -1; i--) {                                    // lower part of the pattern
        for (int j = 0; j < ((n-1) - i); j++) {                         
            cout << "--";                                               // initial spaces
            
        }
        if (i != 0) {
            for (int j = 0; j < i; j++) {                               // left side to the middle column
                int asciiLeftBottom = 97 + (n-1) - j;                   // alphabets
                char alphaLeftBottom = asciiLeftBottom;
                cout << alphaLeftBottom << "-";

            } 
        }
        int asciiMiddleBottom = 97 + (n-1) - i;                         // middle column
        char alphaMiddleBottom = asciiMiddleBottom;
        cout << alphaMiddleBottom;

        if (i != 0) {
            for (int j = 0; j < i; j++) {                               // right side to the middle column
                int asciiRightBottom = 97 + ((n-1) - i) + (j+1);        // alphabets
                char alphaRightBottom = asciiRightBottom;
                cout << "-" << alphaRightBottom;

            }
        }
        for (int j = 0; j < ((n-1) - i); j++) {
            cout << "--";                                               // final spaces
            
        }
        cout << endl;

    }
}

int main () {
    int size;
    cin >> size;
    alphabetRangoli (size);

}
