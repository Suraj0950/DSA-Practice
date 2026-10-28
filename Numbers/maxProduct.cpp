#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int> &arr){
  sort(arr.begin(), arr.end());
  int n = arr.size();

  return max(
    arr[n - 1] * arr[n - 2] * arr[n - 3],
    arr[0] * arr[1] * arr[n - 1]
  );
}

int main(){
  int n;
  cout << "Enter Size: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter Numbers: ";

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  cout << "Output: " << maxProduct(arr);

  return 0;
}