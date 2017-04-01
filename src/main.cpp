//
// Created by Chris Tilley on 13/03/2017.
//


#include <fstream>
#include <iostream>

using namespace std;

void readFile (string fileLocation) {
  string line;
  ifstream myfile(fileLocation);
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      cout << line << '\n';
    }
    myfile.close();
  } else cout << "Unable to open file";
}

int main() {
  string fileName;

  cout << "Input the file location:";
  cin >> fileName;

 readFile(fileName);

  //readFile("/Users/Tilps007/Development/HillSheepStudios/Blofeld/TestFiles/Test1.txt");

  return 0;
}

