#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   int n = sizeof(arr)/sizeof(arr[0]);
   vector<int>v1;
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int sum=0;
           for(int k=i;k<=j;k++){
               sum=sum+arr[k];
           }
           v1.push_back(sum);
       }
   }
   cout << "Maximum Sum Contiguous Subarray = "<< *max_element(v1.begin(), v1.end());
}