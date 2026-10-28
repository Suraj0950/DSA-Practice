#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightRotatedArray(vector<int> &arr, int k){
  int n = arr.size();

  k = k % n;

  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());

}

int main(){
  int n;
  cout << "Enter Sizeof Array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter Array Element: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int k;
  cout << "Enter k: ";

  cin >> k;

  rightRotatedArray(arr, k);
  cout << "Output: ";
  for(int x : arr){
    cout << x << " ";
  }

  return 0;
}