//let's figure this out!
#include <iostream>
#include <vector>

using namespace std;



vector<vector<double>> matrix_init();
void size_init(int& n, int& m);
void matrix_print(vector<vector<double>> matrix);

void add(vector<vector<double>> A, vector<vector<double>> B);
void sub(vector<vector<double>> A, vector<vector<double>> B);
void multiply(vector<vector<double>> A, vector<vector<double>> B);



int main(){
  vector<vector<double>> A = {{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
  vector<vector<double>> B = {{1},{2},{3}};
  //vector<vector<double>> matrix;
  //matrix = matrix_init();
  //matrix_print(matrix);
//  add(A,B);
//  sub(A,B);
  multiply(A,B);

}

//Initialization of Matricies
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
    cout << "|";
    for( int j = 0; j < matrix[i].size(); j++){
      cout << matrix[i][j] << " ";
    }
    cout << "|" << endl;
  }
  cout << endl;
}

//Matrix + Vector Operations
void add(vector<vector<double>> A, vector<vector<double>> B){

  if((A.size() != B.size()) || (A[0].size() != B[0].size())){
    cout << "Addition of a " << A.size() << " x " << A[0].size() << " matrix and a "
         << B.size() << " x " << B[0].size() << " matrix is not supported" << endl;
  }else{
    vector<vector<double>> result;

    for(int i = 0; i < A.size(); i++){
      vector<double> temp_vec;
      double temp_add;
      for(int j = 0; j < A[i].size(); j++){
        temp_add = A[i][j] + B[i][j];
        temp_vec.push_back(temp_add);
      }
      result.push_back(temp_vec);
    }//adding function
    matrix_print(result);
  }//else

}
void sub(vector<vector<double>> A, vector<vector<double>> B){

  if((A.size() != B.size()) || (A[0].size() != B[0].size())){
    cout << "Subtraction of a " << A.size() << " x " << A[0].size() << " matrix and a "
         << B.size() << " x " << B[0].size() << " matrix is not supported" << endl;
  }else{
    vector<vector<double>> result;

    for(int i = 0; i < A.size(); i++){
      vector<double> temp_vec;
      double temp_sub;
      for(int j = 0; j < A[i].size(); j++){
        temp_sub = A[i][j] - B[i][j];
        temp_vec.push_back(temp_sub);
      }
      result.push_back(temp_vec);
    }//adding function
    matrix_print(result);
  }//else

}
void multiply(vector<vector<double>> A, vector<vector<double>> B){
  if( A[0].size() != B.size()){
    cout << "Multiplication of a " << A.size() << " x " << A[0].size() << " matrix and a "
         << B.size() << " x " << B[0].size() << " matrix is not supported" << endl;
  }else{
    vector<vector<double>> result;

    for(int i = 0; i < A.size(); i++){
      vector<double> temp;
      for(int j = 0; j < B[0].size(); j++){
        temp.push_back(0);
      }
      result.push_back(temp);
    }// Zero Fill

    for( int i = 0; i < A.size(); i++){
      for(int j = 0; j < B.size(); j++){
        for(int k = 0; k < A[0].size(); k++){
          result[i][j] += A[i][k] * B[k][j];
        }
      }
    }
    matrix_print(result);
  }//else
}
