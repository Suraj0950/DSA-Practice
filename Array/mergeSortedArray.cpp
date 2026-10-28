#include <iostream>
#include <vector>
using namespace std;

vector<int>mergeArray(vector<int> &arr1, vector<int> &arr2){
  int i = 0;
  int j = arr2.size() - 1;

  vector<int> ans;

  while(i < arr1.size() && j >= 0){
    if( arr1[i] <= arr2[j]){
      ans.push_back(arr1[i]);
      i++;
    } else {
      ans.push_back(arr2[j]);
      j--;
    }
  }

  while(i < arr1.size()){
    ans.push_back(arr1[i]);
    i++;
  }

  while(j >= 0){
    ans.push_back(arr2[j]);
    j--;
  }

  return ans;
  
}

int main(){
  int n;
  cout << "n size: ";
  cin >> n;

  vector<int> arr1(n);
  cout << "Enter n Array: ";
  for (int i = 0; i < n; i++){
    cin >> arr1[i];
  }

  int m;
  cout << "m size: ";
  cin >> m;

  vector<int> arr2(m);
  cout << "Enter m Array: ";
  for (int i = 0; i < m; i++){
    cin >> arr2[i];
  }

  vector<int> ans = mergeArray(arr1, arr2);

  cout << "Merged-Array : ";

  for(int x : ans){
    cout << x << " ";
  }

  return 0;
}