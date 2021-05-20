#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int middle=n/2;
       int initialSum=0;
       int appendSum=0;
       for(int i=0,j=n-1;i<middle,j>middle-1;i++,j--){
           initialSum+=a[i];
           appendSum+=a[j];
       }
       if(initialSum==appendSum){
           return 0;
       }else{
           return abs(initialSum-appendSum);
       }
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends