//let's figure this out!
#include <iostream>
#include <vector>

using namespace std;

/* Stuff To do
    Matrix initialization
    Matrix Add/sub - Add check
    Print Matrix
*/

vector<vector<double>> matrix_init();
void size_init(int& n, int& m);
void matrix_print(vector<vector<double>> matrix);

int main(){
  vector<vector<double>> matrix;
  matrix = matrix_init();
  matrix_print(matrix);

}

vector<vector<double>> matrix_init(){
  int n, m;// Initializes the size of the Matrix
  vector<vector<double>> matrix;
  cout << "Initializing a n x m size matrix" << endl;
  size_init(n, m);
  cout << "Now initializing a " << n << " x " << m << " size matrix" << endl;

  for( int i = 0; i < n; i++){//FIlls the Matrix
    vector<double> row;
    for( int j = 0; j < m; j++){
      cout << " Enter position " << i + 1 << " x " << j + 1 << ": ";
      int null;
      cin >> null;
      row.push_back(null);
    }
    matrix.push_back(row);
  }//Matrix FIlls
  return matrix;
}
void size_init( int& n, int& m){
  cout << "Please enter the value n: ";
  cin >> n;
  cout << "Please enter the value m: ";
  cin >> m;
}
void matrix_print(vector<vector<double>> matrix){
  for( int i = 0; i < matrix.size(); i++){
    for( int j = 0; j < matrix[i].size(); j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}
