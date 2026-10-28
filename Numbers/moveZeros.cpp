#include <iostream>
#include <vector>
using namespace std;

// MOVE ZEROS TO LAST
void moveZeros(vector<int> &arr, int i, int j){
  int n = arr.size();

  if(i == n) return;

  if(arr[i] != 0) {
    swap(arr[i], arr[j]);
    j++;
  }

  moveZeros(arr, i+1, j);
}
  
int main(){
  int n;              
  cin >> n;

  vector<int> arr(n);
  
  for(int i = 0; i < n; i++ ){
    cin >> arr[i];
  }

  moveZeros(arr, 0 , 0);

  for (int x : arr){
    cout << x << " ";
  }

  return 0;    
}