#include <iostream>
using namespace std;

int squareSum(int n) {
  if(n == 0) return 0;
  int digit = n % 10;
  return (digit * digit) + squareSum(n / 10);
}

bool isHappy(int n){
  if(n == 1) return true;
  if(n == 4) return false;
  return isHappy(squareSum(n));
}

int main(){
  int n;
  cout << "Enter Number: ";
  cin >> n;

  if(isHappy(n)){
    cout << n << " is Happy Number.";
  } else {
    cout << n << " is not a Happy Number.";
  }

  return 0;
}