#include <iostream>
using namespace std;

int addDigits(int num){
  if (num < 10) return num;

  int sum = 0;

  while(num > 0){
    sum += num % 10;
    num = num / 10;
  }

  return addDigits(sum);
}

int main() {
  int n;
  cout << "Enter number ";
  cin >> n;

  cout << "Output is " << addDigits(n);
  return 0;
}