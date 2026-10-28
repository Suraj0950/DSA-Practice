#include <iostream>
using namespace std;

int armstrong(int n){
  if(n == 0) return 0;
  int digit = n % 10;
  return (digit * digit * digit) + armstrong(n / 10);
}

int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;

  if(armstrong(n) == n){
    cout << n << " is a Armstrong number";
  } else {
    cout << n << " is not a Armstrong number";
  }

  return 0;
}