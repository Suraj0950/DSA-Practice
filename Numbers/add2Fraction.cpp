#include <iostream>
using namespace std;

// Addition of two fraction

int add2Fration(int num1, int num2, int deno1, int deno2){
  int numerator = (num1 * deno2) + (num2 * deno1);
  int denominator = (deno1 * deno2);

  cout << "Sum: " << numerator << "/" << denominator;
}

int main(){
  int num1, num2, deno1, deno2;
  cout << "Enter numerator and denominator of 1st fraction: ";
  cin >> num1 >> deno1;

  cout << "Enter numerator and denominator of 2nd fraction: ";
  cin >> num2 >> deno2;

  add2Fration(num1,num2, deno1, deno2);

  return 0;
}