#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        mpp[0]=1;
        int ps=0,cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            ps+=nums[i];
            int remov=ps-k;
            cnt+=mpp[remov];
            mpp[ps]+=1;
        }
        return cnt;
    }