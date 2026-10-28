#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &arr){

  int n = arr.size();
  unordered_set<int> s;

  for (int i = 0; i < n; i++){
    if(s.find(arr[i]) != s.end()){
      return true;
    }

    s.insert(arr[i]);
  }

  return false;
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  if(containsDuplicate(arr)){
    cout << "Duplicate Found.";
  } else {
    cout << "Not Duplicate.";
  }

  return 0;
}