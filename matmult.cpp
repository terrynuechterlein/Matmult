#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <chrono>

using namespace std;

int main() {
    // declare variables for dimensions of arrays
    int a_row, a_col, b_row, b_col;

    // get user input for matrix A dimensions
    cout << "Enter number of rows for matrix A: ";
    cin >> a_row;
    cout << "Enter number of columns for matrix A: ";
    cin >> a_col;

    // get user input for matrix B dimensions
    cout << "Enter number of rows for matrix B: ";
    cin >> b_row;
    cout << "Enter number of columns for matrix B: ";
    cin >> b_col;

    // check if matrix multiplication is possible
    if (a_col != b_row) {
        cout << "Matrix multiplication is not possible with these dimensions." << endl;
        return 0;
    }

    // declare two 2D arrays and fill with random integer values
    int arr1[a_row][a_col], arr2[b_row][b_col];
    srand(time(0));
    for (int i = 0; i < a_row; i++) {
        for (int j = 0; j < a_col; j++) {
            arr1[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < b_row; i++) {
        for (int j = 0; j < b_col; j++) {
            arr2[i][j] = rand() % 10;
        }
    }

    // print the two arrays
    cout << "First array: " << endl;
    for (int i = 0; i < a_row; i++) {
        for (int j = 0; j < a_col; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Second array: " << endl;
    for (int i = 0; i < b_row; i++) {
        for (int j = 0; j < b_col; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // perform matrix multiplication
    int product[a_row][b_col];

    
    auto start = chrono::high_resolution_clock::now();   //time

    for (int i = 0; i < a_row; i++) {
        for (int j = 0; j < b_col; j++) {
            product[i][j] = 0;
            for (int k = 0; k < a_col; k++) {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    auto end = chrono::high_resolution_clock::now();        //time
    double time_taken = chrono::duration_cast<chrono::microseconds>(end - start).count();      //time

    cout << "Time taken: " << fixed << time_taken << setprecision(10) << " microseconds" << endl;

   
    // print the product of the two arrays
    cout << "Product of the two arrays: " << endl;
    for (int i = 0; i < a_row; i++) {
        for (int j = 0; j < b_col; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

}