
#include <iostream>
#include <vector>
using namespace std;

int findLength(vector<int> &arr){
  int n = arr.size();
  int count = 1;
  int maxi = 1;

  for (int i = 1; i < n; i++){
    if(arr[i] > arr[i-1]){
      count++;
    } else {
      count = 1;
    }
    maxi = max(maxi, count);
  }
  return maxi;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << "Output: " << findLength(arr);

    return 0;
}
