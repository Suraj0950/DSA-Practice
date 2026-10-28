#include <iostream>
#include <cmath>
using namespace std;

void findQuadratic(double a, double b, double c){
  double D = b * b - 4 * a * c;
  
  if(D > 0){
    double Root1 = (-b + sqrt(D)) / (2 * a);
    double Root2 = (-b - sqrt(D)) / (2 * a);

    cout << "Root1: " << Root1 << endl;
    cout << "Root2: " << Root2 << endl;
    
  } else if (D == 0) {
    double root = - b / (2 * a);
    cout << "Both Roots are Same.";
  } else {
    cout << "Roots are imaginary.";
  }
}

int main(){
  double a, b, c;
  cout << "Enter a b c : ";
  cin >> a >> b >> c;
  findQuadratic(a, b, c);
  return 0;
}