/*

This is an example for the CSV Parser

Compile commands:
g++ -o example example.cpp csvpr.cpp
g++ -c csvpr.cpp
g++ -c example.cpp
g++ example.o csvpr.o -o example

*/

#include "csvpr.hpp"

using namespace std;
int main()
{
  csvpr csv("example.txt");
  
  //getting values to row number and column number.
  string value = csv.get_value(3,4);
  
  //Getting a particular row in the file
  string line = csv.get_line(3);
  
  // getting number of fields in a row.
  int total_fields = csv.fields(csv.get_line(3));
  
  cout<<"3,4:"<<value<<endl;
  cout<<"Row 3: "<<line<<endl;
  cout<<"Total fields in 3:"<<total_fields<<endl;
}
