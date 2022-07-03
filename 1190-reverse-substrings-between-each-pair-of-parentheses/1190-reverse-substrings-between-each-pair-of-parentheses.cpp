class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<int> st;
        
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]==')'){
                
                int t=st.top();
                
                t++;
             
                reverse(s.begin()+t,s.begin()+i);
                
                st.pop();
            }
        }
        for(auto x:s){
            if(x!='(' && x!=')'){
                ans+=x;
            }
        }
        
        return ans;
    }
};