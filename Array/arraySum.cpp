#include <iostream>
#include <vector>
using namespace std;

int arraySum(vector<int> &arr, int i){
  int n = arr.size();

  if(i == n) return 0;

  return arr[i] + arraySum(arr, i + 1);
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  cout << "Array Sum is: " << arraySum(arr, 0);

  return 0;
}