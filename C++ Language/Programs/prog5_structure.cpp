#include <iostream>
#include <string>
using namespace std;

struct employee {
  string name;
  string des;
  int exp;
};

int main() {
	//1st data
	  employee e1;
	  e1.name = "Urvashi";
	  e1.des = "Developer";
	  e1.exp=6;

	//2nd data 
	  employee e2;
	  e2.name = "Pooja";
	  e2.des = "S/w tester";
	  e2.exp=4;
 
  	// Print the structure members
	  cout << e1.name << " " << e1.des << " " << e1.exp << "\n";
	  cout << e2.name << " " << e2.des << " " << e2.exp << "\n";
 
  return 0;
}

