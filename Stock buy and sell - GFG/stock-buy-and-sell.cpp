// { Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        
        if(price[i]<price[i+1]){
            int j=i;
            flag=true;
            while(i+1<n && price[i]<price[i+1]){
                i++;
            }
           cout<<"("<<j<<" "<<i<<") ";
        }
    }
    if(!flag){
        cout<<"No Profit";
    }
    cout<<endl;
}