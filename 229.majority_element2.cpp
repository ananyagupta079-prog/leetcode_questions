#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        map<int,int>mpp;
        int mm=(nums.size()/3)+1;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mm){
                ls.push_back(nums[i]);
            }
            if(ls.size()==2){
                break;
            }
        }
        sort(ls.begin(),ls.end());
        return ls;
    }