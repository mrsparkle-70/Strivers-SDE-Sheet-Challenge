#include <bits/stdc++.h>
//OUTPUT YES OR NO
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for (int j = i+1; j < n; j++) {
          if (j != 0 && arr[j] == arr[j - 1])
            continue;
            int k=j+1;
            int l=n-1;

            while(k<l){
                long long sum=arr[i];
                sum+=arr[j];
                sum+=arr[k];
                sum+=arr[l];
            

            if(sum==target){
                return "Yes";
            }

            else if(sum<target){
                k++;
            } else {
              l--;
            }
            }
        }
    }

    return "No";
}


//OUTPUT THE QUADS
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for (int j = i+1; j < n; j++) {
          if (j != (i+1) && arr[j] == arr[j - 1])
            continue;
            int k=j+1;
            int l=n-1;

            while(k<l){
                long long sum=arr[i];
                sum+=arr[j];
                sum+=arr[k];
                sum+=arr[l];
            

            if(sum==target){
                vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                ans.push_back(temp);
                k++; l--;
                while(k<l && arr[k]==arr[k-1]){
                    k++;
                }
                
                while(k<l && arr[l]==arr[l+1]){
                         l--;
                 }
                 }

                    else if(sum<target) k++;
                        
                else l--;
            }
        }
    }
    return ans;

    }
};
