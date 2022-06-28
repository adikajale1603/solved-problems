// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int N, int M, vector<vector<int>> Mat) {
        if(N<3 || M<3){
            return -1;
        }
          int mx=0;
          
          for(int  i=0;i<=N-3;i++){
              for(int j=0;j<=M-3;j++){
                  int sum=0;
                  
                  for(int k=j;k<j+3;k++){
                      sum+=Mat[i][k];
                  }
                  
                  
                      sum+=Mat[i+1][j+1];
                  
                  
                  for(int k=j;k<j+3;k++){
                      sum+=Mat[i+2][k];
                  }
                 
                  mx=max(mx,sum);
              }
          }
          
          return mx;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}  // } Driver Code Ends