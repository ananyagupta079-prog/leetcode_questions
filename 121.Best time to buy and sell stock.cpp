#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>& arr) {
        int mini=arr[0],profit=0,n=arr.size();
        for(int i=1;i<n;i++){
            int cost=arr[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,arr[i]);

        }
        return profit;
    }