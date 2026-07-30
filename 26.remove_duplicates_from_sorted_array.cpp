#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  optimal(vector<int>arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
    
}