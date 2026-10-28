#include <iostream>
using namespace std;

void checkNumber(int n){
  if(n == 0){
    cout << "Number is Zero";
  } else if ( n > 0){
    cout << "Number is Positive";
    if(n % 2 == 0){
      cout << " and Even";
    } else {
      cout << " and Odd";
    }
  } else {
    cout << "Number is Negative";
    if(n % 2 == 0){
      cout << " and Even";
    } else {
      cout << " and Odd";
    }
  }
}

int main(){
  int n;
  cout << "Enter Number: ";
  cin >> n;
  checkNumber(n); 
  return 0;
}