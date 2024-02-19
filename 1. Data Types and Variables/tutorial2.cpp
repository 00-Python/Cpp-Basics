#include <iostream>
#include <string> // Import  string
using namespace std;

int main() {
  // Data types
  // int 7, 6, 88, -343
  // float 7.0,  -6.3, 1.2
  // bool true, false
  // string "Anything"  ("") (Can be anything)
  // char 'x' '2' '&'   ('') (has to be 1 char)

  // string in not built in we must import it
  
  // Variables
  int age, day;
  float floatAge = 23.9;
  string name = "Joe";
  age = 23;
  day = 19;

  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old. \nToday is the "<< day << "th" << endl;
  cout << "This is a float: " << floatAge << endl;
}