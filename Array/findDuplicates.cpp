#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void Duplicates(vector<int> & arr){
  int n = arr.size();

  for (int i = 0; i < n; i++){

    int index = abs(arr[i]) - 1;

    if( arr[index] < 0){
      cout << "Duplicate elements: "<< abs(arr[i]) << endl;
    } else{
      arr[index] = -arr[index];
    }
  }
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

  Duplicates(arr);
  return 0;
}