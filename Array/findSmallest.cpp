#include <iostream>
#include <vector>
using namespace std;

void findSmallest(vector<int> &arr){
  int n = arr.size();
  int smallest = arr[0];
  int secondSmallest = arr[1];

  if(smallest > secondSmallest){
    swap(smallest, secondSmallest);
  }

  for (int i = 2; i < n; i++){
    if(arr[i] < smallest){
      secondSmallest = smallest;
      smallest = arr[i];
    } else if (arr[i] > smallest && arr[i] < secondSmallest) {
      secondSmallest = arr[i];
    }
  }

  cout << "Smallest number: " << smallest << endl;
  cout << "Second Smallest number: " << secondSmallest << endl;
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

  findSmallest(arr);
  return 0;
}