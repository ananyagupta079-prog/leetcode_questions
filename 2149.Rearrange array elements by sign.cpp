#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int n=nums.size(),pI=0,nI=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[nI]=nums[i];
                nI+=2;
            }
            else{
                ans[pI]=nums[i];
                pI+=2;
            }
        }
        return ans;
    }
