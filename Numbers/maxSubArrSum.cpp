#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// THROUGH KADANES ALGORITHM
int maxSubArrSum(vector<int>& arr){
    int sum = 0;
    int maxi = arr[0];

    for(int i=0; i<arr.size(); i++){
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    return maxi;
}

int main(){ 
    int n;
    cin >> n;

    vector<int>arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << maxSubArrSum(arr) << endl;
    return 0;
}
