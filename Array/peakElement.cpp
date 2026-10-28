#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr){
  int left = 0;
  int right = arr.size() - 1;

  while(left < right){
    int mid = left + (right - left) / 2;
    if(arr[mid] > arr[mid + 1]){
      right = mid ;
    } else {
      left = mid + 1;
    }
  }
  return left;
}

int main(){
  int n;
  cout << "Enter size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter Array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int index = peakElement(arr);
  cout << "Peak Index: " << index << endl;
  cout << "Peak Index Element: " << arr[index];

  return 0;
}