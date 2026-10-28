#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<int, int> freq;

bool compare(int a, int b){
  if(freq[a] == freq[b]){
    return a < b;
  }
  return freq[a] > freq[b];
}

vector<int> sortByFreq(vector<int> &arr){
  for (int i = 0; i < arr.size(); i++){
    freq[arr[i]]++;
  }

  sort(arr.begin(), arr.end(), compare);

  return arr;
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

  vector<int> result = sortByFreq(arr);
  cout << "Output: ";
  for (int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
  }

  return 0;
}
