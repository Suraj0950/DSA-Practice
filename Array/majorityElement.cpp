#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr){
  int majority = 0;
  int count = 0;

  for(int element : arr){
    if(count == 0){
      majority = element;
    }
    if(element == majority){
      count++;
    }else{
      count--;
    }
  }
  return majority;
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

  cout << "Output: " << majorityElement(arr);

  return 0;
}