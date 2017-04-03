//
// Created by Chris Tilley on 13/03/2017.
//

#include <fstream>
#include <iostream>
#include "reader.h"


int main() {
  string fileName;
  cout << "Input the file location:";
  cin >> fileName;
  cout << txtFile(fileName);
  return 0;
}

