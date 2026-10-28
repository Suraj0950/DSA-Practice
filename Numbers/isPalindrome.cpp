#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int i, int j){
  if(i >= j){
    return true;
  }   
  
  if(str[i] != str[j]){
    return false;
  }

  return isPalindrome(str, i+1, j-1);
}

int main(){
  string str;

  cout << "Enter a string : " << endl;

  cin >> str;

  if(isPalindrome(str,0, str.length()-1)){
    cout << "Palindrome." << endl;
  } else {
    cout << "Not Palindrome." << endl;
  }

  return 0;
}