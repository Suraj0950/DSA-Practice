#include <iostream>
using namespace std;

bool isPerfect(int n){
  int sum = 0;

  for (int i = 1; i < n; i++){
    if(n % i == 0){
      sum += i;
    }
  }

  return sum == n;
}

int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;

  if(isPerfect(n)){
    cout << "This is perfect number.";
  } else {
    cout << "This is not perfect number.";
  }

  return 0;
}