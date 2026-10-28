#include <iostream>
#include <vector>
using namespace std;

void frequency(vector<int> &arr, vector<bool> &visited, int i){
  int n = arr.size();

  // base case
  if(i == n) return;

  // already counted
  if(visited[i]){
    frequency(arr, visited, i + 1);
    return;
  }

  //count same element
  int count = 1;
  for (int j = i + 1; j < n; j++){
    if(arr[i] == arr[j]){
      count++;
      visited[j] = true;
    }
  }

  cout << arr[i] << " --> " << count << " Frequency." << endl;
  frequency(arr, visited, i + 1);
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  vector<bool> visited(n, false);
  frequency(arr, visited, 0);
  return 0;
}
