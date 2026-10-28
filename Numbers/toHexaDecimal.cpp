#include <iostream>
using namespace std;

void toHexaDecimal(int n){
  // base case
  if(n == 0) return;

  toHexaDecimal(n / 16);

  int rem = n % 16;

  if(rem < 10){
    cout << rem;
  } else {
    cout << char('A' + (rem - 10));
  }

}

int main(){
  int n;
  cout << "Enter Number: ";
  cin >> n;
  cout << "HexaDeciml: ";

  if(n == 0){
    cout << 0;
  } else {
    toHexaDecimal(n);
  }

  return 0;
}