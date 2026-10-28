#include <iostream>
using namespace std;

void addElement(int arr[], int &n, int pos, int val){
  // Right side shift
  for (int i = n; i > pos; i--){
    arr[i] = arr[i - 1];
  }
  // new element add
  arr[pos] = val;
  n++;
}

int main(){
  int n;
  cin >> n;
  int arr[100];

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int pos, val;
  cin >> pos >> val;

  addElement(arr, n, pos, val);

  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}