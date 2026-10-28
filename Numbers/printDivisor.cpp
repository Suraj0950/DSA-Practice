#include <iostream>
using namespace std;

// ALL DIVISOR OF NATURAL NUMBER
void printDivisor(int n, int i){
  if(i > n) return;

  if ( n % i == 0){
    cout << i << " ";
  }

  printDivisor(n, i + 1);
}

int main(){
  int n;
  cout << "Enter Number: ";
  cin >> n;
  cout << "Divisor of " << n << " is : ";
  printDivisor(n, 1);
  return 0;
}
