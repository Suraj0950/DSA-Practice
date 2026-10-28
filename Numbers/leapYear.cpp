#include <iostream>
using namespace std;

bool isLeapYear(int year){
  if(year % 400 == 0){
    return true;
  }
  if(year % 4 == 0){
    return true;
  }
  if(year % 100 == 0){
    return false;
  }
  return false;
}

int main(){
  int year;
  cout << "Enter Year: ";
  cin >> year;

  if(isLeapYear(year)){
    cout << year << " is a leap year.";
  } else {
    cout << year << " is not a leap year.";
  }
  return 0;
}