
//question 1
// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[3][3] = {
//         {1, 5, 3},
//         {0, 5, 6},
//         {7, 3, 4}
//     };

//     int ROW = 3;
//     int COL = 3;
//     int sum = 0;

//     cout << "The matrix is:\n";
//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             cout << matrix[i][j] << " ";
//             sum += matrix[i][j]; // calculate sum while displaying
//         }
//         cout << endl;
//     }
//     cout << "\nSum of all elements in the matrix: " << sum << endl;
//     return 0;
// }




//question2 
// #include <iostream>
// using namespace std;
// int main() {

//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int ROW = 3;
//     int COL = 3;
//     int transpose[3][3];

//     cout << "Original Matrix:\n";
//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     cout << "\nTranspose of the matrix:\n";
//     for (int i = 0; i < COL; i++) {   
//         for (int j = 0; j < ROW; j++) { 
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }




//question 3
// #include <iostream>
// using namespace std;

// int main() {
//     // Predefined square matrix
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {2, 5, 6},
//         {3, 6, 9}
//     };

//     int ROW = 3;
//     int COL = 3;
//     bool isSymmetric = true;

//     // Check if matrix is square
//     if (ROW != COL) {
//         cout << "Matrix is not square, so it cannot be symmetric.\n";
//         return 0;
//     }
//     for (int i = 0; i < ROW; i++) {
//         for (int j = i + 1; j < COL; j++) { // only check upper triangle
//             if (matrix[i][j] != matrix[j][i]) {
//                 isSymmetric = false;
//                 break;
//             }
//         }
//         if (!isSymmetric) break;
//     }

//     cout << "The matrix is:\n";
//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     if (isSymmetric)
//         cout << "\nThe matrix is symmetric.\n";
//     else
//         cout << "\nThe matrix is not symmetric.\n";

//     return 0;
// }


//question 4
// #include <iostream>
// using namespace std;

// int main() {
//     // Define two matrices
//     int A[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     int B[3][2] = {
//         {7, 8},
//         {9, 10},
//         {11, 12}
//     };

//     int m = 2, n = 3, p = 2; // A is m x n, B is n x p
//     int C[2][2] = {0};       // Result matrix m x p initialized to 0

//     // Multiply matrices
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < p; j++) {
//             for (int k = 0; k < n; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // Display matrices
//     cout << "Matrix A:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << A[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\nMatrix B:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             cout << B[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Display result
//     cout << "\nResult of A x B:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < p; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//question 5
// #include <iostream>
// using namespace std;

// int main() {
//     // Predefined matrix
//     int matrix[3][3] = {
//         {3, 5, 1},
//         {7, 2, 8},
//         {4, 6, 0}
//     };

//     int ROW = 3;
//     int COL = 3;

//     // Display the matrix
//     cout << "The matrix is:\n";
//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Find largest element in each row
//     cout << "\nLargest element in each row:\n";
//     for (int i = 0; i < ROW; i++) {
//         int max = matrix[i][0]; // assume first element is max
//         for (int j = 1; j < COL; j++) {
//             if (matrix[i][j] > max) {
//                 max = matrix[i][j];
//             }
//         }
//         cout << "Row " << i + 1 << ": " << max << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // Predefined vector
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int n = vec.size();

//     // Display original vector
//     cout << "Original vector: ";
//     for (int i = 0; i < n; i++) {
//         cout << vec[i] << " ";
//     }
//     cout << endl;

//     // Reverse the vector manually
//     int start = 0, end = n - 1;
//     while (start < end) {
//         // swap elements at start and end
//         int temp = vec[start];
//         vec[start] = vec[end];
//         vec[end] = temp;

//         start++;
//         end--;
//     }

//     // Display reversed vector
//     cout << "Reversed vector: ";
//     for (int i = 0; i < n; i++) {
//         cout << vec[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
