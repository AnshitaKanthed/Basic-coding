// Factorial of a Number : Iterative and Recursive

//Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
   int X = 5;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}


//Recursive
// Time Complexity: O(N) 
// Space Complexity: O(N) 
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   // Base Condition.
   if(n == 0)
   {
       return 1;
   }
   // Problem broken down into 2 parts and then combined.
   return n * factorial(n-1);
}
int main(){
  // Here, let’s take the value of n to be 3.
  int n = 3;
  cout<<factorial(n)<<endl;
  return 0;
}