#include <iostream>
#include <vector>
#include <string>
using namespace std;

string NumToWord(int n){
  string words[] = {
    "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"
  };
  string tens[] = {
    "", "", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"
  };

  if(n < 20) return words[n];

  if(n < 100){
    if(n % 10 == 0){
      return words[n % 10] + tens[n % 10];
    }
  }

  return "hundred";
}