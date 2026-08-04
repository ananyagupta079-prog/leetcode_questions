#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,n=nums.size(),st=0,anstart=0,ansend=0,s=0;
        for(int i=0;i<n;i++){
            if(s==0){
                st=i;
            }
            s+=nums[i];
            if(s>maxi){
                maxi=s;
                anstart=st;
                ansend=i;
            }
            if(s<0){
                s=0;
            }
        }
        return maxi;
    }