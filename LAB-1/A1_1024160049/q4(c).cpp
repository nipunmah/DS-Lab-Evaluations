#include <iostream>
using namespace std;

int main() {
    int rows = 2, col = 3;
    int A[2][3], Transpose[3][2];
    cout << "Enter (2x3) elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            Transpose[j][i] = A[i][j];
        }
    }
    cout << "Transpose :\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < rows; j++) {
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}