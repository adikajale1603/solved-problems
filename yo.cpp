#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int>v(n);
      for(auto &x:v){
          cin>>x;
      }
      vector<int>unlocked;
      vector<int>l(n);
      for(auto &x:l)
      cin>>x;
      for(int i=0;i<n;i++){
          if(!l[i]){
              unlocked.push_back(v[i]);
          }
      }
      sort(unlocked.begin(),unlocked.end(),greater<int>());
      for(int i=0,j=0;i<n && j<unlocked.size();i++){
          if(!l[i]){
              v[i]=unlocked[j];
              j++;
          }
      }
      for(auto x:v){
          cout<<x<<" ";
      }
      cout<<"\n";
  }
}
