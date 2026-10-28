#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> Intersection(vector<int> &arr1, vector<int> &arr2){
  unordered_set<int> s;
  vector<int> ans;

  for(int num : arr1){
    s.insert(num);
  }

  for(int num : arr2){
    if(s.find(num) != s.end()){
      ans.push_back(num);
      s.erase(num);
    }
  }

  return ans;
}

int main(){
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<int> arr1(n);
  cout << "Enter Array1: ";
  for (int i = 0; i < n; i++){
    cin >> arr1[i];
  }

  int m;
  cout << "Enter m: ";
  cin >> n;
  
  vector<int> arr2(m);
  cout << "Enter Array2: ";
  for (int i = 0; i < n; i++){
    cin >> arr2[i];
  }

  vector<int> ans = Intersection(arr1, arr2);
  cout << "Output: ";
  for(int x : ans){
    cout << x << " ";
  }

  return 0;
}