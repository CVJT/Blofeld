//
// Created by Chris Tilley on 01/04/2017.
//

#include "reader.h"


string txtFile(string fileLocation) {
  string line;
  string output = "";
  ifstream myfile(fileLocation);
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      output = output + line + '\n';
    }
    myfile.close();
  } else {
    output = "Unable to open file";
  }
  return output;
}
