#include<iostream>
using namespace std;
int main() {
  int n1, n2;// declare the variable
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Enter second number: ";
  cin >> n2;
  if (n1 == n2)
    cout << "Both numbers are equal\n";
  else if (n1 > n2) {
    cout << n2 << " is the lowest\n";
    cout << n1 << " is the highest\n";
  }
  else {
    cout << n1 << " is the lowest\n";
    cout << n2 << " is the highest\n";
  }
  system("pause");
  return 0;
}
