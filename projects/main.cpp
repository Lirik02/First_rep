#include <iostream>
#include <vector>

using namespace std;

int main() {
  int row_number1;
  cin >> row_number1;
  int column_number1;
  cin >> column_number1;
  vector <vector <int>> matrix1 (row_number1, vector <int> (column_number1));
  for (int i = 0; i < row_number1; i++) {
    for (int j = 0; j < column_number1; j++) {
      cin >> matrix1[i][j];
    }
  }

  int row_number2;
  cin >> row_number2;
  int column_number2;
  cin >> column_number2;
  vector <vector <int>> matrix2(row_number2, vector <int> (column_number2));
  for (int i = 0; i < row_number2; i++) {
    for (int j = 0; j < column_number2; j++) {
      cin >> matrix2[i][j];
    }
  }

  if ((row_number1 > row_number2) && (column_number1 < column_number2)) {
    int temp;
    temp = row_number1;
    row_number1 = row_number2;
    row_number2 = temp;
    temp = column_number1;
    column_number1 = column_number2;
    column_number2 = temp;
  }

  int row_number3;
  int column_number3;
  int number_of_factors;
  if (row_number1 == column_number2) {
    row_number3 = row_number2;
    column_number3 = column_number1;
    number_of_factors = row_number1;
  } else if (row_number2 == column_number1) {
    row_number3 = row_number1;
    column_number3 = column_number2;
    number_of_factors = row_number2;
  } else {
    cout << "impossible";
  }
  



  return 0;
}
