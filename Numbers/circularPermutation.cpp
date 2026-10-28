#include <iostream>
using namespace std;

int factorial(int n){
  if(n == 0 || n == 1) return 1;
  return n * factorial(n - 1);
}

int circularPermutation(int n){
  return factorial(n - 1);
}

int main(){
  int n;
  cout << "Enter number of Persons: ";
  cin >> n;
  cout << "Number of Arrangement: " << circularPermutation(n);
  return 0;
}