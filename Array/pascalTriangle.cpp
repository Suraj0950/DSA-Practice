#include <iostream>
using namespace std;

void pascalTriangle(int n){
  for (int i = 0; i < n; i++){
    // left space
    for (int space = 0; space < n - i - 1; space++){
      cout << " ";
    }

      // Pascal value
      int value = 1;
    for (int j = 0; j <= i; j++){
      cout << value << " ";
      value = value * (i - j) / (j + 1);
    }
    cout << endl;
  }
}

int main(){
  int n;
  cout << "Enter value: ";
  cin >> n;

  pascalTriangle(n);

  return 0;
}