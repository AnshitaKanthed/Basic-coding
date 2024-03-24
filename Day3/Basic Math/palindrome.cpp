#include <iostream>
using namespace std;
int reverse(int X) {
   int Y = 0;
   while (X > 0) {
      int digit = X % 10;
      Y = Y * 10 + digit;
      X = X / 10;
   }
   return Y;
}
int main() {
   int X;
   cin >> X;
   int dummy = X;
   int Y = reverse(X);
   if (dummy == Y) {
      cout << "Palindrome Number" << endl;
   } else {
      cout << "Not Palindrome Number" << endl;
   }
   return 0;
}