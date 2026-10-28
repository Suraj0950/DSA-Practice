#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr){
  int n = arr.size();

  bool ascending = true;
  bool descending = true;

  for (int i = 0; i < n - 1; i++){
    if(arr[i] > arr[i + 1]){
      ascending = false;
    }
    if(arr[i] < arr[i + 1]){
      descending = false;
    }
  }
  return ascending || descending;
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  if(isSorted(arr)){
    cout << "Array is sorted.";
  } else {
    cout << "Array is not sorted.";
  }
  return 0;
}