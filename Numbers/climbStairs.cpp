#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(101, -1);

int climbStairs(int n){
  // memorisation
  if(dp[n] != -1){
    return dp[n] = n;
  }
  // base case
  if(n <= 2){
    return dp[n] = n;
  }

  return dp[n] =  climbStairs(n - 1) + climbStairs(n - 2);
} 

int main(){
  int n;
  cout << "Enter number of stairs : ";
  cin >> n;
  cout << "Number of ways: "<< climbStairs(n) << endl;
  return 0;
}