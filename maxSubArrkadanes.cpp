#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   int n = sizeof(arr)/sizeof(arr[0]);
   int ans=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++){
        sum+=arr[i];
        ans=max(sum,ans);
        if(sum<0)
            sum=0;
   }
   cout << "Maximum Sum Contiguous Subarray = "<< ans;
}