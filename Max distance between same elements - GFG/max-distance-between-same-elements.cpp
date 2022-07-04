// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    
       vector<int>L(n+1,-1);
       vector<int>R(n+1,-1);
        int mx=0;
        for(int i=0;i<n;i++){
            if(L[arr[i]]==-1){
                L[arr[i]]=i;
            }
            
            R[arr[i]]=i;
            mx=max(R[arr[i]]-L[arr[i]],mx);
        }
        
        return mx;
        
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends