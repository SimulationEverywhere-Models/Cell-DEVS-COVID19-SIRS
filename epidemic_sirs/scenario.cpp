#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char * argv[]){

  ifstream maFile;
  ofstream tempFile;
  string line;

  if(argc != 2){
    cout << "scenario.cpp - error in inserting sceario var in .ma";
    return 0;
  }

  const char *ma = "sirs_zhong.ma";
  tempFile.open("temp.ma");
  maFile.open(ma);

  int line_to_replace = 0;
  string searchStr = "initialvariablesvalue: ";
  string insertStr = searchStr + std::string(argv[1]);
  cout << insertStr << endl;

  if(maFile.is_open()){
    while(getline(maFile, line)){
      line_to_replace++;
      if(line.find(searchStr) != string::npos)
      {
        tempFile << insertStr << endl;
      }
      else{
        tempFile << line << endl;
      }
    }
  }

  else{
    cout << "Unable to edit .ma file, try manual edit" << endl;
    return 0;
  }

  // close and rename files
  tempFile.close();
  maFile.close();
  rename("temp.ma", ma);

  return 0;
}
