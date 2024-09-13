#include<iostream>
using namespace std;
int main() {
int c;// declare the variables
cout << "Make choice :\n";
cout << "1- Test whether a given number is odd or even\n";
cout << "2 - Test whether a given number is divisible by another number\n";
cout << "Choice: ";
cin >> c;//Prompt the user for the choice
if (c == 1) {//test if number is odd or even
  int n;
  cout << "Enter a number: ";
  cin >> n;//Prompt the user for a number
if (n % 2 == 0)
  cout << n << " is an even number\n";
else
  cout << n << " is an odd number\n";
}
else if (c == 2) {//test if a number is divisible by another number
  int m, n;
  cout << "Enter first number: ";
  cin >> m;//Prompt the user for a number
  cout << "Enter second number: ";
  cin >> n;//Prompt the user for a number
  if (m%n == 0)
    cout << n << " divides " << m << endl;
  else
    cout << n << " doesn't divide " << m << endl;
}
else
  cout << "Input Error!Try again later\n";  
system("pause");
return 0;
}
