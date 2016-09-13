#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

int main(void) {
  cout << "Starting training program..." << endl;
 
  cout << "Reading training data..." << endl; 
  vector <vector <double> > data;
  ifstream train("../../data/trainingdata.txt");

  cout << "Hello" << endl;

  if (train.is_open()) {
    while (!train.eof()) {
      string s;
      getline(train, s); //read number
      istringstream ss(s);
      vector <double> record;

      while (ss) {
        string s;
        if (!getline(ss, s, ',')) break;
        double num = stod(s.c_str()); //convert to integer
        record.push_back(num);
      }

      data.push_back(record);
    }
  }
 
  cout << data.size() << endl; 
  for (int i = 0; i < data.size()-1; i++) {
    cout << data[i][0] << ", " << data[i][1] << endl;
  }
  
  return 0;  
}
