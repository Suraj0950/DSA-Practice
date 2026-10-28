#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int thirdMax(vector<int> &arr){
  int n = arr.size();
  int first = INT_MIN;
  int second = INT_MIN;
  int third = INT_MIN;

  for (int i = 0; i < n; i ++){
    if(arr[i] > first){
      third = second;
      second = first;
      first = arr[i];
    } else if (arr[i] > second && arr[i] != first){
      third = second;
      second = arr[i];
    } else if (arr[i] > third && arr[i] != second && arr[i] != first){
      third = arr[i];
    }
  }
  return third;
}

int main(){
  int n;
  cout << "Enter Size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter Array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  cout << "Output: " << thirdMax(arr);

  return 0;
}