#include <iostream>
using namespace std;

string replaceZeroWithFive(string n){
  for (int i = 0; i < n.length(); i++){
    if(n[i] == '0'){
      n[i] = '5';
    }
  }
  return n;
}

// input without space
int main(){
  string n;
  cout << "Enter Number: ";
  cin >> n;
  cout << "Output: " << replaceZeroWithFive(n);
  return 0;
}


// 2nd method jisme hum input ko space dekr v le sakte hai

#include <iostream>
using namespace std;

void replaceZeroWithFive() {
  char n;

  while (cin >> n) {

    if (n == '0') {
      n = '5';
    }
    cout << "Output: " << n << " ";
  }
}

int main() {
  cout << "Enter Number: ";
  replaceZeroWithFive();
  return 0;
}