#include <iostream>
using namespace std;

int main() {
    int rows = 3, col= 3;
    int A[3][3];
    cout << "Enter (3x3) elements: \n" ;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < col; j++) {
            rowSum += A[i][j];
        }
        cout << "Row sum " << i + 1 << ": " << rowSum << endl;
    }
    for (int j = 0; j < col; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += A[i][j];
        }
        cout << "Column Sum " << j + 1 << ": " << colSum << endl;
    }
    return 0;
}