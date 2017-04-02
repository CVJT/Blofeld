//
// Created by Chris Tilley on 13/03/2017.
//


#include <fstream>
#include <iostream>
#include "reader.h"

using namespace std;

string txtFile (string fileLocation);

int main() {
  string fileName;
  cout << "Input the file location:";
  cin >> fileName;
  cout << txtFile(fileName);
  return 0;
}

string txtFile (string fileLocation) {
  string line;
  string output ="";
  ifstream myfile(fileLocation);
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      output = output + line +'\n';
    }
    myfile.close();
  } else {
    output = "Unable to open file";
  }
  return output;
}