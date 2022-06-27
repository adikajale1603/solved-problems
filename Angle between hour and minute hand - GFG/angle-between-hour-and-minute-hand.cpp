// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getAngle(int hour , int minutes) {
        double hour_angle = (hour % 12 ) * 30 + minutes * 0.5;
        double minute_angle = minutes * 6;
        double diff = abs(hour_angle - minute_angle);
        return min(diff, 360 - diff);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int H,M;
        
        cin>>H>>M;

        Solution ob;
        cout << ob.getAngle(H,M) << endl;
    }
    return 0;
}  // } Driver Code Ends