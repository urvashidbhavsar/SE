#include<iostream>
using namespace std;
int addition(int x, int y) {
  return x + y;
}

double addition(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = addition(8, 15);
  double myNum2 = addition(4.33, 61.26);
  cout << "Addition 1: " << myNum1 << "\n";
  cout << "Addition 2: " << myNum2;
  return 0;
}
