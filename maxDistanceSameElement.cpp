
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    int maxDistance=0;
    unordered_map<int,int>occurence;
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;j>=0;j--){
    //         if(arr[i]==arr[j]){
    //             int currentMax=j-i;
    //             if(currentMax>maxDistance)
    //             maxDistance=currentMax;
    //         }
    //     }
    // }
    for(int i=0;i<n;i++){
        if(occurence.find(arr[i]) == occurence.end() ){
        occurence[arr[i]]=i;
        }
        else{
         maxDistance=max(maxDistance,i-occurence[arr[i]])  ; 
        }
    }
    return maxDistance;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}  