class Solution {
public:
    int minimumNumbers(int num, int k) {
           bool ok=true;
        int cnt=0;
            if(num==0){
                return 0;
            }
           if(k==0){
               if(num%10==0){
                   return 1;
               }else{
                   return -1;
               }
           }
           while(num>=k && num%10!=k){
                num-=k;
                cnt++;
              
           }
        if(num%10!=k){
            return -1;
        }
        else{
            return cnt+1;
        }
    }
};