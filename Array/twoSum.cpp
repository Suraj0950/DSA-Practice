#include <iostream>
#include <vector>
using namespace std;

vector<int>twoSum(vector<int> &arr, int target){
  int n = arr.size();

  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if(arr[i] + arr[j] == target){
        return {i, j};
      }
    }
  }
  return {};
}

int main(){
  int n, target;
  cout << "Enter size and target: ";
  cin >> n >> target;

  vector<int> arr(n);
  cout << "Enter Array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  vector<int> ans = twoSum(arr, target);
  cout << "Index: [" << ans[0] << " " << ans[1] << "]";

  return 0;
}