
class Solution {
public:

    int minOperations(vector<int>& v, int x) {
          int n=v.size();
          int mn=1e9;
          
          vector<int>prefix(n+1);
          vector<int>suffix(n+1);
        
          for(int i=0;i<n;i++){
              prefix[i+1]=v[i]+prefix[i];
          }
          for(int i=n-1;i>=0;i--){
             
              if(i==n-1){
                  suffix[i]=v[i];
              }else{
                  suffix[i]=v[i]+suffix[i+1];
              }
              
          }
          for(int i=n;i>=0;i--){
               int j=lower_bound(prefix.begin(),prefix.end(),x-suffix[i])-prefix.begin();
               if(x==suffix[i]){
                   mn=min(mn,n-i);
               }
              if(x==prefix[i]){
                  mn=min(mn,i);
              }
               if(j<=n && (prefix[j]==x-suffix[i])){
                 
                   if(j<i){
                         cout<<i<<" "<<j<<"\n";
                       mn=min(mn,(n-i+j));
                   }else{
                       break;
                   }
               }
              if(j>n)
                  break;
              }
        return (mn==1e9?-1:mn);
    }
};