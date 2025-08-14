#include <iostream>
using namespace std;
int main() {
    int rowsA = 2, colsA = 3;
    int rowsB = 3, colsB = 2;
    int A[2][3], B[3][2], C[2][2] = {0};
    cout << "Enter (2x3) elements: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter (3x2) elements: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "After Multiplication: \n" ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}