#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &arr){
  int n = arr.size();
  int ans = 0;

  for (int i = 0; i < n; i++){
    ans = ans ^ arr[i];
  }

  return ans;
}

int main(){
  int n;
  cout << "Enter size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  cout << "Single number: " << singleNumber(arr);

  return 0;
}