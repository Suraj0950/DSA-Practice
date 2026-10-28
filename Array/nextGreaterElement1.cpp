#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr1, vector<int> &arr2){
  unordered_map<int, int> m;
  stack<int> st;

  for(int element : arr2){
    while(!st.empty() && element > st.top()){
      m[st.top()] = element;
      st.pop();
    }
    st.push(element);
  }

  while(!st.empty()){
    m[st.top()] = -1;
    st.pop();
  }

  vector<int> ans;
  for(int element : arr1){
    ans.push_back(m[element]);
  }
  return ans;

}

int main(){
  int n1;
  cout << "Enter n1: ";
  cin >> n1;

  vector<int> arr1(n1);
  cout << "Enter Array1: ";
  for (int i = 0; i < n1; i++){
    cin >> arr1[i];
  }

  int n2;
  cout << "Enter n2: ";
  cin >> n2;

  vector<int> arr2(n2);
  cout << "Enter Array2: ";
  for (int i = 0; i < n2; i++){
    cin >> arr2[i];
  }

  vector<int> ans = nextGreaterElement(arr1, arr2);
  cout << "Output: ";
  for(int x : ans){
    cout << x << " ";
  }

  return 0;
}