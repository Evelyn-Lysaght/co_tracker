using namespace std;
#include <fstream>
#include <iostream>
#include <string>

int main() {

  // Create and open a text file
  fstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Hey ";
  
  // Read from the file
  string myText;
  getline(MyFile, myText);
  cout << myText;

  // Close the file
  MyFile.close();

  return 0;

}

