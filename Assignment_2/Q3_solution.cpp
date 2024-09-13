#include<iostream>
#include<time.h>
using namespace std;
int main() {
  int r, n, min = 1, max = 5;
  srand(time(NULL));
  r = (rand() % (max - min + 1)) + min;
  cout << "Enter a guess: ";
  cin >> n;
  if (n == r)
    cout << "Congratulations! You win\n";
  else if (n < r)
    cout << "Try again! " << n << " < " << r << endl;
  else
    cout << "Try again! " << n << " > " << r << endl;
  system("pause");
  return 0;
}
