#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string cellIndexString(int x, int y);

int main(){

  ofstream outputFile;
  int x_dim = 50;
  int y_dim = 50;

  // define cell values to be written
  string initDefaultBorder = " = 10 1 0.6 0.07 22 6 1 0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.17 0.17 0.17 0.17 0.17 0.17 0.17 0.17 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01";
  string infectedCell = " = 100 1 0.6 0.07 22 6 0.7 0.3 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.17 0.17 0.17 0.17 0.17 0.17 0.17 0.17 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01 0.01";

  outputFile.open ("var_gen_output.var");

  // draw a border around the entire cell space with lower mobility and connectivity
  for(int k = 0; k < x_dim; k++){
    outputFile << cellIndexString(k,0) + initDefaultBorder << endl;
  }
  for(int k = 1; k < y_dim-1; k++){
    outputFile << cellIndexString(x_dim-1,k) + initDefaultBorder << endl;
  }
  for(int k = 0; k < x_dim; k++){
    outputFile << cellIndexString(k,y_dim-1) + initDefaultBorder << endl;
  }
  for(int k = 1; k < y_dim-1; k++){
    outputFile << cellIndexString(0,k) + initDefaultBorder << endl;
  }

  // draw a border diving the cell space into two
  for(int k = 1; k < x_dim-1; k++){
    outputFile << cellIndexString(k,24) + initDefaultBorder << endl;
  }
  for(int k = 1; k < x_dim-1; k++){
    outputFile << cellIndexString(k,25) + initDefaultBorder << endl;
  }

  // insert infected cells where desired
  outputFile << cellIndexString(25,26) + infectedCell << endl;

  outputFile.close();
  return 0;
}

// create a string of a cell's index given its coordinates x y = "(x,y)"
string cellIndexString(int x, int y){
  string s = "(";
  string sx = to_string(x);
  string sy = to_string(y);
  s.append(sx);
  s.append(",");
  s.append(sy);
  s.append(")");
  return s;
}
