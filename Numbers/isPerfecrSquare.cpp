#include <iostream>
using namespace std;

// VALID PERFECT SQUARE

bool isPerfectSquare(int n, int i){
  if(i * i > n) return false;

  if(i * i == n) return true;

  return isPerfectSquare(n, i+1);
}

int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;

  if(isPerfectSquare(n, 1)){
    cout << n << " is a perfect square.";
  } else {
    cout << n << " is not a perfect square.";
  }

  return 0;
}