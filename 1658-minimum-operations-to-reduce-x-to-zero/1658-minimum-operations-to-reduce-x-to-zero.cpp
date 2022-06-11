
class Solution {
public:

    int minOperations(vector<int>& v, int x) {
        
        int sum=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        sum-=x;
        int len=-1;
        for(int i=0,j=0,sum1=0;j<n;j++){
             sum1+=v[j];
             while(i<=j && sum1>sum){
                 sum1-=v[i++];
             }
             if(sum1==sum){
                 len=max(len,j-i+1);
             }
        }
        if(len==-1){
            return -1;
        }else{
            return n-len;
        }
    }
};