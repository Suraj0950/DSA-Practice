#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<double, double> meanMedian(vector<int> &arr){
  int n = arr.size();
  long long sum = 0;

  for(int x : arr){
    sum += x;
  }

  double mean = (double)sum / n;

  sort(arr.begin(), arr.end());

  double median;

  if(n % 2 == 1){
    // odd ke liye
    median = arr[n / 2];
  } else {
    // even ke liye
    median = (arr[n / 2 - 1] + arr[n / 2])/2.0;
  }

  return {mean, median};

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

  pair<double, double> result = meanMedian(arr);

  cout << "Mean: " << result.first << endl;
  cout << "Median: " << result.second << endl;

  return 0;
}